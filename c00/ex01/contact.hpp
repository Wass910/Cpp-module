#ifndef CONTACT_H
# define CONTACT_H

class Contact {
public:
    Contact add_fonction(Contact);
    void    search_fonction(Contact, int) const;
    void    print_contact(Contact, int, int) const;
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string dark_secret;
};

#endif