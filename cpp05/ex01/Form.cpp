
#include "Form.hpp"

Form::Form() : _name("Noname"), _signed(false), _signGrade(3), _execGrade(3)
{
	// std::cout << "Form default constructor" << std::endl;
}

Form::Form(std::string const &name, int signGrade, int execGrade) :
	_name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	// std::cout << "Form name constructor" << std::endl;
	if (_signGrade > 150 || _execGrade > 150)
		throw GradeTooLowException();
	else if (_signGrade < 1 || _execGrade < 1)
		throw GradeTooHighException();
	
}

std::string const Form::getName() const
{
	return (_name);
}

int	Form::getSignGrade() const
{
	return (_signGrade);
}

int	Form::getExecGrade() const
{
	return (_execGrade);
}

bool	Form::getSigned() const
{
	return (_signed);
}

std::string Form::returnSigned() const
{
	if (_signed == true)
		return ("is signed!");
	return ("is not signed!");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("the grade is too high.");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("the grade is too low.");
}

const char *Form::FormSignedException::what() const throw()
{
	return ("the form is already signed.");
}

void Form::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() > _signGrade)
		throw GradeTooLowException();
	else if (_signed == true)
		throw FormSignedException();
	else
		_signed = true;
}

Form::~Form()
{
	// std::cout << "Form destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	return (out << "The form " << form.getName() << " needs " << form.getSignGrade()
	<< " grade to be signed, " << form.getExecGrade() << " to be executed and "
	<< form.returnSigned());
}