#include "fruit_fill.hpp"

// Fruit_list_fill::Fruit_list_fill()
// {

// }

void Fruit_list_fill::Fill(std::string fruit_file_path, Fruit_list &fruit_name)
{
    std::fstream file_DI;
    file_DI.open(fruit_file_path, std::ifstream::in);
    std::string line;
    std::getline(std::ws(file_DI), line, ',');
    fruit_name.name = line;
    std::getline(std::ws(file_DI), line, ',');
    fruit_name.max_value = stod(line);
    std::getline(std::ws(file_DI), line, ',');
    fruit_name.seller = line;
    std::getline(std::ws(file_DI), line, ',');
    fruit_name.weight = stod(line);
    file_DI.close();
}