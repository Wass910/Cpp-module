#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal{
public:
    WrongAnimal( void );
    WrongAnimal( WrongAnimal const & src );
    ~WrongAnimal( void );
    
    std::string getType(void) const;
    void makeSound( void ) const;
    WrongAnimal & operator=( WrongAnimal const & src );

protected:
    std::string _type;
};

#endif