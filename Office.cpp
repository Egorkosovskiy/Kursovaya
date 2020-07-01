#include "Office.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

	Office::Office()
	{
		quantity = 0;
	}
	Office::Office(const Office& quan)
	{
		Stationery(stat);
		quantity = quan.quantity;
	}
	void Office::PrintAllInformation() 
	{
		Stationery::PrintAllInformation();
		cout << "Количество: " << quantity << endl;
	}
	void Office::SetQuantity(int Quantity)
	{
		quantity = Quantity;
	}
	int Office::GetQuantity() const
	{
		return quantity;
	}
	Office& Office::operator=(const Office& quan)
	{
		Stationery::operator=(quan);
		quantity = quan.quantity;
	}
	void Office::readFromFile(char*path) 
	{
		Stationery::readFromFile(path);
		ifstream file(path);
		file >> quantity;
		file.close();
	}
	void Office::writeToFile(string path) 
	{
		Stationery::writeToFile(path);
		ofstream file(path, std::ios::app);
		file << "Количество: ";
		file << quantity << endl;
		file.close();
	}
	void Office::enterFromKeyboard() 
	{
		Stationery::enterFromKeyboard();
		cout << "Количество: ";
		cin >> quantity;
	}
