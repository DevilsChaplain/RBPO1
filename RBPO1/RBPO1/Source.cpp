#include <iostream>
#include <string>

using namespace std;

unsigned short height;


unsigned short ReadPersonAge() {
	std::cout << "Age: ";
	unsigned short age;
	std::cin >> age;
	return age;
}

std::string ReadPersonName() {
	std::cout << "Name: ";
	std::string name = "";
	std::cin >> name;
	return name;
}

void ReadPersonHeight() {
	std::cout << "Height: ";
	std::cin >> height;
}

void ReadPersonWeight(unsigned short& weight) {
	std::cout << "Weight: ";
	std::cin >> weight;
}


void ReadPersonSalary(double* salary) {
	std::cout << "Salary: ";
	std::cin >> *salary;
}

void ReadPersonData(std::string& name, unsigned short& age, double& salary) {
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonSalary(&salary);

}

void ReadPersonData(std::string& name, unsigned short& age, unsigned short& heigth, unsigned short& weight) {
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonHeight();
	height = ::height;
	ReadPersonWeight(weight);
}

void WritePersonData(unsigned short age, const std::string& name,
	const std::string& height = "", const std::string& weight = "",
	const std::string& salary = "") {
	std::cout << "Age: " << age << "\n";
	std::cout << "Name: " << name << "\n";
	std::cout << "Height: " << height << "\n";
	std::cout << "Weight: " << weight << "\n";
	std::cout << "Salary: " << salary << "\n\n";
}

int main() {
	std::string name;
	unsigned short weight;
	unsigned short age;
	double salary;
	string h;
	ReadPersonData(name, age, salary);
	WritePersonData(age, name, "", "", std::to_string(salary));

	ReadPersonData(name, age, height, weight);
	WritePersonData(age, name, std::to_string(height), std::to_string(weight), "");
	return 0;
}