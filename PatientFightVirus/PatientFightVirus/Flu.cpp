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
	delete this;
}

void Flu::InitResistance()
{
	int r = rand() % 2 + 1;
	if (r == 1)
	{
		this->m_color = 0x0000ff;
		r = rand() % 20 + 10;
		this->SetResistancePathogen(r);
		cout << "Red Flu" << " " << "Risistance:" << GetResistancePathogen() << endl;
	}
	else
	{
		this->m_color = 0xff0000;
		r = rand() % 15 + 10;
		this->SetResistancePathogen(r);
		cout << "Blue Flu" << " " << "Risistance:" << GetResistancePathogen() << endl;
	}
}
