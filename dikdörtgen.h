#include "ikiBoyutluSekiller.h"
class dikdortgen :public ikiBoyutluSekiller
{
public:
	void setBoy(int x);
	int getBoy();
	void setEn(int y);
	int getEn();
	int dikAlan();

private:
	int en;
	int boy;
};

