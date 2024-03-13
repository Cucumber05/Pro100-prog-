#pragma once
#include <iostream>
#include <string>

class Shape2D : public Shape {
public:
    double area = 0;
    virtual void Showinfo() = 0;
    virtual std::string GetName() = 0;

    double GetArea() {
        return area;
    }

    bool operator> (Shape2D& other) {
        return this->area > other.area;
    }
    bool operator< (Shape2D& other) {
        return this->area < other.area;
    }
    bool operator== (Shape2D& other) {
        return this->area == other.area;
    }

    virtual void CalculateArea() = 0;
};

class Square : public Shape2D {
private:
    double side;

public:
    void Showinfo() override {
        std::cout << "" << std::endl;
    }
    std::string GetName()  override {
        return "I'm s\quare!";
    }
    void CalculateArea() override {
        area = side * side;
    }

};

class Triangle : public Shape2D {
private:
    double base;
    double height;

public:

    void Showinfo() override {

    }
    std::string GetName()  override {
        return "I'm triangle!";
    }
    void CalculateArea() override {
        area = base * height / 2;
    }

};

class Circle : public Shape2D {
private:
    double radius;

public:
    void Showinfo() override {
        std::cout << "" << std::endl;
    }
    std::string GetName()  override {
        return "I'm circle!";
    }
    void CalculateArea() override {
        area = pi * pow(radius, 2);
    }

};


