#pragma once

class CAEPedSpeechAudioEntity {
public:
    static char &s_bAPlayerSpeaking;

    signed long CanWePlayGlobalSpeechContext(unsigned short a2);
    signed short GetSoundAndBankIDs(unsigned short phraseId, short *a3);
    long LoadAndPlaySpeech(int a2);
    long GetVoice(const char *name, short type);
    void StopCurrentSpeech();
};