#include <iostream>
#include "Flu.h"
#include "Dengue.h"
#include "Patient.h"
#include <ctime>
using namespace std;

void main()
{
	srand(time(NULL));
	char t = 0;
	Patient* patient = new Patient();
	cout << patient->GetResistancePatient() << endl;
	while (patient->GetState() != 0)
	{
		cout << "Take Medicine (No = 0, Yes = 1 : " << endl;
		cin >> t;
		int min = 1;

		int max = 15;

		int medicineResistance = min + (rand() % (max - min + 1));
		cout << "Medicine Resistance : " << medicineResistance << endl;
		patient->TakeMedicine(medicineResistance);
	}
	system("pause");
}