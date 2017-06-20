//
// Created by Petro Panchenko on 6/20/17.
//

#ifndef DAY05_BUREAUCRAT_HPP
#define DAY05_BUREAUCRAT_HPP

# include <iostream>
class Bureaucrat{
	const std::string	name;
	int					grade;

public:
	Bureaucrat(std::string name = "");
	~Bureaucrat();
	Bureaucrat(Bureaucrat const &);
	Bureaucrat &operator=(Bureaucrat const &);
	const std::string &getName() const;
	int getGrade() const;
	void setGrade(int grade);
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif //DAY05_BUREAUCRAT_HPP
