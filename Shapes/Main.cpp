#include <iostream>
#include "Shapes.h"
#include "Shapes2D.h"
#include "Shapes3D.h"

int main()
{
    Square square(3);
    square.Showinfo();

    Circle circle(15);
    circle.Showinfo();

    Cylinder cylinder1(10, 5);
    cylinder1.Showinfo();
    Cylinder cylinder2(3, circle);
    cylinder2.Showinfo();

    Triangle triangle(2, 44);
    triangle.Showinfo();
    TriangularPyramid triangularpyramid1(12, 12, 22);
    triangularpyramid1.Showinfo();
    TriangularPyramid triangularpyramid2(2, triangle);
    triangularpyramid2.Showinfo();

    Sphere sphere(20);
    sphere.Showinfo();

    //std::cout << (triangularpyramid1 < cylinder1) << std::endl;
    std::cout << (circle > square) << std::endl;
    std::cout << (sphere == sphere) << std::endl;
    //std::cout << (cylinder2 < triangularpyramid2) << std::endl;

	return 0;
}