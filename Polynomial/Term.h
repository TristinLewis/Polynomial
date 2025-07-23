#ifndef Term_h
#define Term_h
#include <iostream> 


using namespace std; 

class Term{
private: 
	double coefficient;
	int exponent;
	char variable; 
public: 
	Term(); 
	Term(double coef, int exp, char var); 
	Term(Term& term);

	Term& operator=(const Term& right);

	bool operator<=(Term& right); 
	bool operator>=(Term& right);
	bool operator<(Term& right);
	bool operator>(Term& right);
	bool operator==(Term& right);

	bool compatible(Term& right);

	double getCoefficient() const; 
	int getExponent() const; 
	char getVariable() const; 


	void setCoefficient(double coef) const;
	void setExponent(int exp) const;
	void setVariable(char var) const;

};
#endif
