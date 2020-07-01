#include "Stationery.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;
	Stationery::Stationery()
	{
		name = "";
		brand = "";
		price = 0;
	}
	Stationery::Stationery(const Stationery& stat)
	{
		name = stat.name;
		brand = stat.brand;
		price = stat.price;
	}
	void Stationery::PrintAllInformation()
	{
		cout << "������������: " << name << endl
			<< "�����: " << brand << endl
			<< "����: " << price << endl;
	}
	int Stationery::GetPrice() const
	{
		return price;
	}
	string Stationery::GetName() const 
	{
		return name;
	}
	string Stationery::GetBrand() const 
	{
		return brand;
	}
	void Stationery::SetPrice(int Price) 
	{
		price = Price;
	}
	void Stationery::SetName(string Name) 
	{

		name = Name;

	}
	void Stationery::SetBrand(string Brand) 
	{
		brand = Brand;
	}
	Stationery& Stationery::operator=(const Stationery& stat)
	{
		name = stat.name;
		brand = stat.brand;
		price = stat.price;
		return *this;
	}
	void Stationery::readFromFile(char*path) 
	{
		ifstream file(path);
		string tmp;
		getline(file, tmp);
		name = tmp;
		getline(file, tmp);
		brand = tmp;
		file >> price;
		file.close();
	}
	void Stationery::writeToFile(string path) 
	{
		ofstream file(path, std::ios::app);
		file << "��������: ";
		file << name << endl;
		file << "�������������: ";
		file << brand << endl;
		file << "����: ";
		file << price << endl;
		file.close();
	}
	void Stationery::enterFromKeyboard()
	{
		cout << "��������: ";
		cin >> name;
		cout << "�������������: ";
		cin >> brand;
		cout << "����: ";
		cin >> price;
	}