#include <iostream>
#include <string>

using namespace std;
unsigned short height;


unsigned short ReadPersonAge() {
	cout << "Age: ";
	unsigned short age;
	cin >> age;
	return age;
}

string ReadPersonName() {
	cout << "Name: ";
	string name = "";
	cin >> name;
	return name;
}

void ReadPersonHeight() {
	cout << "Height: ";
	cin >> height;
}

void ReadPersonWeight(unsigned short& weight) {
	cout << "Weight: ";
	cin >> weight;
}


void ReadPersonSalary(double* salary) {
	cout << "Salary: ";
	cin >> *salary;
}

void ReadPersonData(string& name, unsigned short& age, double& salary) {
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonSalary(&salary);

}

void ReadPersonData(string& name, unsigned short& age, unsigned short& heigth, unsigned short& weight) {
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonHeight();
	height = ::height;
	ReadPersonWeight(weight);
}

void WritePersonData(unsigned short age, string& name,
	const string& height = "", const string& weight = "",
	const string& salary = "") {
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	if (!height.empty())cout << "Height: " << height << endl;
	if (!weight.empty())cout << "Weight: " << weight << endl;
	if (!salary.empty())cout << "Salary: " << salary << endl;
}

int main() {
	string name;
	unsigned short weight;
	unsigned short age;
	double salary;
	string h;
	ReadPersonData(name, age, salary);
	WritePersonData(age, name, "", "", to_string(salary));
	ReadPersonData(name, age, height, weight);
	WritePersonData(age, name, to_string(height), to_string(weight));
	return 0;
}
