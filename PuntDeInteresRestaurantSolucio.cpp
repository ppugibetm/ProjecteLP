#include "pch.h"
#include "PuntDeInteresRestaurantSolucio.h"
#include <string>
using namespace std;

string PuntDeInteresRestaurantSolucio::getName()
{
	return m_name;
}

unsigned int PuntDeInteresRestaurantSolucio::getColor() {
	if (m_cuisine == "pizza" && m_wheelchair == "yes")
		return 0x03FCBA;
	else if (m_cuisine == "chinese")
		return 0xA6D9F7;
	else if (m_wheelchair == "yes")
		return 0x251351;

	return PuntDeInteresBase::getColor();
}




