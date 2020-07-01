#pragma once
#include "SmallOffice.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;
class Buttons : public SmallOffice
{
protected:
	int diametrr;
public:
		Buttons();

		Buttons(const Buttons& but);

		void PrintAllInformation() override;

		void SetDiametrr(int Diametrr);

		int GetDiametrr() const;

		Buttons& operator=(const Buttons& but);

		void readFromFile(char*path) override;

		void writeToFile(string path) override;

		void enterFromKeyboard() override;
	
};