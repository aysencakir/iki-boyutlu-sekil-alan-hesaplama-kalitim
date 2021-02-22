#include <iostream>
#include "daire.h"
#include "dikdörtgen.h"
#include "ikiBoyutluSekiller.h"
#include "kare.h"
using namespace std;
int main()
{
	daire daire;
	kare kare;
	dikdortgen dikdortgen;
	kare.setKenar(10);
	int kare1 = kare.kareAlan();
	kare.setalan(kare1);
	cout << kare.getalan() << endl;
	dikdortgen.setEn(9);
	dikdortgen.setBoy(18);
	int dikdortgen1 = dikdortgen.dikAlan();
	dikdortgen.setalan(dikdortgen1);
	cout << dikdortgen.getalan() << endl;
    daire.setYaricap(6);
	int daire1 = daire.daireAlan();
	daire.setalan(daire1);
	cout << daire.getalan() << endl;
	return 0;
}