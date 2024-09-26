#include <string>
#include <fstream>
#include "fruits.hpp"

class Fruit_list_fill
{
private: 
    std::string line;
    std::fstream file_DI;
public:
    void Fill(std::string fruit_file_path, Fruit_list &fruit_name);
};