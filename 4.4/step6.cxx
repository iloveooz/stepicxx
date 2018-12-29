
	#include <iostream>
	#include <string>
	
	struct Person {
		Person (std::string const & name, int age) : name_(name), age_(age) {}
		virtual ~Person() {}
		virtual std::string name() const { return name_; }
		virtual std::string occupation() const = 0;
	private:
		std::string name_;
		int age_;
	};
	
	struct Teacher : public Person {
		Teacher (std::string const & nm, int age, std::string const & course) :
			Person (nm, age), course_(course) {
				std::cout << name() << std::endl;
		}
		virtual std::string occupation() const { return "teacher"; }
		virtual std::string course() const { return course_; }
	private:
		std::string course_;
	};
	
	struct Professor : public Teacher {
		Professor (std::string const & name, int age, std::string const & course, 
			std::string const & thesis) :
				Teacher(name, age, course), thesis_(thesis) {}
				
		virtual std::string thesis() const { return thesis_; }
		virtual std::string name() const { return "Prof. " + Person::name(); }
		virtual std::string occupation() const { return "professor"; }
	private:
		std::string thesis_;
	};
	
	int main() {
		Professor p("Straustrup", 63, "C++", "The C++ language");
		return 0;
	}
