#include <iostream>
#include <string>

int main(){

	using namespace std;

	setlocale(LC_ALL, "Rus");
	system("chcp 1251");
	system("cls");

	string Name;

	cout << "Введите имя: "; getline(cin, Name);
	cout << "Здравствуйте, " << Name << endl;

	system("pause");

	return EXIT_SUCCESS;
}