#include "Writting.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

	Writting::Writting()
	{
		color = "";
	}
	Writting::Writting(const Writting& write)
	{
		Stationery(stat);
		color = write.color;
	}
	void Writting::PrintAllInformation()
	{
		Stationery::PrintAllInformation();
		cout << "Цвет: " << color << endl;
	}
	void Writting::SetColor(string Color)
	{
		color = Color;
	}
	string Writting::GetColor() const
	{
		return color;
	}
	Writting& Writting::operator=(const Writting& write)
	{
		Stationery::operator=(write);
		color = write.color;
	}
	void Writting::readFromFile(char*path)
	{
		Stationery::readFromFile(path);
		ifstream file(path);
		string tmp;
		getline(file, tmp);
		color = tmp;
		file.close();
	}
	void Writting::writeToFile(string path)
	{
		Stationery::writeToFile(path);
		ofstream file(path, std::ios::app);
		file << "Цвет: ";
		file << color << endl;
		file.close();
	}
	void Writting::enterFromKeyboard()
	{
		Stationery::enterFromKeyboard();
		cout << "Цвет: ";
		cin >> color;
	}
