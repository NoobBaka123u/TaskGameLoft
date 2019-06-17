#pragma once
#include "Pathogen.h"
using namespace std;

class Flu : public Pathogen
{
private:
	int m_color;
public:
	Flu();
	Flu(const Flu* pathogen);
	~Flu();
	void DoBorn() override;
	list <Pathogen*> DoClone() override;
	void DoDie() override;
	void InitResistance() override;
};