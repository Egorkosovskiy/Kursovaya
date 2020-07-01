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
		cout << "������� �����: " << grip << endl;
		cout << "��� ��������� ����������: " << consumables << endl;
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
		file << "������� �����: ";
		file << grip << endl;
		file << "��� ��������� ����������: ";
		file << consumables << endl;
		file.close();
	}
	void FountainPen::enterFromKeyboard()
	{
		Pen::enterFromKeyboard();
		cout << "������� �����: ";
		cin >> grip;
		cout << "��� ��������� ����������: ";
		cin >> consumables;
	}
