#include <iostream>
#include <cmath> 
#include <fstream>
#include <string>
#include <conio.h>
#include "windows.h"
using namespace std;

void file_insert(string path, int pos, string str);

const int tick = 100;
int timer = 0;


std::cout << "������� �����:";
cin >> n;
system(cls);
std:: cout << "����� = " << n << endl;


int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	string path = "file.txt";

	char key;
	while(true)
		if (_kbhit) {
			key = _getch();

			switch (key) {
			case 'A': case 'a':
				std::cout << "LEFT\n";
				break;
			case 'D': case 'd':
				std::cout << "RIGHT\n";
				break;

			}
		}
	cout << ".\n";

	Sleep(tick);
	timer += tick;

	if (timer >= 1000) {
		cout << ".\n";
		timer = 0;
	}

	cout << "�� ������ �� " << key << endl;




	/*string path = "File.txt";
	fstream file;
	file.open(path, ios::in | ios::app);

	if (file.is_open()) {
		cout << "���� ������\n";

		//������ � ����
		file << "By World!\n";
		cout << "������ ��������\n";

		file.seekg(0, ios::beg); // ����������� ������� ��� ���������� � ������ �����

		//���������� �� �����
		cout << "���������� �����:\n";

		char sym;
		while (file.get(sym))
			cout << sym;

	}
	else
		cout << "������ �������� �����\n";*/

	/*std::cout << "������� ������: ";
	string str;
	getline(cin, str);
	std::cout << "������� �������: \n";
	cin >> n;
	file_insert(path, n, str);*/

	//������ 1. ���� �� �����

	/*ifstream in;
	in.open("date.txt");

	if (in.is_open()) {
		int day, mouth, year;

		string tmp;
		getline(in, tmp);

		day = stoi(tmp);
		cout << "����: " << day << endl;

		mouth = stoi(tmp.substr(tmp.find('.')+1));
		cout << "�����:" << mouth << endl;

		year = stoi(tmp.substr(tmp.rfind('.') + 1));
		cout << "���: " << year << endl;



	}
	else

	return 0;*/
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
	// ��������� ���������� str � ������ tmp
	tmp.insert(pos, str);

	ofstream out;
	out.open(path);

	if (out.is_open())
		out << tmp;
	out.close();
}