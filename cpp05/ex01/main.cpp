
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat alberto("Alberto", 5);
		Form signedForm("Form1", 10, 15);
		Form unsignedForm("Form2", 6, 7);

		std::cout << alberto << std::endl;
		std::cout << signedForm << std::endl;
		std::cout << unsignedForm << std::endl;

		std::cout << std::endl << "Trying to sign Form2..." << std::endl;
		alberto.signForm(unsignedForm);
		std::cout << std::endl << "Trying to sign Form1..." << std::endl;
		alberto.signForm(signedForm);
		std::cout << std::endl << "Trying to sign Form1..." << std::endl;
		alberto.signForm(signedForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "----------------------------------------------------" <<std::endl;
	try
	{
		Bureaucrat alberto("Alberto", 4);
		Form valid("Valid", 6, 7);
		Form invalidLow("InvalidLow", 1, 1);

		std::cout << alberto << std::endl;
		std::cout << valid << std::endl;
		std::cout << invalidLow << std::endl;

		std::cout << std::endl << "Trying to sign Valid..." << std::endl;
		alberto.signForm(valid);
		std::cout << std::endl << "Trying to sign InvalidLow..." << std::endl;
		alberto.signForm(invalidLow);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "----------------------------------------------------" <<std::endl;
	try
	{
		Bureaucrat alberto("Alberto", 5);
		std::cout << "Trying to create a form with the grade too low (more than 150)" << std::endl;
		Form invalidLow("invalidLow", 200, 220);

		std::cout << std::endl << "You should not see this!" << std::endl;
		std::cout << invalidLow << std::endl;
		alberto.signForm(invalidLow);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "----------------------------------------------------" <<std::endl;
	try
	{
		Bureaucrat alberto("Alberto", 5);
		std::cout << "Trying to create a form with the grade too high(less than 1)" << std::endl;
		Form invalidHigh("InvalidLow", 0, 30);

		std::cout << std::endl << "You should not see this!" << std::endl;
		std::cout << invalidHigh << std::endl;
		alberto.signForm(invalidHigh);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}