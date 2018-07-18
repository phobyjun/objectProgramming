#include "Drug.h"

SDrug::SDrug()
{
	Item::setName("소형 회복약");
	Item::setCost(20);
	Drug::setVal(40);
}

MDrug::MDrug()
{
	Item::setName("중형 회복약");
	Item::setCost(40);
	Drug::setVal(70);
}

LDrug::LDrug()
{
	Item::setName("대형 회복약");
	Item::setCost(60);
	Drug::setVal(100);
}
