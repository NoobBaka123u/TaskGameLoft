#pragma once
#include "Flu.h"
#include "Dengue.h"

class Patient
{
private:
	int m_resistance;
	int m_state;
protected:
	list<Pathogen*>m_pathogenList;

public:
	Patient();
	~Patient();

	void SetResistancePatient(int m_resistance);
	int GetResistancePatient();
	void InitResistance();
	void DoStart();
	void TakeMedicine(int medicineResitance);
	void DoDie();
	int GetState();
};