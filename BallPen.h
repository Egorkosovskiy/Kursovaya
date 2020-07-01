#pragma once
#include "Pen.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;
class BallPen : public Pen
{
protected:
	string avto;
	int length;
public:
	BallPen();

		BallPen(const BallPen& bpen);

		void PrintAllInformation() override;

		void SetAvto(string Avto);

		string GetAvto() const;

		void SetLength(int Length);

		int GetLength() const;

		BallPen& operator=(const BallPen bpen);

		void readFromFile(char*path) override;

		void writeToFile(string path) override;

		void enterFromKeyboard() override;
	
};