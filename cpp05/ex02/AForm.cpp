
#include "AForm.hpp"

AForm::AForm() : _name("Noname"), _signed(false), _signGrade(3), _execGrade(3)
{
	// std::cout << "AForm default constructor" << std::endl;
}

AForm::AForm(std::string const &name, int signGrade, int execGrade) :
	_name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	// std::cout << "AForm name constructor" << std::endl;
	if (_signGrade > 150 || _execGrade > 150)
		throw GradeTooLowException();
	else if (_signGrade < 1 || _execGrade < 1)
		throw GradeTooHighException();
	
}

AForm	&AForm::operator=(const AForm &other) 
{
//	std::cout << "AForm Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	_signed = other.getSigned();
	return (*this);
}

AForm::~AForm()
{
	// std::cout << "AForm destructor called" << std::endl;
}

std::string const AForm::getName() const
{
	return (_name);
}

int	AForm::getSignGrade() const
{
	return (_signGrade);
}

int	AForm::getExecGrade() const
{
	return (_execGrade);
}

bool	AForm::getSigned() const
{
	return (_signed);
}

std::string AForm::returnSigned() const
{
	if (_signed == true)
		return ("is signed!");
	return ("is not signed!");
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("the grade is too high.");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("the grade is too low.");
}

const char *AForm::AFormSignedException::what() const throw()
{
	return ("the AForm is already signed.");
}

const char *AForm::AFormNotSignedException::what() const throw()
{
	return ("the AForm is not signed.");
}

void AForm::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() > _signGrade)
		throw GradeTooLowException();
	else if (_signed == true)
		throw AFormSignedException();
	else
		_signed = true;
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (!_signed)
		throw AFormNotSignedException();
	else if (_execGrade < executor.getGrade())
		throw GradeTooLowException();
	else
		this->beExecuted();
}

std::ostream &operator<<(std::ostream &out, const AForm &AForm)
{
	return (out << "The AForm " << AForm.getName() << " needs " << AForm.getSignGrade()
	<< " grade to be signed, " << AForm.getExecGrade() << " to be executed and "
	<< AForm.returnSigned());
}