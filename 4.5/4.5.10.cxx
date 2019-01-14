	#include <iostream>

	// структура 
	struct Expression {
		
		// виртуальный метод
		virtual double evaluate() const = 0;
		
		// виртуальный конструктор
		virtual ~Expression() {}
	};

	// структура
	struct Number : Expression {
		// конструктор
		Number(double value) : value(value) {}
		
		// виртуальный метод
		virtual double evaluate () const {
			return value;
		}
		
		// деструктор
		~Number() {}
		
	private:
		// значение
		double value;
	};

	// структура
	struct BinaryOperation : Expression {
		
		// конструктор
		BinaryOperation(Expression const * left, char op, Expression const * right)
			: left(left), op(op), right(right)
		{ }

		// double evaluate () const {}

		// виртуальный деструктор
		virtual ~BinaryOperation() {
			delete left;
			delete right;
		}

		// виртуальный метод
		virtual double evaluate() const {
			if (op == '+') 
				return (left->evaluate() + right->evaluate());
			if (op == '-') 
				return (left->evaluate() - right->evaluate());
			if (op == '/') 
				return (left->evaluate() / right->evaluate());
			if (op == '*') 
				return (left->evaluate() * right->evaluate());
		}

	private:
		Expression const * left;
		Expression const * right;
		char op;
	};

	int main() {
		// сначала создаём объекты для подвыражения 4.5 * 5
		Expression * sube = new BinaryOperation(new Number(4.5), '*', new Number(5));
		// потом используем его в выражении для +
		Expression * expr = new BinaryOperation(new Number(3), '+', sube);

		// вычисляем и выводим результат: 25.5
		std::cout << expr->evaluate() << std::endl;

		// тут освобождаются *все* выделенные объекты
		// (например, sube будет правым операндом expr, поэтому его удалять не нужно)
		delete expr;
		return 0;
	}
