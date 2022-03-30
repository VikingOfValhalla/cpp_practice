#include <iostream>
#include <string>

class classPractice 
{
	// class initialization
	public:
		std::string Name;
		int Age = 0;
		std::string Dob;
		std::string From;

	// class constructor
	classPractice(std::string name, int age, std::string dob, std::string from){
		Name = name;
		Age = age;
		Dob = dob;
		From = from;
	};

	// class method
	void getInfo()
	{
		std::cout << "Name: " << Name << std::endl;
		std::cout << "Age: " << Age << std::endl;
		std::cout << "Date of Birth: " << Dob << std::endl;
		std::cout << "From: " << From << std::endl;
	};
};

int main()
{
	// calling class constructor
	classPractice student1("Bob", 19, "05/22/2005", "Seattle");
	classPractice student2("Cheryl", 18, "09/22/2006", "Atlanta");
	classPractice student3("Roger", 19, "01/06/2005", "New York");

	// calling class methods
	student1.getInfo();
	std::cout << "\n";
	student2.getInfo();
	std::cout << "\n";
	student3.getInfo();

	return 0;
}