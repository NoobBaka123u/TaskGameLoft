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
	this->m_resistance = m_resistance;
}

int Patient::GetResistancePatient()
{
	return this->m_resistance;
}

void Patient::InitResistance()
{
	int r = rand() % 9000 + 1000;
	this->SetResistancePatient(r);
}
