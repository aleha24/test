#include "file_write.hpp"

Fruit_file_write::Fruit_file_write(const char *fruit_file_path)
{
    file_DI.open(fruit_file_path, std::ifstream::out);
}


Fruit_file_write::~Fruit_file_write()
{
    file_DI.close();
}


void Fruit_file_write::Write(Fruit_list &fruit_name, int fruit_list_number)
{
    file_DI << "Список " << fruit_list_number + 1 << ":" << std::endl;
    file_DI << fruit_name.name << "," << std::endl;
    file_DI << fruit_name.max_value << "," << std::endl;
    file_DI << fruit_name.seller << "," << std::endl;
    file_DI << fruit_name.weight << std::endl;
}