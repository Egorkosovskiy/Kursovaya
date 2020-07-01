#include "SmallOffice.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

SmallOffice::SmallOffice()
	{
		cover = "";
		shapee = "";
	}
SmallOffice::SmallOffice(const SmallOffice& sof)
	{
		Office(of);
		cover = sof.cover;
		shapee = sof.shapee;
	}
	void SmallOffice::PrintAllInformation() 
	{
		Office::PrintAllInformation();
		cout << "Покрытие: " << cover << endl;
		cout << "Форма: " << shapee << endl;
	}
	void SmallOffice::SetCover(string Cover)
	{
		cover = Cover;
	}
	string SmallOffice::GetCover() const
	{
		return cover;
	}
	void SmallOffice::SetShapee(string Shapee)
	{
		shapee = Shapee;
	}
	string SmallOffice::GetShapee() const
	{
		return shapee;
	}
	SmallOffice& SmallOffice::operator=(const SmallOffice sof)
	{
		Office::operator=(sof);
		cover = sof.cover;
		shapee = sof.shapee;
	}
	void SmallOffice::readFromFile(char*path) 
	{
		Office::readFromFile(path);
		ifstream file(path);
		string tmp;
		getline(file, tmp);
		cover = tmp;
		getline(file, tmp);
		shapee = tmp;
		file.close();
	}
	void SmallOffice::writeToFile(string path) 
	{
		Office::writeToFile(path);
		ofstream file(path, std::ios::app);
		file << "Покрытие: ";
		file << cover << endl;
		file << "Форма: ";
		file << shapee << endl;
		file.close();
	}
	void SmallOffice::enterFromKeyboard() 
	{
		Office::enterFromKeyboard();
		cout << "Покрытие: ";
		cin >> cover;
		cout << "Форма: ";
		cin >> shapee;
	}
