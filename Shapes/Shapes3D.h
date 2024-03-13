#pragma once
#include <iostream>
#include "Shapes.h"
#include "Shapes2D.h"
#include <string>

class Shape3D : public Shape {
public:
    double volume = 0;
    virtual void Showinfo() = 0;
    virtual void GetName() = 0;
    double GetVolume() {
        return volume;
    }


    bool operator> (Shape3D& other) {
        return this->volume > other.volume;
    }
    bool operator< (Shape3D& other) {
        return (this->volume < other.volume);
    }
    bool operator== (Shape3D& other) {
        return this->volume == other.volume;
    }

    virtual void CalculateVolume() = 0;
};

class TriangularPyramid : public Shape3D, public Triangle {
private:
    double height;
    double base_area;

public:
    TriangularPyramid(double height, double h, double b) : height(height), Triangle(b, h) {
        base_area = Triangle::area;
        CalculateVolume();
    }
    TriangularPyramid(double height, Triangle& triangle) : height(height), Triangle(triangle) {
        base_area = Triangle::area;
        CalculateVolume();
    }
    void Showinfo() override {
        GetName();
        std::cout << "my height = " << height << "\nmy height of base =" << Triangle::height << "\nmy base of base = " << Triangle::base << "\nmy area of base = " << Triangle::area << "\nmy volume = " << volume << std::endl;
    }
    void GetName()  override {
        std::cout << "I'm Triangular Pyramid!" << std::endl;
    }
    void CalculateVolume() override {
        volume = base_area * height / 3;
    }

};

class Cylinder : public Shape3D, public Circle {
private:
    double height;
    double base_area;

public:
    Cylinder(double height, double radius) : height(height), Circle(radius) {
        base_area = Circle::area;
        CalculateVolume();
    }
    Cylinder(double height, Circle& circle) : height(height), Circle(circle) {
        base_area = Circle::area;
        CalculateVolume();
    }
    void Showinfo() override {
        GetName();
        std::cout << "my height = " << height << "\nmy radius ="<< Circle::radius << "\nmy area of base = " << Circle::area << "\nmy volume = " << volume << std::endl;
    }
    void GetName()  override {
        std::cout << "I'm Cylinder!" << std::endl;
    }
    void CalculateVolume() override {
        volume = base_area * height;
    }

};

class Sphere : public Shape3D {
private:
    double radius;

public:
    Sphere(double radius) : radius(radius) {
        CalculateVolume();
    }
    void Showinfo() override {
        GetName();
        std::cout << "my radius = " << radius << "\nmy volume = " << volume << std::endl;
    }
    void GetName()  override {
        std::cout << "I'm Cylinder!" << std::endl;
    }
    void CalculateVolume() override {
        volume = (4 / 3) * pi * pow(radius, 3);
    }
};


