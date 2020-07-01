#pragma once
#include "Pencil.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;
class MechPencil : public Pencil {
protected:
	double diametr;
	int rod;
public:
	MechPencil();

		MechPencil(const MechPencil& mpenc);

		void PrintAllInformation() override;

		void SetDiametr(double Diametr);

		double GetDiametr() const;

		void SetRod(int Rod);

		int GetRod() const;

		MechPencil& operator=(const MechPencil mpenc);

		void readFromFile(char*path) override;

		void writeToFile(string path) override;

		void enterFromKeyboard() override;
	
};