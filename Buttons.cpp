#include "Buttons.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

	Buttons::Buttons()
	{
		diametrr = 0;
	}
	Buttons::Buttons(const Buttons& but)
	{
		SmallOffice(sof);
		diametrr = but.diametrr;
	}
	void Buttons::PrintAllInformation()
	{
		SmallOffice::PrintAllInformation();
		cout << "Диаметр шляпки: " << diametrr << endl;
	}
	void Buttons::SetDiametrr(int Diametrr)
	{
		diametrr = Diametrr;
	}
	int Buttons::GetDiametrr() const
	{
		return diametrr;
	}
	Buttons& Buttons::operator=(const Buttons& but)
	{
		SmallOffice::operator=(but);
		diametrr = but.diametrr;
	}
	void Buttons::readFromFile(char*path)
	{
		SmallOffice::readFromFile(path);
		ifstream file(path);
		file >> diametrr;
		file.close();
	}
	void Buttons::writeToFile(string path)
	{
		SmallOffice::writeToFile(path);
		ofstream file(path, std::ios::app);
		file << "Диаметр: ";
		file << diametrr << endl;
		file.close();
	}
	void Buttons::enterFromKeyboard()
	{
		SmallOffice::enterFromKeyboard();
		cout << "Диаметр шляпки: ";
		cin >> diametrr;
	}
