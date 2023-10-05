//
// Created by 79194 on 05.10.2023.
//

#include "Field.h"

class Field
{
private:
    Point* borders;
    std::vector<char> map;
    const char bg_char = ' ';

public:
    explicit Field(Point& borders_arg)
    {
        this->borders = &borders_arg;

        map.reserve(this->borders.);
    }

    void fill_map()
    {
        for(auto current_char : map)
        {
            current_char = bg_char;
        }
    };


};