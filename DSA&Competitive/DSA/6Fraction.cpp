class Fraction{
private:
    int numerator;
    int denominator;
public:
    Fraction(){

    }
    Fraction(int numerator, int denominator) {
        this ->numerator = numerator;
        this ->denominator = denominator;

    }
    void print(){
        cout<<numerator<<" / "<<denominator<<endl;
    }
    void simplify(){
        int gcd = 1;
        int j = min( this -> numerator, this -> denominator);
        for (int i = 1; i <= j; i++)
        {
            if (( ( this ->  numerator) % i == 0 ) && (( this -> denominator) % i == 0) )
            {
                gcd = i;
            }
        }
        this -> numerator = this -> numerator / gcd;
        this -> denominator = this -> denominator / gcd;
        
    }

        void add(Fraction const &f){
        int lcm =  denominator * f.denominator;
        int x = lcm / denominator;
        int y = lcm / f.denominator;

        int num = (x * numerator) + (y * f.numerator);

        numerator = num;
        denominator = lcm;
        simplify();
        

    }
        Fraction addf(Fraction const &f){
        int lcm =  denominator * f.denominator;
        int x = lcm / denominator;
        int y = lcm / f.denominator;

        int num = (x * numerator) + (y * f.numerator);

        
        
        Fraction fNew(num,lcm);
        fNew.simplify();
        return fNew;

    }
        Fraction operator+(Fraction const &f){
        int lcm =  denominator * f.denominator;
        int x = lcm / denominator;
        int y = lcm / f.denominator;

        int num = (x * numerator) + (y * f.numerator);

        
        
        Fraction fNew(num,lcm);
        fNew.simplify();
        return fNew;

    }

    void multiply(Fraction const &f2){
        numerator = numerator * f2.numerator;
        denominator = denominator * f2.denominator;

        simplify();
    }
    Fraction operator*(Fraction const &f2){
        Fraction fNew;

        fNew.numerator = numerator * f2.numerator;
        fNew.denominator = denominator * f2.denominator;

        fNew.simplify();
        return fNew;
    }
    bool operator==(Fraction const &f){

        return ((numerator == f.numerator) && (denominator == f.denominator));
    }
    //pre increment //we return reference because buffer variable created, and returning refrence prevents that
                    //int the case of nesting of pre increment
    Fraction& operator++(){
        numerator += denominator;
        simplify();
        return *this;
    }
    //post increment //nesting is not allowed
    Fraction operator++(int){
        Fraction fnew(numerator,denominator);
        numerator += denominator;
        fnew.simplify();
        simplify();
        return fnew;
    }
    //pre decrement //we return reference because buffer variable created, and returning refrence prevents that
                    //int the case of nesting of pre decrement
    Fraction& operator--(){
        numerator -= denominator;
        simplify();
        return *this;
    }
    //post decrement //nesting is not allowed
    Fraction operator--(int){
        Fraction fnew(numerator,denominator);
        numerator -= denominator;
        fnew.simplify();
        simplify();
        return fnew;
    }
    Fraction& operator+=(Fraction const &f){
        *this = *this + f;
        simplify();
        return *this;
    }
};