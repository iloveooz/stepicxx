
	#include <iostream>
	
	struct Foo {
		void say() const {
			std::cout << "Foo says: " << msg << std::endl;
		}
	protected:
		Foo (const char *msg) : msg(msg) { }
	private:
		const char *msg;
	};

	struct Boo : public Foo {
		Boo (const char *msg) : Foo(msg) { }
	};

	void foo_says(const Foo &foo) {
		foo.say();
	}

	Foo get_foo(const char *msg) {
		Boo BBB(msg); // наследование 
		Foo AAA = BBB; // приведение
		return AAA; // ВОЗВРАТ ЛОКАЛЬНОГО ОБЪЕКТА! ЧТО!!??
	}	

	int main() {
		
		char msg[] = "Hello!";
		
		foo_says(get_foo(msg));
		
		return 0;
	}
