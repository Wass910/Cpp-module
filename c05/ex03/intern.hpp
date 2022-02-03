#ifndef INTERN_H
# define INTERN_H

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Intern {
    public:
        Intern( void );
        Intern( std::string const & target);
        Intern( Intern const & src );
        ~Intern(void);

        
        Intern & operator=( Intern const & src );
        AForm*    makeForm( std::string FormName, std::string target );
    private:
        
        typedef struct s_formList
		{
			std::string formName;
			AForm *formType;
		}	t_formList;
};

#endif