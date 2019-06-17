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
	return list<Pathogen*>();
}

void Dengue::DoDie()
{
}

void Dengue::InitResistance()
{
}
