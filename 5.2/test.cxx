    Rational operator+(const Rational & _r) const {
        Rational r(this->numerator_, this->denominator_);
        r.add(_r);
        return r;
    }
    Rational operator+(int i) const {
        Rational r(this->numerator_, this->denominator_);
        r.add(Rational(i));
        return r;
    }
    friend Rational operator+(int i, const Rational & _r) {
        return _r + i;
    }
    Rational operator-(const Rational & _r) const {
        Rational r(this->numerator_, this->denominator_);
        r.sub(_r);
        return r;
    }
    friend Rational operator-(int i, const Rational & _r) {
        return -(_r - i);
    }
    Rational operator*(const Rational & _r) const {
        Rational r(this->numerator_, this->denominator_);
        r.mul(_r);
        return r;
    }
    Rational operator*(int i) const {
        Rational r(this->numerator_, this->denominator_);
        r.mul(Rational(i));
        return r;
    }
    friend Rational operator*(int i, const Rational & _r) {
        return _r * i;
    }
    Rational operator/(const Rational & _r) const {
        Rational r(this->numerator_, this->denominator_);
        r.div(_r);
        return r;
    }
    Rational operator/(int i) const {
        Rational r(this->numerator_, this->denominator_);
        r.div(Rational(i));
        return r;
    }
    friend Rational operator/(int i, const Rational & _r) {
        return Rational(i)/_r;
}
