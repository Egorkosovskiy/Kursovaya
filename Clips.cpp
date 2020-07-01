#include "Clips.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

	Clips::Clips()
	{
		lengthh = 0;
	}
	Clips::Clips(const Clips& clip)
	{
		SmallOffice(sof);
		lengthh = clip.lengthh;
	}
	void Clips::PrintAllInformation()
	{
		SmallOffice::PrintAllInformation();
		cout << "Длина скрепки: " << lengthh << endl;
	}
	void Clips::SetLengthh(int Lengthh)
	{
		lengthh = Lengthh;
	}
	int Clips::GetLengthh() const
	{
		return lengthh;
	}
	Clips& Clips::operator=(const Clips& clip)
	{
		SmallOffice::operator=(clip);
		lengthh = clip.lengthh;
	}
	void Clips::readFromFile(char*path)
	{
		SmallOffice::readFromFile(path);
		ifstream file(path);
		file >> lengthh;
		file.close();
	}
	void Clips::writeToFile(string path)
	{
		SmallOffice::writeToFile(path);
		ofstream file(path, std::ios::app);
		file << "Длина скрепки: ";
		file << lengthh << endl;
		file.close();
	}
	void Clips::enterFromKeyboard()
	{
		SmallOffice::enterFromKeyboard();
		cout << "Длина скрепки: ";
		cin >> lengthh;
	}
