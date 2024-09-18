#pragma once

#pragma pack(push, 1)
class CQueuedMode
{
public:
	short Mode;
	short __padding0;
	float Duration;
	short MinZoom;
	short MaxZoom;
};
#pragma pack(pop)
