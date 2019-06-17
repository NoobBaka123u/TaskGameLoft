﻿#include "Pathogen.h"
#include <fstream>
#define MAX 50



Pathogen::Pathogen()
{
}

Pathogen::Pathogen(const Pathogen* pathogen)
{
	this->m_dna = pathogen->m_dna;
	this->m_resistance = pathogen->m_resistance;
}

Pathogen::~Pathogen()
{
}

void Pathogen::SetResistancePathogen(int m_resistance)
{

}

int Pathogen::GetResistancePathogen()
{
	return 0;
}

void Pathogen::LoadADNInformation​()
{
	this->m_dna = new char[MAX];
	ifstream inFile;
	inFile.open("ATGX.bin");
	if (inFile.is_open())
	{
		while (!inFile.eof())
		{
			inFile >> this->m_dna;
		}
		inFile.close();
		//		cout << "Load file successful!";
	}
	else
	{
		cout << "Load file ATGX.bin error!";
	}

}

int Pathogen::ReduceResistance​(int medicine_resistance)
{
	this->m_resistance = this->m_resistance - medicine_resistance;
	return this->m_resistance;
}

void Pathogen::DoBorn()
{
}

list<Pathogen*> Pathogen::DoClone()
{
	return list<Pathogen*>();
}

void Pathogen::DoDie()
{
}

void Pathogen::InitResistance()
{
}
