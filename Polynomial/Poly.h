#ifndef Poly_h
#define Poly_h
#include "Term.h"

class Poly{
private:
    Term* terms;
    int numTerms;

    void simplify();  

public:
    Poly();  
    Poly(Term* terms, int numTerms);  
    Poly(const Poly& poly);  
    ~Poly(); 

    Term* getTerms() const;
    int getNumTerms() const;

    void setTerms(const Term* newTerms, int newNumTerms);

    Poly& operator=(const Poly& right);

    Poly operator+(const Poly& right) const;
    Poly operator-(const Poly& right) const;
    Poly operator*(const Poly& right) const;

    friend std::ostream& operator<<(std::ostream& os, const Poly& poly);

};
#endif 
