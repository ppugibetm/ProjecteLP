#include "pch.h"
#include "CamiSolucio.h"
#include <string>

using namespace std;

vector<Coordinate> CamiSolucio::getCamiCoords()
{
	vector<Coordinate> v;
	Coordinate c;

	c.lat = 41.4928803;
	c.lon = 2.1452381;
	v.push_back(c);

	c.lat = 41.4929072;
	c.lon = 2.1452474;
	v.push_back(c);

	c.lat = 41.4933070;
	c.lon = 2.1453852;
	v.push_back(c);

	c.lat = 41.4939882;
	c.lon = 2.1456419;
	v.push_back(c);

	return v;
}
