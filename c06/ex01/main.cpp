#include <iostream>
#include <iomanip>
#include <limits.h>
#include <math.h>
#include <string>

typedef struct data{
    std::string str1;
    std::string str2;
    int i;
}               t_data;

uintptr_t serialize(t_data* data)
{
    uintptr_t raw;

    raw = reinterpret_cast<uintptr_t >(data);
    return (raw);
}

t_data* deserialize(uintptr_t raw)
{
    t_data *data;

    data = reinterpret_cast<t_data *>(raw);
    return (data);
} 

int main(int argc, char **argv)
{
    t_data data;
    t_data *data2;
    uintptr_t test;
    void *final;

    if (argc != 3)
    {
        std::cout << "The prog need 2 arguments." << std::endl;
        return (1);
    }
    srand((unsigned)time(0)); 
    data.i = (rand()%100000)+1; 
    data.str1 = argv[1];
    data.str2 = argv[2];
    data2 = deserialize(serialize(&data));
    std::cout << "data.i  = " << data.i << std::endl;
    std::cout << "data.str1 = " << data.str1 << std::endl;
    std::cout << "data.str2 = " << data.str2 << std::endl;
    std::cout << "data2.i = " << data2->i << std::endl;
    std::cout << "data2.str1  = " << data2->str1 << std::endl;
    std::cout << "data2.str2  = " << data2->str2 << std::endl;
    return (0);
}