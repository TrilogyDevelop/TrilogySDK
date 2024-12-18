#pragma once
#include <Windows.h>
#include <d3d11.h>
#include <dxgi.h>
#include <vector>
#include <functional>
#include <array>
#include "CRect.h"

namespace memory
{
	static std::uintptr_t GetBase(void)
	{
		return reinterpret_cast<uintptr_t>(GetModuleHandleA(NULL));
	}

	static std::uintptr_t GetAddr(std::uintptr_t addr)
	{
		return GetBase() + addr;
	}

	template<typename RetnType, typename ...Args>
	static RetnType GtaCall(std::uintptr_t addr, Args... args)
	{
		return reinterpret_cast<RetnType(*)(Args...)>(GetAddr(addr))(args...);
	}

	template<typename Type>
	static Type Read(std::uintptr_t addr) {
		DWORD newProtect;
		VirtualProtect((void*)(addr), sizeof(Type), PAGE_EXECUTE_READWRITE, &newProtect);
		Type value = *reinterpret_cast<Type*>((addr));
		VirtualProtect((void*)(addr), sizeof(Type), newProtect, &newProtect);
		return value;
	}

	template<typename Type>
	static void Write(std::uintptr_t addr, Type value) {
		DWORD newProtect;
		VirtualProtect((void*)(addr), sizeof(Type), PAGE_EXECUTE_READWRITE, &newProtect);
		*reinterpret_cast<Type*>((addr)) = value;
		VirtualProtect((void*)(addr), sizeof(Type), newProtect, &newProtect);
	}

	static void WriteBytes(std::uintptr_t addr, std::vector<std::uint8_t> bytes)
	{
		DWORD newProtect;
		VirtualProtect((void*)(addr), bytes.size(), PAGE_EXECUTE_READWRITE, &newProtect);
		memcpy(reinterpret_cast<void*>(addr), bytes.data(), bytes.size());
		VirtualProtect((void*)(addr), bytes.size(), newProtect, &newProtect);
	}

	static std::uintptr_t GetAddressFromOffsets(const std::uintptr_t& addr, const std::vector<std::uint32_t>& offsets)
	{
		std::uintptr_t retn_addr{ addr };
		for (unsigned __int8 i = 0; i < offsets.size(); i++)
			retn_addr = *(std::uintptr_t*)retn_addr + offsets[i];
		return retn_addr;
	}

	static void memory_fill(std::uintptr_t addr, const int value, const int size) {
		DWORD newProtect;
		VirtualProtect((void*)addr, size, PAGE_EXECUTE_READWRITE, &newProtect);
		memset((void*)addr, value, size);
		VirtualProtect((void*)addr, size, newProtect, &newProtect);
	}

	static HWND GetGameHWND() {
		std::vector<std::uint32_t> offsets{ 0xC8, 0, 0x28 };
		std::uintptr_t addr = GetAddressFromOffsets(memory::GetAddr(0x54F13E8), offsets);;
		return *reinterpret_cast<HWND*>(addr);
	}

	static std::uintptr_t GetGD3D11RHI()
	{
		return memory::GetAddr(0x055B4CB8);
	}

	static ID3D11Device* GetD3DDevice()
	{
		return *(ID3D11Device**)memory::GetAddressFromOffsets(GetGD3D11RHI(), { 0x170 });
	}

	static ID3D11DeviceContext* GetD3DeviceContext()
	{
		return *(ID3D11DeviceContext**)memory::GetAddressFromOffsets(GetGD3D11RHI(), { 0x158 });
	}

	static IDXGISwapChain* GetDXGISwapChain()
	{
		return *(IDXGISwapChain**)memory::GetAddr(0x051BC748);
	}

	static void* GetGameterface()
	{
		return *(void**)memory::GetAddr(0x556BB88);
	}

	static CRect GetWindowSize()
	{
		CRect rRect;
		rRect.left = 0;
		rRect.top = 0;
		rRect.right = memory::Read<uint32_t>(GetAddr(0x5156988));
		rRect.bottom = memory::Read<uint32_t>(GetAddr(0x515698C));

		return rRect;
	}
}