
	#include <iostream>
	#include <string> 
	
	struct Person {
		
		Person (std::string name) : name_(name) { }
		
		virtual std::string name() const {
			return name_;
		}

		virtual std::string occupation() const = 0;
		
		std::string name_;
	};

	struct Professor : public Person {
		
		Professor (std::string name) : Person(name) { }
		
		std::string name() const {
			return "Prof. " + Person::name();
		}
		
		std::string occupation() const {
			return "professor";
		}
	};
	
	struct Student : public Person {
		
		Student (std::string name) : Person(name) { }
		
		std::string name() const {
			return "Stud. " + Person::name();
		}
		
		std::string occupation() const {
			return "student";
		}
		
	};
	
	int main() {
		Professor pr("Horoshilov");
		std::cout << pr.name() << std::endl;
		std::cout << pr.occupation() << std::endl;
		
		Person *p = &pr;
		std::cout << p->name() << std::endl;
		std::cout << p->occupation() << std::endl;
		
		return 0;
	}
