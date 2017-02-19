#ifndef __CYLINDER_HPP__
#define __CYLINDER_HPP__

#define PI 3.14159;

class Circle
{
	double radius;
public:
	Circle(double r) : radius(r) {};
	double area() {return radius*radius*PI}
};

class Cylinder
{
	Circle base;
	double height;
public:
	Cylinder(double radius, double height) : base(radius), height(height) {};
	double volume() { return base.area()*height; }
};

void printCylinder()
{
	Cylinder myCylinder(10,20);
	std::cout << "myCylinder volume is: " << myCylinder.volume();
}
#endif 