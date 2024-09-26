#include "CAEPedSpeechAudioEntity.h"
#include "memory.hpp"

char &CAEPedSpeechAudioEntity::s_bAPlayerSpeaking = *reinterpret_cast<char *>(memory::GetAddr(0x4FEE142));

signed long CAEPedSpeechAudioEntity::CanWePlayGlobalSpeechContext(unsigned short a2)
{
    return memory::GtaCall<signed long>(0xE8BC90, this, a2);
}

signed short CAEPedSpeechAudioEntity::GetSoundAndBankIDs(unsigned short phraseId, short *a3)
{
    return memory::GtaCall<signed short>(0xE8B080, this, phraseId, a3);
}

long CAEPedSpeechAudioEntity::LoadAndPlaySpeech(int a2)
{
    return memory::GtaCall<long>(0xE8B780, this, a2);
}

long CAEPedSpeechAudioEntity::GetVoice(const char *name, short type)
{
    return memory::GtaCall<long>(0xE8A030, name, type);
}

void CAEPedSpeechAudioEntity::StopCurrentSpeech()
{
    memory::GtaCall<void>(0xE8A760, this);
}