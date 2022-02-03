#include <iostream>
#include <iomanip>
#include <limits.h>
#include <math.h>
#include <string>

class ToHigh: public std::exception{
    public:
        virtual const char* what() const throw()
        {
            return ("int : impossible\nfloat : impossible\ndouble : impossible\nchar : impossible");
        }
};

void    from_int( int to_cast)
{
    float f = static_cast<float>(to_cast);
    double d = static_cast<double>(to_cast);
    char c = static_cast<char>(to_cast);

    std::cout << "int : " << to_cast << std::endl;
    std::cout  << "float : " << f << ".Of" << std::endl;
    std::cout  << "double : " << d << ".0" << std::endl;
    if (to_cast > 32 && to_cast < 127)
        std::cout << "char : " << "'" << c << "'" << std::endl;
    else 
        std::cout << "char : " << "non displayable" << std::endl;
    return ;
}

void    from_float(float to_cast, int need_precision)
{
    int i = static_cast<int>(to_cast);
    double d = static_cast<double>(to_cast);
    char c = static_cast<char>(to_cast);

    if (to_cast > 2147483647.0f || to_cast < -2147483648.0f)
        std::cout << "int : " << "impossible" << std::endl;
    else
        std::cout << "int : " << i << std::endl;
    if (need_precision == 0)
    {
        if (to_cast > __FLT_MAX__ || to_cast < __FLT_MIN__)
            std::cout << "float : " << "inff" << std::endl;
        else
            std::cout  << "float : " << to_cast << ".0f" << std::endl;
        std::cout  << "double : " << d << ".0" << std::endl;
    }
    else
    {
        std::cout  << "float : " << to_cast << "f" << std::endl;
        std::cout  << "double : " << d << std::endl;
    }
    if (i > 32 && i < 127)
        std::cout << "char : " << "'" << c << "'" << std::endl;
    else 
        std::cout << "char : " << "non displayable" << std::endl;
    return ;
}

void    from_double(double to_cast, int need_precision)
{
    int i = static_cast<int>(to_cast);
    float f = static_cast<float>(to_cast);
    char c = static_cast<char>(to_cast);

    if (to_cast > INT_MAX || to_cast < INT_MIN)
        std::cout << "int : " << "impossible" << std::endl;
    else
        std::cout << "int : " << i << std::endl;
    if (need_precision == 0)
    {
        if (to_cast > __FLT_MAX__ || to_cast < __FLT_MIN__)
            std::cout << "float : " << "inff" << std::endl;
        else
            std::cout  << "float : " << f << ".0f" << std::endl;
        std::cout  << "double : " << to_cast << ".0" << std::endl;
    }
    else
    {
        std::cout  << "float : " << f << "f" << std::endl;
        std::cout  << "double : " << to_cast << std::endl;
    }
    if (i > 32 && i < 127)
        std::cout << "char : " << "'" << c << "'" << std::endl;
    else 
        std::cout << "char : " << "non displayable" << std::endl;
    return ;
}

void    from_char(char to_cast)
{
    float f = static_cast<float>(to_cast);
    double d = static_cast<double>(to_cast);
    int i = static_cast<int>(to_cast);

    std::cout << "int : " << i << std::endl;
    std::cout  << "float : " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    std::cout  << "double : " << std::fixed << std::setprecision(1) << d << std::endl;
    std::cout << "char : " << "'" << to_cast << "'" << std::endl;
    return ;
}

int to_precision_f(std::string str)
{
    int count = 0;
    int need_precision = 0;
    int lim = 0;

    while (str[count] != '.')
    {    
        count++;
        lim++;
    }   
    count++;
    while (str[count] != 'f' && lim != 6)
    {
        if (str[count] != '0')
            need_precision = 1;
        count++;
        lim++;
    }
    if (need_precision == 0)
        return (0);
    return (1);
}

int to_precision(std::string str)
{
    int count = 0;
    int need_precision = 0;
    int lim = 0;

    while (str[count] != '.')
    {    
        count++;
        lim++;
    }
    count++;
    while (str[count] && lim != 6)
    {
        if (str[count] != '0')
            need_precision = 1;
        count++;
        lim++;
    }
    if (need_precision == 0)
        return (0);
    return (1);
}

int    convert(std::string str)
{
    int i = 0;
    int is_not_integer  = 0;

    if (str.length() == 1 && ((str[0] > 32 && str[0] < 48 ) || (str[0] > 57 && str[0] < 127)))
        return 1;
    if (str[i] == '-')
        i++;
    while (str[i])
    {
        if (str[i] < 48 || str[i] > 57)
            is_not_integer = 1;
        i++;
    }
    if (is_not_integer == 0)
        return 2;
    i = 0;
    if (str[i] == '-')
        i++;
    if (str[i] < 48 || str[i] > 57)
        return 0;
    while (str[i])
    {
        while (str[i] >= 48 && str[i] <= 57)
            i++;
        if (str[i] != '.')
            return 0;
        i++;
        while (str[i] >= 48 && str[i] <= 57)
            i++;
        if (str[i] == 'f' && !str[i + 1])
            return 3;
        else if (str[i] == '\0')
            return (4);
        i++;
    }
    return 0;
}

void   for_the_science(std::string str)
{
    if (str == "nan" || str == "nanf")
    {
        std::cout << "int : " << "impossible" << std::endl;
        std::cout  << "float : " << "nanf" << std::endl;
        std::cout  << "double : " << "nan" << std::endl;
        std::cout << "char : " << "impossible" << std::endl;
        exit(0);
    }
    else if (str == "inf" || str == "+inf" || str == "inff" || str == "+inff")
    {
        std::cout << "int : " << "impossible" << std::endl;
        std::cout  << "float : " << "inff" << std::endl;
        std::cout  << "double : " << "inf" << std::endl;
        std::cout << "char : " << "impossible" << std::endl;
        exit(0);
    }
    else if (str == "-inf" || str == "-inff")
    {
        std::cout << "int : " << "impossible" << std::endl;
        std::cout  << "float : " << "-inff" << std::endl;
        std::cout  << "double : " << "-inf" << std::endl;
        std::cout << "char : " << "impossible" << std::endl;
        exit(0);
    }
    return;
}

int main(int argc, char **argv)
{
    int what_type;
    int need_precision;

    if (argc != 2)
    {
        std::cout << "Please enter a string to convert." << std::endl;
        return (1);
    }
    int verif = atoi(argv[1]);
    std::string tmp = argv[1];
    for_the_science(argv[1]);
    what_type = convert(argv[1]);
    try {
        switch (what_type)
        {
            case 1:
                from_char(argv[1][0]);
                break ;
            case 2:
                if (verif > INT_MAX || (verif = -1 && tmp != "-1" ))
                    throw ToHigh();
                from_int(verif);
                break ;
            case 3:
                need_precision = to_precision_f(argv[1]);
                from_float(atof(argv[1]), need_precision);
                break ;
            case 4:
                need_precision = to_precision(argv[1]);
                from_double(atof(argv[1]), need_precision);
                break ;
            default:
                std::cout << "Not good synthax." << std::endl;
                break ;
        }
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
        return 1;
    }
    return (0);
}