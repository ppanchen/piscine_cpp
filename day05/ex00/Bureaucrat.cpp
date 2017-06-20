//
// Created by Petro Panchenko on 6/20/17.
//

#include "Bureaucrat.hpp"

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat){
	os << "name: " << bureaucrat.name << " grade: " << bureaucrat.grade;
	return os;
}

Bureaucrat::Bureaucrat(std::string name) : name(name){
	return ;
}

Bureaucrat::~Bureaucrat(){
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &rb){
	*this = rb;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rb){

	if (this != &rb)
	{
		grade = rb.grade;
	}
	return *this;
}

const std::string &Bureaucrat::getName() const{
	return name;
}

int Bureaucrat::getGrade() const{
	return grade;
}

void Bureaucrat::setGrade(int grade){
	Bureaucrat::grade = grade;
}
