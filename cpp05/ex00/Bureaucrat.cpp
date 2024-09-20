#include "Bureaucrat.hpp"

/*	DEFAULT CONSTRUCTOR	*/
Bureaucrat::Bureaucrat() : _name("Noname"), _grade(3)
{
	std::cout << "Bureaucrat default constructor" << std::endl;
}

/*	NAME CONSTRUCTOR	*/
Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat name constructor" << std::endl;
}

/*	COPY CONSTRUCTOR	*/
Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	std::cout << "Bureaucrat copy assignment operator" << std::endl;
	*this = copy;
}

/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		// _name = other._name;
		_grade = other.getGrade();
	}
	return (*this);
}

/*	GETERS AND SETERS	*/
const std::string &Bureaucrat::getName() const
{
	return (_name);
}

const int &Bureaucrat::getGrade() const
{
	return (_grade);
}

/*	MEMBER FUNCTIONS	*/
// const char *Bureaucrat::GradeTooHighException::what() const throw()
/*	DESTRUCTOR	*/
Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor" << std::endl;
}

// Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException;