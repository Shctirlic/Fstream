#include <iostream>
#include <cmath> 
#include <fstream>
#include <string>
using namespace std;

void file_insert(string path, int pos, string str);

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	string path = "file.txt";

	/*string path = "File.txt";
	fstream file;
	file.open(path, ios::in | ios::app);

	if (file.is_open()) {
		cout << "Файл открыт\n";

		//Запись в файл
		file << "By World!\n";
		cout << "Данные записаны\n";

		file.seekg(0, ios::beg); // перемещения курсора для считывания в начало файла

		//Считывание из файла
		cout << "Содержимое файла:\n";

		char sym;
		while (file.get(sym))
			cout << sym;

	}
	else
		cout << "Ошибка открытия файла\n";*/

	/*std::cout << "Введите строку: ";
	string str;
	getline(cin, str);
	std::cout << "Введите позицию: \n";
	cin >> n;
	file_insert(path, n, str);*/

	//Задача 1. Дата из файла

	ifstream in;
	in.open("date.txt");

	if (in.is_open()) {
		int day, mouth, year;

		string tmp;
		getline(in, tmp);

		day = stoi(tmp);
		cout << "День: " << day << endl;

		mouth = stoi(tmp.substr(tmp.find('.')+1));
		cout << "Месяц:" << mouth << endl;

		year = stoi(tmp.substr(tmp.rfind('.') + 1));
		cout << "Год: " << year << endl;



	}
	else

	return 0;
}

void file_insert(string path, int pos, string str){
	
	ifstream in;
	in.open(path);

	string tmp;
	char sym;

	if (in.is_open()) {
		char sym;
		while (in.get(sym))
			tmp += sym;

	}
	in.close();

	std::cout << tmp;
	// Вставляем содержимое str в строку tmp
	tmp.insert(pos, str);

	ofstream out;
	out.open(path);

	if (out.is_open())
		out << tmp;
	out.close();
}