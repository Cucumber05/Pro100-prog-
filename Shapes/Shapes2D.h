#pragma once
#include <iostream>
#include <string>
#include "Shapes.h"
#define pi 3.14

class Shape2D : public Shape {
public:
    double area = 0;
    virtual void Showinfo() = 0;
    virtual void GetName() = 0;

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
    Square(double side): side(side) {
        CalculateArea();
    }
    void Showinfo() override {
        GetName();
        std::cout << "my side = " << side <<"\nmy area = " << area << std::endl;
    }
    void GetName()  override {
        std::cout << "I'm square!" << std::endl;
    }
    void CalculateArea() override {
        area = side * side;
    }

};

class Triangle : public Shape2D {
protected:
    double base;
    double height;

public:

    Triangle(double base, double height): base(base), height(height){
        CalculateArea();
    }
    void Showinfo() override {
        GetName();
        std::cout << "my base = " << base << "\nmy height = "<< height << "\nmy area = " << area << std::endl;
    }
    void GetName()  override {
        std::cout << "I'm triangle!" << std::endl;
    }
    void CalculateArea() override {
        area = base * height / 2;
    }

};

class Circle : public Shape2D {
protected:
    double radius;

public:
    Circle(double radius) : radius(radius) {
        CalculateArea();
    }
    void Showinfo() override {
        GetName();
        std::cout << "my radius = " << radius << "\nmy area = " << area << std::endl;
    }
    void GetName()  override {
        std::cout << "I'm circle!" << std::endl;
    }
    void CalculateArea() override {
        area = pi * pow(radius, 2);
    }

};


