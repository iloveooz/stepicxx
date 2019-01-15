	struct Rational {
		Rational(int numerator = 0, int denominator = 1);

		void add(Rational rational);
		void sub(Rational rational);
		void mul(Rational rational);
		void div(Rational rational);

		void neg();
		void inv();
		double to_double() const;

		// унарные операции --------------------------------------------
		// плюс - объекты
		Rational & operator += (Rational r) {
			this->add(r);
			return *this;
		}
				
		// минус - объекты
		Rational & operator -= (Rational r) {
			this->sub(r);
			return *this;
		}
				
		// умножить - объекты
		Rational & operator *= (Rational r) {
			this->mul(r);
			return *this;
		}
				 
		// разделить - объекты
		Rational & operator /= (Rational r) {
			this->div(r);
			return *this;
		}		
		
		// унарный плюс
		Rational operator + () const {
			return Rational(numerator_, denominator_);
		}	
		
		// унарный минус
		Rational operator - () const {
			return Rational(-numerator_, -denominator_);
		}

		// бинарные операции -------------------------------------------
		// бинарный плюс
		Rational operator + (Rational const &_s) {
			Rational s(this->numerator_, this->denominator_);
			s.add(_s);
			return s;
		}

		Rational operator + (int i) const {
			Rational s(this->numerator_, this->denominator_);
			s.add(Rational(i));
			return s;
		}

		friend Rational operator + (int i, const Rational & _r) {
			return _r + i;
		}

		// бинарный минус
		Rational operator - (Rational const &_s) {
			Rational s(this->numerator_, this->denominator_);
			s.sub(_s);
			return s;
		}	

		Rational operator - (int i) const {
			Rational s(this->numerator_, this->denominator_);
			s.sub(Rational(i));
			return s;
		}

		friend Rational operator - (int i, const Rational & _r) {
			return _r - i;
		}

		// бинарное умножение
		Rational operator * (Rational const &_s) {
			Rational s(this->numerator_, this->denominator_);
			s.mul(_s);
			return s;
		}

		Rational operator * (int i) const {
			Rational s(this->numerator_, this->denominator_);
			s.mul(Rational(i));
			return s;
		}

		friend Rational operator * (int i, const Rational & _r) {
			return _r * i;
		}

		// бинарное деление
		Rational operator / (Rational const &_s) {
			Rational s(this->numerator_, this->denominator_);
			s.div(_s);
			return s;
		}

		Rational operator / (int i) const {
			Rational s(this->numerator_, this->denominator_);
			s.div(Rational(i));
			return s;
		}

		friend Rational operator / (int i, const Rational & _r) {
			return _r / i;
		}

		// операторы сравнения ----------------------------------------
		// равно
		bool operator == (Rational const & another) {
			return numerator_ == another.numerator_ && denominator_ == another.denominator_;
		}

		bool operator == (int i) const {
			Rational s(this->numerator_, this->denominator_);
			return s == (Rational(i));
		}

		//friend bool operator == (int i, const Rational & s) {
		//	return s == i;
		//}

		// неравно
		bool operator != (Rational const & another) {
			return numerator_ != another.numerator_ && denominator_ != another.denominator_;
		}

		bool operator != (int i) const {
			Rational s(this->numerator_, this->denominator_);
			return s != (Rational(i));
		}

		// меньше
		bool operator < (Rational const & another) {
			return numerator_ < another.numerator_ && denominator_ < another.denominator_;
		}

		bool operator < (int i) const {
			Rational s(this->numerator_, this->denominator_);
			return s < (Rational(i));
		}

		// больше
		bool operator > (Rational const & another) {
			return numerator_ > another.numerator_ && denominator_ > another.denominator_;
		}

		bool operator > (int i) const {
			Rational s(this->numerator_, this->denominator_);
			return s > (Rational(i));
		}
		
		// меньше либо равно
		bool operator <= (Rational const & another) {
			return numerator_ <= another.numerator_ && denominator_ <= another.denominator_;
		}

		bool operator <= (int i) const {
			Rational s(this->numerator_, this->denominator_);
			return s <= (Rational(i));
		}
		
		// больше либо равно
		bool operator >= (Rational const & another) {
			return numerator_ >= another.numerator_ && denominator_ >= another.denominator_;
		}

		bool operator >= (int i) const {
			Rational s(this->numerator_, this->denominator_);
			return s >= (Rational(i));
		}
		
	private:
		int numerator_;
		int denominator_;
	};

	int main() {
		
		
		return 0;
	}

	


	// после второго задания код класса выглядит вот так
	
/*	
	struct Rational {
		Rational(int numerator = 0, int denominator = 1);

		void add(Rational rational);
		void sub(Rational rational);
		void mul(Rational rational);
		void div(Rational rational);

		void neg();
		void inv();
		double to_double() const;

		Rational& operator+=(Rational rational);
		Rational& operator-=(Rational rational);
		Rational& operator*=(Rational rational);
		Rational& operator/=(Rational rational);

		Rational operator-() const;
		Rational operator+() const;

	private:
		int numerator_;
		int denominator_;
	};

	Rational operator+(Rational lhs, Rational rhs);
	Rational operator-(Rational lhs, Rational rhs);
	Rational operator*(Rational lhs, Rational rhs);
	Rational operator/(Rational lhs, Rational rhs);



	Шестой шаг надо было решать так !!!!!!!!!!!!!!!!!!!!



struct Rational
{
    Rational(int numerator = 0, int denominator = 1);

    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);

    void neg();
    void inv();
    double to_double() const;

    Rational& operator+=(Rational rational);
    Rational& operator-=(Rational rational);
    Rational& operator*=(Rational rational);
    Rational& operator/=(Rational rational);

    Rational operator-() const;
    Rational operator+() const;

    int numerator() const;
    int denominator() const;

    private:
    int numerator_;
    int denominator_;
};

Rational operator+(Rational lhs, Rational rhs);
Rational operator-(Rational lhs, Rational rhs);
Rational operator*(Rational lhs, Rational rhs);
Rational operator/(Rational lhs, Rational rhs);

int Rational::numerator() const
{
    return numerator_;
}

int Rational::denominator() const
{
    return denominator_;
}

bool operator==(Rational const& lhs, Rational const& rhs)
{
    Rational a = lhs - rhs;
    return a.numerator() == 0; 
}

bool operator!=(const Rational &lhs, const Rational &rhs)
{
    return !(lhs == rhs);
}

bool operator<(Rational const& lhs, Rational const& rhs)
{
    Rational a = rhs - lhs;
    return a.numerator() > 0;
}

bool operator>(const Rational &lhs, const Rational &rhs)
{
    return rhs < lhs;
}

bool operator<=(const Rational &lhs, const Rational &rhs)
{
    return !(lhs > rhs);
}

bool operator>=(const Rational &lhs, const Rational &rhs)
{
    return !(lhs < rhs);
}

*/
