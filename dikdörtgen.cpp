#include "dikdörtgen.h"

void dikdortgen::setBoy(int x)
{
	boy = x;
}

int dikdortgen::getBoy()
{
	return boy;
}

void dikdortgen::setEn(int y)
{
	en = y;
}

int dikdortgen::getEn()
{
	return en;
}

int dikdortgen::dikAlan()
{
	alan = en * boy;
	return alan;
}
