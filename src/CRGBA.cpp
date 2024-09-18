#include "CRGBA.h"

CRGBA::CRGBA(unsigned char r, unsigned char g, unsigned char b, unsigned char a) {
	this->r = r;
	this->g = g;
	this->b = b;
	this->a = a;
}

void CRGBA::SetRGBAValue(unsigned char nColorId, unsigned char r, unsigned char g, unsigned char b, unsigned char a) {
	CRGBA* nColor = &this[nColorId];
	nColor->r = r;
	nColor->g = g;
	nColor->b = b;
	nColor->a = a;
}