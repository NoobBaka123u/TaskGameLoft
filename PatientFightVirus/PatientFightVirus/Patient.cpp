#include "Patient.h"



Patient::Patient()
{
	this->m_resistance = 1;
	this->m_state = 1;
	this->DoStart();
}


Patient::~Patient()
{
	cout << "Destroy Patient!" << endl;
}

void Patient::SetResistancePatient(int m_resistance)
{
}
