﻿#include <iostream>
#define pi 3.14

class Shape {
public:
    virtual void Showinfo() = 0;
    virtual std::string GetName() = 0;

};
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

    }
    void CalculateArea() override {
    }

};

class Circle : public Shape2D {
private:
    double radius;

public:
    void Showinfo() override {

    }
    std::string GetName()  override {

    }
    void CalculateArea() override {
    }

};


class Shape3D : public Shape {
private:
    double volume = 0;

public:
    void Showinfo() override {

    }
    std::string GetName()  override {

    }
    bool operator> (Shape3D) {}
    bool operator< (Shape3D) {}
    bool operator== (Shape3D) {}

    virtual void CalculateVolume() = 0;
};

class TriangularPyramid : public Shape3D, public Triangle {
private:
    double height;

public:
    void CalculateVolume() override {
    }

};

class Cylinder : public Shape3D, public Circle {
private:
    double height;

public:
    void CalculateVolume() override {
    }

};

class Sphere : public Shape3D {
private:
    double radius;

public:
    void CalculateVolume() override {
    }

};
int main()
{
    std::cout << "Hello World";

    return 0;
}
