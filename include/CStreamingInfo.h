#pragma once

class CStreamingInfo {
public:
    short m_nNextIndex;
    short m_nPrevIndex;
    short m_nNextOnCd;
    unsigned char m_nFlags;
    char m_nImgId;
    int m_nCdPosn;
    int m_nCdSize;
    char field_10;
    char _pad11[3];
};