#include "kare.h"

void kare::setKenar(int z)
{
	kenar = z;
}

int kare::getKenar()
{
	return kenar;
}

int kare::kareAlan()
{
	alan = kenar * kenar;
	return alan;
}
