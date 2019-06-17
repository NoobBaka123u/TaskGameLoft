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

void Patient::TakeMedicine(int medicineResitance)
{
	list<Pathogen*>::iterator iter;
	int sizeList = m_pathogenList.size();
	iter = m_pathogenList.begin();
	int medicineResistanceNow;
	int totalResistancePathogen = 0;
	list<Pathogen*> listPathogenClone;

	for (int i = 0; i < sizeList; i++)
	{
		medicineResistanceNow = (*iter)->ReduceResistance​(medicineResitance);
		if (medicineResistanceNow <= 0)
		{
			(*iter)->DoDie();
			m_pathogenList.erase(iter++);
		}
		else
		{
			listPathogenClone = (*iter++)->DoClone();
			m_pathogenList.insert(m_pathogenList.end(), listPathogenClone.begin(), listPathogenClone.end());
			totalResistancePathogen += medicineResistanceNow;
		}
	}
	if (totalResistancePathogen == 0)
	{
		this->m_state = 0;
		this->GetState();
		cout << "Clean Pathogen!!" << endl;
	}
	int patientResistanceNow = this->GetResistancePatient() - totalResistancePathogen;
	if (patientResistanceNow <= 0)
	{
		this->GetState();
		this->DoDie();
	}
	else
	{
		this->SetResistancePatient(patientResistanceNow);
	}
}

void Patient::DoDie()
{
	this->m_state = 0;
	delete this;
	cout << "Patient dead!!!" << endl;
}

int Patient::GetState()
{
	return this->m_state;
}
