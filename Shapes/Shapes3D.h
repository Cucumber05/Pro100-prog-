#pragma once
#include <iostream>
#include <string>

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

