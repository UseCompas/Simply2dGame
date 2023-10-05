//
// Created by 79194 on 05.10.2023.
//
#include <stdexcept>
#include "Point.h"

class Point
{
private:
    int x;
    int y;

public:
    Point(int x_p,int y_p)
    {
        if(isCorrectRange(x_p,y_p))
        {
            this->x = x_p;
            this->y = y_p;
        }
        else
        {
            throw std::out_of_range("Incorrect arguments from constructor class \"Point\"");
        }
    }

    [[nodiscard]]
    int get_X() const
    {
        return this->x;
    }

    [[nodiscard]]
    int get_Y() const
    {
        return this->y;
    }

    void set_X(int value)
    {
        this->x = value;
    }

    void set_Y(int value)
    {
        this->y = value;
    }

    bool operator< (Point* lp) const
    {
        return lp->get_Y() < this->y && lp->get_X() < this->x ;
    }
private:

    static bool isCorrectRange(int x_val,int y_val)
    {
        return x_val>= 0 && y_val>=0;
    }

};


