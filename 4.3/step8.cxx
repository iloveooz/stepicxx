
	#include <iostream>

	struct Expression {
		 
		virtual double evaluate() const = 0;
		virtual ~Expression() {}
	};

	struct Number : Expression {
		Number(double value) : value(value) {}

		virtual double evaluate () const {
			return value;
		}

		~Number() {}
		
	private:
		double value;
	};

	struct BinaryOperation : Expression {
		 
		BinaryOperation(Expression const * left, char op, Expression const * right)
			: left(left), op(op), right(right)
		{ }

		// double evaluate () const {}

		virtual ~BinaryOperation() {
			delete left;
			delete right;
		}

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
