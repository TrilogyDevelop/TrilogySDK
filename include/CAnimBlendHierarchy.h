#pragma once

class CAnimBlendHierarchy {
public:
    char field_0[8];
    short field_8;
    char field_A;
    char field_C;
    char field_E;
    short seqCount;
    char bRunningCompressed;
    char field_13;
    char field_14[4];
    float fTotalTime;
    char field_1C[4];
    char field_20[34];
    short field_42;
    short field_44;
    char field_46[2];
    long field_48;

    void RemoveUncompressedData();
};