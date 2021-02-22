#include "daire.h"

void daire::setYaricap(int b)
{
	yaricap = b;
}

int daire::getYaricap()
{
	return yaricap;
}

int daire::daireAlan()
{
	alan = 2 * 3 * yaricap;
	
	return alan;
}
