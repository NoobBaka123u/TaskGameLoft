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
}

void Dengue::InitResistance()
{
}
