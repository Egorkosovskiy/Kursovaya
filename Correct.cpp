#include "Correct.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

	Correct::Correct()
	{
		colorbody = "";
	}
	Correct::Correct(const Correct& cor)
	{
		Office(of);
		colorbody = cor.colorbody;
	}
	void Correct::PrintAllInformation() 
	{
		Office::PrintAllInformation();
		cout << "÷вет покрыти€: " << colorbody << endl;
	}
	void Correct::SetColorbody(string Colorbody)
	{
		colorbody = Colorbody;
	}
	string Correct::GetColorbody() const
	{
		return colorbody;
	}
	Correct& Correct::operator=(const Correct& cor)
	{
		Office::operator=(cor);
		colorbody = cor.colorbody;
	}
	void Correct::readFromFile(char*path) 
	{
		Office::readFromFile(path);
		ifstream file(path);
		string tmp;
		getline(file, tmp);
		colorbody = tmp;
		file.close();
	}
	void Correct::writeToFile(string path) 
	{
		Office::writeToFile(path);
		ofstream file(path, std::ios::app);
		file << "÷вет покрыти€: ";
		file << colorbody << endl;
		file.close();
	}
	void Correct::enterFromKeyboard() 
	{
		Office::enterFromKeyboard();
		cout << "÷вет покрыти€: ";
		cin >> colorbody;
	}
