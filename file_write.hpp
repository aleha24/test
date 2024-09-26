#include <string>
#include <fstream>
#include "fruits.hpp"


class Fruit_file_write
{
private: 
    std::fstream file_DI;
public:
    Fruit_file_write(const char *fruit_file_path);
    ~Fruit_file_write();
    void Write(Fruit_list &fruit_name, int fruit_list_number);
};