#include "Term.h"
#include <iostream> 

Term::Term() : coefficient(0.0), exponent(0), variable('P'){

}
Term::Term(double coef, int exp, char var) : coefficient(coef), exponent(exp), variable(var) {

}
Term::Term(Term& term) : coefficient(term.coefficient), exponent(term.exponent), variable(term.variable) {
	
}

Term& Term::operator=(const Term& right) {
	if (this != &right) {
		coefficient = right.coefficient;
		exponent = right.exponent;
		variable = right.variable;
	}
	return *this; 
}

bool Term::operator<=(Term& right) {
	return exponent <= right.exponent;
}
bool Term::operator>=(Term& right) {
	return exponent = right.exponent;
}
bool Term::operator<(Term& right) {
	return exponent < right.exponent;
}
bool Term::operator>(Term& right) {
	return exponent > right.exponent;
}
bool Term::operator==(Term& right) {
	return exponent == right.exponent;
}

bool Term::compatible(Term& right) {

}

double Term::getCoefficient() const {
	return coefficient; 
}
int Term::getExponent() const {
	return exponent; 
}
char Term::getVariable() const {
	return variable; 
}


void Term::setCoefficient(double coef) const {
	coefficient = coef; 
}
void Term::setExponent(int exp) const {
	exponent = exp; 
}
void Term::setVariable(char var) const {
	variable = var; 
}