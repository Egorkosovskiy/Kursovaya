#include "CorrectPen.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

	CorrectPen::CorrectPen()
	{
		fluidsupply = "";
		tipmaterial = "";
	}
	CorrectPen::CorrectPen(const CorrectPen& corp)
	{
		Correct(penc);
		fluidsupply = corp.fluidsupply;
		tipmaterial = corp.tipmaterial;
	}
	void CorrectPen::PrintAllInformation()
	{
		Correct::PrintAllInformation();
		cout << "Подача жидкости: " << fluidsupply << endl;
		cout << "Материал наконечника: " << tipmaterial << endl;
	}
	void CorrectPen::SetFluidsupply(string Fluidsupply)
	{
		fluidsupply = Fluidsupply;
	}
	string CorrectPen::GetFluidsupply() const
	{
		return fluidsupply;
	}
	void CorrectPen::SetTipmaterial(string Tipmaterial)
	{
		tipmaterial = Tipmaterial;
	}
	string CorrectPen::GeTtipmaterial() const
	{
		return tipmaterial;
	}
	CorrectPen& CorrectPen::operator=(const CorrectPen corp)
	{
		Correct::operator=(corp);
		fluidsupply = corp.fluidsupply;
		tipmaterial = corp.tipmaterial;
	}
	void CorrectPen::readFromFile(char*path)
	{
		Correct::readFromFile(path);
		ifstream file(path);
		string tmp;
		getline(file, tmp);
		fluidsupply = tmp;
		getline(file, tmp);
		tipmaterial = tmp;
		file.close();
	}
	void CorrectPen::writeToFile(string path)
	{
		Correct::writeToFile(path);
		ofstream file(path, std::ios::app);
		file << "Подача жидкости: ";
		file << fluidsupply << endl;
		file << "Материал наконечника: ";
		file << tipmaterial << endl;
		file.close();
	}
	void CorrectPen::enterFromKeyboard()
	{
		Correct::enterFromKeyboard();
		cout << "Подача жидкости: ";
		cin >> fluidsupply;
		cout << "Материал наконечника: ";
		cin >> tipmaterial;
	}
