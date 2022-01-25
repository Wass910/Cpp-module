#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class PresidentialPardonForm : public AForm {
    public:
        PresidentialPardonForm( void );
        PresidentialPardonForm( std::string const & target);
        PresidentialPardonForm( PresidentialPardonForm const & src );
        ~PresidentialPardonForm(void);

        
        PresidentialPardonForm & operator=( PresidentialPardonForm const & src );
        std::string getTarget( void ) const;
        virtual void    execute (Bureaucrat const & executor) const;
        void    forgive( void ) const;
        
    private:
        std::string _target;
};

#endif