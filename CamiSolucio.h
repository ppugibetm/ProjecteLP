#pragma once
#include "CamiBase.h"
#include <string>

using namespace std;

class CamiSolucio : public  CamiBase
{
public:
	CamiSolucio() {}
	~CamiSolucio() {}

	vector<Coordinate> getCamiCoords();
	void addCord(const Coordinate coord) { m_cami.push_back(coord); }
	void setCami(vector<Coordinate> coords) { m_cami = coords; }
	void setHighway(const string hw) { m_highway = hw; }

private:
	vector<Coordinate> m_cami;
	string m_highway;
};

