#pragma once
#include <iostream>
#include <list>
using namespace std;

class Pathogen
{
private:
	char* m_dna; // to store the order of acid nucleic sequence (A, T, G, X) 
	int m_resistance; //the Pathogen resistance ability (10 – 30) 

public:
	Pathogen();
	Pathogen(const Pathogen* pathogen);
	~Pathogen();
	void SetResistancePathogen(int m_resistance);
	int GetResistancePathogen();
	void LoadADNInformation​();
	int ReduceResistance​(int medicine_resistance);
	virtual void DoBorn();
	virtual list<Pathogen*> DoClone();
	virtual void DoDie();
	virtual void InitResistance();
};