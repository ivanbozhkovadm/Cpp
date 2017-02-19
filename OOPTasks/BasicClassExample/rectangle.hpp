#ifndef __RECTANGLE_HPP__
#define __RECTANGLE_HPP__

class Rectangle
{
private:
	int width, height;
public:
	Rectangle();
	Rectangle(int, int);
	int area() { return width * height; }
};
Rectangle::Rectangle()
{
	width = 1;
	height = 1;
}
Rectangle::Rectangle(int x,int y)
{
	width = x;
	height = y;
}


void displayRectangle()
{
	Rectangle rect(10,20);
	cout << "area: " << rect.area()<<'\n';
	Rectangle * pToRect, * pToDynamicRect, * pToDynamicArrayOfRect;
	pToRect = &rect;
	cout << "pToRect area: " << pToRect->area() << '\n';
	pToDynamicRect = new Rectangle(2, 4);
	cout << "pToDynamicRect area: " << pToDynamicRect->area() << '\n';
	pToDynamicArrayOfRect = new Rectangle[2] { {2,2},{3,3} };
	cout << "pToDynamicArrayOfRect [0] area: " << pToDynamicArrayOfRect[0].area() << '\n';
	cout << "pToDynamicArrayOfRect [1] area: " << pToDynamicArrayOfRect[1].area() << '\n';
	delete pToDynamicRect;
	delete[] pToDynamicArrayOfRect;
}

#endif // !__RECTANGLE_HPP__