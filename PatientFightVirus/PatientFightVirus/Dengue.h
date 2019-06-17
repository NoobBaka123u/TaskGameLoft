#pragma once
#include "Pathogen.h"
#define BUFFER_SIZE 4

class Dengue : public Pathogen
{
private:
	char m_protein[BUFFER_SIZE];

public:
	Dengue();
	Dengue(const Dengue* pathogen);
	~Dengue();
	void DoBorn();
	list<Pathogen*> DoClone();
	void DoDie();
	void InitResistance();
};