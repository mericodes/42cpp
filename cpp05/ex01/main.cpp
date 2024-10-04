
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat alberto("Alberto", 5);
		Form signedForm("SignedForm", 10, 15);
		Form unsignedForm("UnsignedForm", 6, 7);

		std::cout << alberto << std::endl;
		std::cout << signedForm << std::endl;
		std::cout << unsignedForm << std::endl;

		alberto.signForm(unsignedForm);
		alberto.signForm(signedForm);
		alberto.signForm(signedForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "----------------------------------------------------" <<std::endl;
	try
	{
		Bureaucrat alberto("Alberto", 5);
		Form valid("Valid", 6, 7);
		Form invalidLow("InvalidLow", 1, 1);

		std::cout << alberto << std::endl;
		std::cout << valid << std::endl;
		std::cout << invalidLow << std::endl;

		alberto.signForm(valid);
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
		Form invalidHigh("InvalidHigh", 200, 220);
		std::cout << invalidHigh << std::endl;
		alberto.signForm(invalidHigh);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}