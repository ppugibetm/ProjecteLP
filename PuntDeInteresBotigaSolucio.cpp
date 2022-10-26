#include "pch.h"
#include "PuntDeInteresBotigaSolucio.h"
#include <string>
using namespace std;

string PuntDeInteresBotigaSolucio::getName()
{
	return m_name;
}

unsigned int PuntDeInteresBotigaSolucio::getColor() {
	if (m_shop == "bakery" && m_wheelchair == "yes" && (m_opening_hours == "Div 06:00-22:00" || m_opening_hours == "Dill 06:00-22:00"))
		return 0x4CB944;
	else if (m_shop == "bakery")
		return 0xE85D75;
	if (m_shop == "supermarket")
		return 0xA5BE00;
	else if (m_shop == "tobacco")
		return 0xFFAD69;
	return 0xEFD6AC;
}