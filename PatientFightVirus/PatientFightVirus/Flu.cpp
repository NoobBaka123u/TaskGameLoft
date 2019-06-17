#include "Flu.h"



Flu::Flu()
{
	this->DoBorn();
}

Flu::Flu(const Flu* flu) :Pathogen(flu)
{
	this->m_color = flu->m_color;
}

Flu::~Flu()
{

}

void Flu::DoBorn()
{
	this->LoadADNInformation​();
	this->InitResistance();
}

list<Pathogen*> Flu::DoClone()
{
	Pathogen* flu = new Flu(this);
	list<Pathogen*> fluClone;
	fluClone.push_back(flu);
	return fluClone;
}

void Flu::DoDie()
{
}

void Flu::InitResistance()
{
}
