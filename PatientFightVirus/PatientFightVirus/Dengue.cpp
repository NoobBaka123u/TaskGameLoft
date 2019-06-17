#include "Dengue.h"



Dengue::Dengue()
{
	this->DoBorn();
}

Dengue::Dengue(const Dengue *dengue) : Pathogen(dengue)
{
	this->m_protein[BUFFER_SIZE] = dengue->m_protein[BUFFER_SIZE];
}


Dengue::~Dengue()
{
}

void Dengue::DoBorn()
{
	this->LoadADNInformation​();
	this->InitResistance();
}

list<Pathogen*> Dengue::DoClone()
{
	Pathogen* dengue1 = new Dengue(this);
	Pathogen* dengue2 = new Dengue(this);
	list<Pathogen*> dengueClone;
	dengueClone.push_back(dengue1);
	dengueClone.push_back(dengue2);
	return dengueClone;
}

void Dengue::DoDie()
{
	delete this;
}

void Dengue::InitResistance()
{

	int r = rand() % 3 + 1;
	if (r == 1)
	{
		strncpy_s(this->m_protein, "NS3", BUFFER_SIZE - 1);
		r = rand() % 10 + 1;
		this->SetResistancePathogen(r);
		cout << "NS3 Dengue" << " " << "Risistance:" << GetResistancePathogen() << endl;
	}
	else if (r == 2)
	{
		strncpy_s(this->m_protein, "NS5", BUFFER_SIZE - 1);
		r = rand() % 20 + 11;
		this->SetResistancePathogen(r);
		cout << "NS5 Dengue" << " " << "Risistance:" << this->GetResistancePathogen() << endl;
	}
	else
	{
		strncpy_s(this->m_protein, "E", BUFFER_SIZE - 1);
		r = rand() % 30 + 21;
		this->SetResistancePathogen(r);
		cout << "E Dengue" << " " << "Risistance:" << this->GetResistancePathogen() << endl;
	}
}
