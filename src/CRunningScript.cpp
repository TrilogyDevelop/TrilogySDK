#include "CRunningScript.h"

void CRunningScript::ProcessOneCommand() {
	std::uint16_t& CommandsExecuted = *reinterpret_cast<std::uint16_t*>(memory::GetAddr(0x5002674));
	CommandsExecuted++;

	auto Read2BytesFromScript = [](uint8_t*& ip) -> std::int16_t {
		int16_t retval = *reinterpret_cast<int16_t*>(ip);
		ip += 2;
		return retval;
	};

	union {
		int16_t op;
		struct {
			uint16_t command : 15;
			uint16_t notFlag : 1;
		};
	} op = { Read2BytesFromScript(this->m_pCurrentIP) };

	if (op.command < 0xa8c) {
		using CommandHandlerFn_t = std::int8_t(__thiscall CRunningScript::*)(int32_t);
		using CommandHandlerTable_t = std::array<CommandHandlerFn_t, 27>;
		CommandHandlerTable_t& s_OriginalCommandHandlerTable = *(CommandHandlerTable_t*)(memory::GetAddr(0x418A140));
		std::invoke(s_OriginalCommandHandlerTable[(size_t)op.command / 100], this, (int32_t)op.command);
	}
	else {
		memory::GtaCall<int8_t>(0xF4A250, this, op.command);
	}
}

void CRunningScript::Init() {
	reinterpret_cast<void(*)(CRunningScript*)>(memory::GetAddr(0xF2A980))(this);
}

