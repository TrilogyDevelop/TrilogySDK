#pragma once

class CRGBA {
public:
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;

	CRGBA(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
	void SetRGBAValue(unsigned char nColorId, unsigned char r, unsigned char g, unsigned char b, unsigned char a);
};