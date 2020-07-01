#include "MechPencil.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

	MechPencil::MechPencil()
	{
		diametr = 0;
		rod = 0;
	}
	MechPencil::MechPencil(const MechPencil& mpenc)
	{
		Pencil(openc);
		diametr = mpenc.diametr;
		rod = mpenc.rod;
	}
	void MechPencil::PrintAllInformation()
	{
		Pencil::PrintAllInformation();
		cout << "Диаметр: " << diametr << endl;
		cout << "Количество стержней: " << rod << endl;
	}
	void MechPencil::SetDiametr(double Diametr)
	{
		diametr = Diametr;
	}
	double MechPencil::GetDiametr() const
	{
		return diametr;
	}
	void MechPencil::SetRod(int Rod)
	{
		rod = Rod;
	}
	int MechPencil::GetRod() const
	{
		return rod;
	}
	MechPencil& MechPencil::operator=(const MechPencil mpenc)
	{
		Pencil::operator=(mpenc);
		diametr = mpenc.diametr;
		rod = mpenc.rod;
	}
	void MechPencil::readFromFile(char*path)
	{
		Pencil::readFromFile(path);
		ifstream file(path);
		file >> diametr;
		file >> rod;
		file.close();
	}
	void MechPencil::writeToFile(string path)
	{
		Pencil::writeToFile(path);
		ofstream file(path, std::ios::app);
		file << "Диаметр: ";
		file << diametr << endl;
		file << "Количество стержней: ";
		file << rod << endl;
		file.close();
	}
	void MechPencil::enterFromKeyboard()
	{
		Pencil::enterFromKeyboard();
		cout << "Диаметр: ";
		cin >> diametr;
		cout << "Количество стержней: ";
		cin >> rod;
	}
