#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat {
	private:
		const std::string	_name;
		int 				_grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);
		~Bureaucrat();

		const std::string	getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();
		void				signForm();
};

class IBureaucratException : public std::exception {
	public:
		const char *what() const throw() = 0;
};

class GradeTooHighException : public IBureaucratException {
	public:
		const char *what() const throw();
};

class GradeTooLowException : public IBureaucratException {
	public:
		const char *what() const throw();
};

std::ostream &operator<< (std::ostream &out, const Bureaucrat &bureaucrat);

#endif