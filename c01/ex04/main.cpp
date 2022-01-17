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

    std::ifstream   ifs(argv[1]);
    std::string     word;
    std::string     all;
    std::string     outfile;
    std::string     s1 = (std::string)argv[2];
    std::string     s2 = (std::string)argv[3];

    if (!ifs)
    {
        std::cout << "File doesn't exist." << std::endl;
        return 0;
    }
    while(getline(ifs, word))
        all = all + word + "\n"; 
    ifs.close();
    std::size_t found = all.find(s1);
    outfile = (std::string)argv[1] + ".replace";
    std::ofstream   ofs(outfile);
    if (found == std::string::npos)
        ofs << all;
    else
    {
        all.erase(found, s1.size());
        all.insert(found,s2);
        ofs << all;
    }
    return 0;
}