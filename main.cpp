#include <filesystem>
#include "fruits.cpp"
#include "fruit_fill.cpp"
#include "file_write.cpp"


int main()
{
    Fruit_list fruit_list[5];
    Fruit_list_fill list_fill;
    std::string folder_path = "in";
    int count = 0;
    for (const auto & entry : std::filesystem::directory_iterator(folder_path))
    {
        if (entry.path().extension() == ".txt")
            list_fill.Fill(entry.path().string(), fruit_list[count++]);
    }
    
    if (!std::filesystem::exists("out"))
        std::filesystem::create_directory("out");

    Fruit_file_write file_write1("out\\result1.txt");
    Fruit_file_write file_write2("out\\result2.txt");
    Fruit_file_write file_write3("out\\result3.txt");
    
    for (int i = 0; i < std::size(fruit_list); i++)
    {
        if (fruit_list[i].seller == "пятерочка")
        {
            file_write1.Write(fruit_list[i], i);
        }
    }

    for (int i = 0; i < std::size(fruit_list); i++)
    {
        if (fruit_list[i].seller == "магнит")
        {
            file_write2.Write(fruit_list[i], i);
        }
    }

    for (int i = 0; i < std::size(fruit_list); i++)
    {
        if (fruit_list[i].name == "яблоко")
        {
            file_write3.Write(fruit_list[i], i);
        }
    }
}