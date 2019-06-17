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
	return list<Pathogen*>();
}

void Flu::DoDie()
{
}

void Flu::InitResistance()
{
}
