#pragma once
#include <iostream>
#include <string>

class Shape{
public:
    virtual void Showinfo() = 0;
    virtual std::string GetName() = 0;

};