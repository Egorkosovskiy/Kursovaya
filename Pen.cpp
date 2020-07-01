#include "Pen.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

	Pen::Pen()
	{
		thickness = 0;
	}
	Pen::Pen(const Pen& pen)
	{
		Writting(write);
		thickness = pen.thickness;
	}
	void Pen::PrintAllInformation()
	{
		Writting::PrintAllInformation();
		cout << "Толщина линии: " << thickness << endl;
	}
	void Pen::SetThickness(double Thickness)
	{
		thickness = Thickness;
	}
	double Pen::GetThickness() const
	{
		return thickness;
	}
	Pen& Pen::operator=(const Pen pen)
	{
		Writting::operator=(pen);
		thickness = pen.thickness;
	}
	void Pen::readFromFile(char*path)
	{
		Writting::readFromFile(path);
		ifstream file(path);
		file >> thickness;
		file.close();
	}
	void Pen::writeToFile(string path)
	{
		Writting::writeToFile(path);
		ofstream file(path, std::ios::app);
		file << "Толщина линии: ";
		file << thickness << endl;
		file.close();
	}
	void Pen::enterFromKeyboard()
	{
		Writting::enterFromKeyboard();
		cout << "Толщина линии: ";
		cin >> thickness;
	}
