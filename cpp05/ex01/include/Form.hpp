#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Form {
	private:
		const std::string	_name;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		bool				_signed;
	public:
		Form();
		Form(const std::string _name, const int _gradeToSign, const int _gradeToExecute, bool _signed);
		Form(const Form &other);
		Form &operator=(const Form &other);
		~Form();

		const std::string	getName() const;
		const int			getGradeToSign() const;
		const int			getGradeToExecute() const;
		bool				getSigned() const;

		void				beSigned(Bureaucrat &bureaucrat);
};

#endif