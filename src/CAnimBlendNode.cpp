#include "CAnimBlendNode.h"
#include "memory.hpp"

void CAnimBlendNode::CalcDeltas()
{
    memory::GtaCall<void>(0xE68480, this);
}

char CAnimBlendNode::FindKeyFrame(float a2)
{
    return memory::GtaCall<char>(0xE68680, this, a2);
}

char CAnimBlendNode::SetupKeyFrameCompressed()
{
    return memory::GtaCall<char>(0xE68B70, this);
}