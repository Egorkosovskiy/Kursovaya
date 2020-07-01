#include "FountainPen.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

	FountainPen::FountainPen()
	{
		grip = "";
		consumables = 0;
	}
	FountainPen::FountainPen(const FountainPen& fpen)
	{
		Pen(pen);
		grip = fpen.grip;
		consumables = fpen.consumables;
	}
	void FountainPen::PrintAllInformation()
	{
		Pen::PrintAllInformation();
		cout << "Наличие грипа: " << grip << endl;
		cout << "Код расходных материалов: " << consumables << endl;
	}
	void FountainPen::SetGrip(string Grip)
	{
		grip = Grip;
	}
	string FountainPen::GetGrip() const
	{
		return grip;
	}
	void FountainPen::SetConsumables(int Consumables)
	{
		consumables = Consumables;
	}
	int FountainPen::GetMaterial() const
	{
		return consumables;
	}
	FountainPen& FountainPen::operator=(const FountainPen fpen)
	{
		Pen::operator=(fpen);
		grip = fpen.grip;
		consumables = fpen.consumables;
	}
	void FountainPen::readFromFile(char*path)
	{
		Pen::enterFromKeyboard();
		ifstream file(path);
		string tmp;
		getline(file, tmp);
		grip = tmp;
		file >> consumables;
		file.close();
	}
	void FountainPen::writeToFile(string path)
	{
		Pen::writeToFile(path);
		ofstream file(path, std::ios::app);
		file << "Наличие грипа: ";
		file << grip << endl;
		file << "Код расходных материалов: ";
		file << consumables << endl;
		file.close();
	}
	void FountainPen::enterFromKeyboard()
	{
		Pen::enterFromKeyboard();
		cout << "Наличие грипа: ";
		cin >> grip;
		cout << "Код расходных материалов: ";
		cin >> consumables;
	}
