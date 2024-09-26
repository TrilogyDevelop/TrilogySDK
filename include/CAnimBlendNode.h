#pragma once

class CAnimBlendNode {
public:
    void CalcDeltas();
    char FindKeyFrame(float a2);
    char SetupKeyFrameCompressed();
};