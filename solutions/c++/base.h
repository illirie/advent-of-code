#include <vector>
#include <string>

/*
    Интерфейс для последующей работы с классами дней адвента.
    Содержит две функции: по одной на каждую часть задания, а также функцию для чтения информации из файла.

*/

class base
{
protected:
    std::string filename;
public:

    virtual void read_file() = 0;
    virtual void part_a() = 0;
    virtual void part_b() = 0;
};
