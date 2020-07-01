#include "Pencil.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

	Pencil::Pencil()
	{
		erase = "";
		softness = "";
	}
	Pencil::Pencil(const Pencil& penc)
	{
		Writting(write);
		erase = penc.erase;
		softness = penc.softness;
	}
	void Pencil::PrintAllInformation()
	{
		Writting::PrintAllInformation();
		cout << "Наличие стирателя: " << erase << endl;
		cout << "Мягкость: " << softness << endl;
	}
	void Pencil::SetErase(string Erase)
	{
		erase = Erase;
	}
	string Pencil::GetErase() const
	{
		return erase;
	}
	void Pencil::SetSoftness(string Softness)
	{
		softness = Softness;
	}
	string Pencil::GetSoftness() const
	{
		return softness;
	}
	Pencil& Pencil::operator=(const Pencil penc)
	{
		Writting::operator=(penc);
		erase = penc.erase;
		softness = penc.softness;
	}
	void Pencil::readFromFile(char*path)
	{
		Writting::readFromFile(path);
		ifstream file(path);
		string tmp;
		getline(file, tmp);
		erase = tmp;
		getline(file, tmp);
		softness = tmp;
		file.close();
	}
	void Pencil::writeToFile(string path)
	{
		Writting::writeToFile(path);
		ofstream file(path, std::ios::app);
		file << "Наличие стирателя: ";
		file << erase << endl;
		file << "Мягкость: ";
		file << softness << endl;
		file.close();
	}
	void Pencil::enterFromKeyboard()
	{
		Writting::enterFromKeyboard();
		cout << "Наличие стирателя: ";
		cin >> erase;
		cout << "Мягкость: ";
		cin >> softness;
	}
