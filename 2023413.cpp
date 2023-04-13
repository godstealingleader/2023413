#include <iostream>

int main()
{
	using namespace std;
	const int name_lenth = 20;
	//int size = 0;
	//char* Frist_name = new char[size]; delete[] Frist_name;
	//char* Last_name = new char[size]; delete[] Last_name;
	char Frist_name[name_lenth]{ 0 }, Last_name[name_lenth]{ 0 };
	int age = 0; char grade = 0;
	cout << "What is your frist name?"; cin.getline(Frist_name,name_lenth);
	cout << "What is your last name?"; cin.getline(Last_name,name_lenth);
	cout << "What letter grade do you deserve?"; cin >> grade;
	cout << "What is your age?"; cin >> age;
	cout << "Name:" << Last_name << ", " << Frist_name << endl;
	cout << "Grade:" << (char)(grade + 1) << endl;
	cout << "Age:" << age << endl;
	return 0;
}