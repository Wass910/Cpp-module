#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Invald number of argument." << std::endl; 
        return (0);
    }

    int count = 0;
    std::ifstream   ifs(argv[1]);
    std::string     word;
    std::string     all;
    std::string     outfile;
    std::string     s1 = (std::string)argv[2];
    std::string     s2 = (std::string)argv[3];

    if (s1.empty() || s2.empty())
    {
        std::cout << "String can't be empty." << std::endl;
        return (0);
    }
    if (!ifs)
    {
        std::cout << "File doesn't exist." << std::endl;
        return 0;
    }
    while(getline(ifs, word))
        all = all + word + "\n"; 
    ifs.close();
    outfile = (std::string)argv[1] + ".replace";
    std::ofstream   ofs;
    ofs.open(outfile.c_str());
    while (count < (int)all.length())
    {
        if (all.compare(count, s1.length(), s1) == 0)
        {
            all.erase(count, s1.length());
            all.insert(count,s2);
            count += s2.length();
        }
        else
            count++;
    }
    ofs << all;
    return 0;
}