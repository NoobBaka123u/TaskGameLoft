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

void Patient::DoStart()
{
	this->InitResistance();
	int amountVirus = rand() % 20 + 10;
	int typeVirus;
	for (int i = 0; i < amountVirus; i++)
	{
		typeVirus = rand() % 2 + 1;
		if (typeVirus == 1)
		{
			Pathogen *flu = new Flu();
			m_pathogenList.push_back(flu);
		}
		else
		{
			Pathogen *dengue = new Dengue();
			m_pathogenList.push_back(dengue);
		}
	}
	this->m_state = 1;
}
