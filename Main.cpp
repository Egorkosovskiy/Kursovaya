#include "pch.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include "IStationery.h"
#include "Stationery.h"
#include "Writting.h"
#include "Office.h"
#include "Pencil.h"
#include "Pen.h"
#include "SmallOffice.h"
#include "Correct.h"
#include "OrigPencil.h"
#include "MechPencil.h"
#include "FountainPen.h"
#include "BallPen.h"
#include "Clips.h"
#include "Buttons.h"
#include "CorrectPen.h"
#include "CorrectTape.h"
#include "Exception.h"
#include "Matrix.h"

using namespace std;
template<class T>
bool SortByPrice(const T& stat1, const T& stat2) {
	if (stat1->GetPrice() < stat2->GetPrice()) return true;
	return false;
}
template<class T>
bool FindByName(string value, const T& stat) {
	if (value == stat->GetName()) return true;
	return false;
}
template<class T>
bool FinderAllByPrice(int min, int max, const T& stat) {
	if (stat->GetPrice() >= min && stat->GetPrice() <= max) return true;
	return false;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int r=0, add,add2,i=0,j=0, number1=1;
	string tmp;
	string var;
	cout << "Сколько хотите добавить экземпляров к*к?" << endl;
	cin >> r;
	while (r <= 0) {
		cout << "<------------------------------------>" << endl;
		cout << "ОШИБКА № " << number1 << endl;
		cout << "Вы не можете добавить 0 элементов" << endl;
		cout << "<------------------------------------>" << endl << endl;
		number1++;
		cout << "Сколько хотите добавить экземпляров к*к?" << endl;
		cin >> r;
	}
	Matrix<IStationery*> m(r);
		cout << "Выберите способ добавления: " << endl;
		cout << "1 - Ввод из файла" << endl <<
			"2 - Создание стандартного объекта" << endl <<
			"3 - Ввод с клавиатуры" << endl <<
			"4 - Назад" << endl;
		cin >> add;
		switch (add)
		{
		case 1:
			cout << "Введите путь до файла: ";
			cin >> tmp;
			cout << "Выберите класс, к которому принадлежит файл:" << endl;
			while (i < r) {
				while (j < r) {
					cout << "1-Обычный карандаш"
						<< endl << "2-Механический карандаш"
						<< endl << "3-Перьевая ручка"
						<< endl << "4-Шариковая ручка"
						<< endl << "5-Канцелярские кнопки"
						<< endl << "6-Канцелярские скрепки"
						<< endl << "7-Корректирующий карандаш"
						<< endl << "8-Корректирующая лента" << endl;
					cin >> add2;
					switch (add2)
					{
					case 1:
						m.Push(new OrigPencil(), i, j);
						m(i, j)->readFromFile((char*)tmp.c_str());
						break;
					case 2:
						m.Push(new MechPencil(), i, j);
						m(i, j)->readFromFile((char*)tmp.c_str());
						break;
					case 3:
						m.Push(new FountainPen(), i, j);
						m(i, j)->readFromFile((char*)tmp.c_str());
						break;
					case 4:
						m.Push(new BallPen(), i, j);
						m(i, j)->readFromFile((char*)tmp.c_str());
						break;
					case 5:
						m.Push(new  Buttons(), i, j);
						m(i, j)->readFromFile((char*)tmp.c_str());
						break;
					case 6:
						m.Push(new Clips(), i, j);
						m(i, j)->readFromFile((char*)tmp.c_str());
						break;
					case 7:
						m.Push(new CorrectPen(), i, j);
						m(i, j)->readFromFile((char*)tmp.c_str());
						break;
					case 8:
						m.Push(new CorrectTape(), i, j);
						m(i, j)->readFromFile((char*)tmp.c_str());
						break;
					}
					j++;
				}
				i++;
				j = 0;
			}
		case 2:
			while (i < r) {
				while (j < r) {
					cout << "1-Обычный карандаш"
						<< endl << "2-Механический карандаш"
						<< endl << "3-Перьевая ручка"
						<< endl << "4-Шариковая ручка"
						<< endl << "5-Канцелярские кнопки"
						<< endl << "6-Канцелярские скрепки"
						<< endl << "7-Корректирующий карандаш"
						<< endl << "8-Корректирующая лента" << endl;
					cin >> add2;
					switch (add2)
					{
					case 1:
						m.Push(new OrigPencil(), i, j);
						break;
					case 2:
						m.Push(new  MechPencil(), i, j);
						break;
					case 3:
						m.Push(new  FountainPen(), i, j);
						break;
					case 4:
						m.Push(new  BallPen(), i, j);
						break;
					case 5:
						m.Push(new  Buttons(), i, j);
						break;
					case 6:
						m.Push(new  Clips(), i, j);
						break;
					case 7:
						m.Push(new  CorrectPen(), i, j);
						break;
					case 8:
						m.Push(new  CorrectTape(), i, j);
						break;
					}
					j++;
				}
				i++;
				j = 0;
			}
			i = j = 0;
			break;
		case 3:
			while (i < r) {
				while (j < r) {
					cout << "1-Обычный карандаш"
						<< endl << "2-Механический карандаш"
						<< endl << "3-Перьевая ручка"
						<< endl << "4-Шариковая ручка"
						<< endl << "5-Канцелярские кнопки"
						<< endl << "6-Канцелярские скрепки"
						<< endl << "7-Корректирующий карандаш"
						<< endl << "8-Корректирующая лента" << endl;
					cin >> add2;
					switch (add2)
					{
					case 1:

						m.Push(new  OrigPencil(), i, j);
						m(i, j)->enterFromKeyboard();
						break;
					case 2:
						m.Push(new  MechPencil(), i, j);
						m(i, j)->enterFromKeyboard();
						break;
					case 3:
						m.Push(new  FountainPen(), i, j);
						m(i, j)->enterFromKeyboard();
						break;
					case 4:
						m.Push(new  BallPen(), i, j);
						m(i, j)->enterFromKeyboard();
						break;
					case 5:
						m.Push(new  Buttons(), i, j);
						m(i, j)->enterFromKeyboard();
						break;
					case 6:
						m.Push(new  Clips(), i, j);
						m(i, j)->enterFromKeyboard();
						break;
					case 7:
						m.Push(new  CorrectPen(), i, j);
						m(i, j)->enterFromKeyboard();
						break;
					case 8:
						m.Push(new  CorrectTape(), i, j);
						m(i, j)->enterFromKeyboard();
						break;
					}
					j++;
				}
				i++;
				j = 0;
			}
			i = j = 0;
			break;
		}
		while (add>0)
		{
			cout << "Выберите действие: " << endl;
			cout <<	"1 - Удалить объекты" << endl <<
				"2 - Вывод полной информации об объектах " << endl <<
				"3 - Сортировка объектов по цене" << endl <<
				"4 - Поиск объекта по имени" << endl <<
				"5 - Поиск объекта по диапазону(цена)" << endl <<
				"6 - Запись в файл" << endl <<
				"0 - Выход из программы" << endl;
			cin >> add;
			try {
				switch (add)
				{
				case 1:
					m.Clear();
					break;
				case 2:
					cout << "Всего в матрице " << m.Lenght(m) << " элементов." << endl;
					m.Print();
					cout << endl << endl;
					break;
				case 3:
					m.ComparableSort(SortByPrice);
					break;
				case 4:
				{
					cout << "Введите имя объекта, который хотите найти (будет найден первый элемент):" << endl;
					cin >> var;
					IStationery** temp = m.Search(var, FindByName);
					if (temp == nullptr) cout << "Вашего элемента не существует..." << endl;
					else (*temp)->PrintAllInformation();
					break;
				}
				case 5:
				{
					int min, max;
					cout << "Введите минимальную стоимость объектов: " << endl;
					cin >> min;
					cout << "Введите максимальную стоимость объектов: " << endl;
					cin >> max;
					Matrix<IStationery*>* find = m.Search(min, max, FinderAllByPrice);
					if (find == nullptr) cout << "Вашего элемента не существует..." << endl;
					else
					{
						cout << "Ваши найденные элементы: " << endl;
						for (int i = 0; i < find->size; i++)
						{
							for (int j = 0; j < find->size; j++)
							{
								cout << *find;
								cout << endl;
							}
						}
						delete find;
					}
					break;
				}
				case 6:
					if (m.size == 0)throw Exception("Нет объектов для записи информации в файл!");
					cout << "Укажите номер объекта, который хотите записать в файл" << endl;
					int number;
					cin >> number;
					cout << "Укажите путь для сохранения файла" << endl;
					cin >> tmp;
					i = number / r;
					j = number % r - 1;
					if (r == 1)
						i = number / r - 1;
					j = number / r - 1;				
					m(i, j)->writeToFile(tmp);
					cout << "Объект записан в файл" << endl;
					break;
				}
			}
			catch (Exception& ex) {
				cout << "<------------------------------------>" << endl;
				cout << "ОШИБКА № " << number1 << endl;
				cout << ex.GetError() << endl;
				cout << "<------------------------------------>" << endl << endl;
				number1++;
			}
		}
	system("pause");
	return 0;

}
	
