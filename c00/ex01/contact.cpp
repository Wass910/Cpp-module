#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <cstring>
#include "contact.hpp"

Contact add_fonction(Contact contact)
{
    std::string str;

    std::cout << "First name : ";
    getline(std::cin, contact.first_name);
    std::cout << "Last name : ";
    getline(std::cin, contact.last_name);
    std::cout << "Nickname : ";
    getline(std::cin, contact.nickname);
    std::cout << "Phone number : ";
    getline(std::cin, contact.phone_number);
    std::cout << "Dark secret : ";
    getline(std::cin, contact.dark_secret);
    std::cout << "Your contact have been add with success." << std::endl;
    return contact;
}

void    print_space(int lengh)
{
    lengh = 10 - lengh;
    while (lengh > 0)
    {
        std::cout << " ";
        lengh--;
    }
}

std::string    tronc_string(std::string str)
{
    int lengh = 0;
    std::string tronc;

    while (lengh < 9)
    {
        std::cout << str[lengh];
        lengh++;
    }
    std::cout << ".";
    std::cout << "|";
    return tronc;
}

void    search_fonction(Contact contact, int i)
{
    int lengh;

    std::cout << "         " << i << "|";
    lengh = contact.first_name.size();
    if (lengh <= 10)
    {    
        print_space(lengh);
        std::cout << contact.first_name << "|";
    }
    else
        tronc_string(contact.first_name);
    lengh = contact.last_name.size();
    if (lengh <= 10)
    {    
        print_space(lengh);
        std::cout << contact.last_name << "|";
    }
    else
        tronc_string(contact.last_name);
    lengh = contact.nickname.size();
    if (lengh <= 10)
    {    
        print_space(lengh);
        std::cout << contact.nickname << "|";
    }
    else
        tronc_string(contact.nickname);
    std::cout << std::endl;
}

int what_index(char c)
{
    if (c == '1')
        return 0;
    if (c == '2')
        return 1;
    if (c == '3')
        return 2;
    if (c == '4')
        return 3;
    if (c == '5')
        return 4;
    if (c == '6')
        return 5;
    if (c == '7')
        return 6;
    if (c == '8')
        return 7;
    return -1;
}

int get_index(void)
{
    int i;
    std::string str;
    std::cout << "Enter the index of your contact : ";
    getline(std::cin, str);
    if (str.size() != 1)
    {
        std::cout << "Sorry bad synthaxe." << std::endl;
        return -1;
    }
    if (str[0] >= '1' && str[0] <= '8')
        return (what_index(str[0]));
    else
        std::cout << "Sorry bad synthaxe." << std::endl;
    return -1;
}

void    print_contact(Contact contact, int i, int search)
{
    if (search > i - 1)
        std::cout << "This index don't matche with a contact." << std::endl;
    else
    {
        std::cout << std::endl;
        std::cout << "First name : " << contact.first_name << std::endl;
        std::cout << "Last name : " << contact.last_name << std::endl;
        std::cout << "Nickname : " << contact.nickname << std::endl;
        std::cout << "Phone number : " << contact.phone_number << std::endl;
        std::cout << "Dark secret : " << contact.dark_secret << std::endl;
        std::cout << std::endl;
    }
}

int main(int argc, char **argv)
{
    int i = 0;
    int search = 0;
    Contact contact[8];
    std::string str;

    std::cout << "Hello, welcome to the first contact book in c++." << std::endl;
    while (1)
    {
        std::cout << "Enter your command : ";
        getline(std::cin, str);
        if (str.compare("ADD") == 0)
        {    
            if (i < 8)
            {
                contact[i] = add_fonction(contact[i]);
                i++;
            }
            else
                std::cout << "Your Book is full, you have too much friend sorry." << std::endl;
        }
        else if (str.compare("SEARCH") == 0)
        {    
            if (i == 0)
                std::cout << "Your Book is empty, please register one contact before your search." << std::endl;
            else
            {
                while (search != i)
                {
                    search_fonction(contact[search], search + 1);
                    search++;
                }
                search = get_index();
                if (search != -1)
                    print_contact(contact[search], i, search);
                search = 0;
            }
        }
        else if (str.compare("EXIT") == 0)
            break ;
        else 
            std::cout << "The command is not valid, please try again !!" << std::endl;
    }
    return 0;
}