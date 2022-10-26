#pragma once

#include "MapaBase.h"
#include "CamiSolucio.h"
#include "Util.h"
using namespace std;

class MapaSolucio : public MapaBase, public CamiSolucio
{
public:
	void getPdis(vector<PuntDeInteresBase*>& pdis);
	void getCamins(vector<CamiBase*>& camins);
	void parsejaXmlElements(vector<XmlElement>& xmlElements);
	
private:
	vector<CamiBase*> m_camins;
	vector<PuntDeInteresBase*> m_pdis;

};
