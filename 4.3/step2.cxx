
	#include <iostream>
	#include <string> 
	
	struct Person {
		
		Person (std::string name) : name_(name) { }
		
		std::string name() const {
			return name_;
		}
		
		std::string name_;
	};

	struct Professor : public Person {
		
		Professor (std::string name) : Person(name) { }
		
		std::string name() const {
			return "Prof. " + Person::name();
		}
		
	};
	
	int main() {
		Professor pr("Horoshilov");
		std::cout << pr.name() << std::endl;
		
		Person *p = &pr;
		std::cout << p->name() << std::endl;
		
		return 0;
	}
