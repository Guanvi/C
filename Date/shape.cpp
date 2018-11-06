#include <iostream>
using namespace std;

class Shape
{
	private :
		int x;
		int y;
	public :
		Shape(int x,int y);
		int getX(){return x;};
		int getY(){return y;};
};

class Rect : public Shape
{
	private :
		int width;
		int high;
	public :
		Rect(int x,int y,int width,int high);
		int getWidth(){return width;};
		int getHeigh(){return high;};
};

class Circle : public Shape
{
	private :
		int r;
	public :
		Circle(int x,int y,int r);
		int getR(){return r;};
};

Shape :: Shape(int x,int y)
	:x(x),y(y)
{
	cout << "HHH" << endl;
	cout << this->getX() << endl;
	cout << this->getY() << endl;
}

Rect :: Rect(int x,int y, int width,int high) : Shape(x,y)
{
	this->width=width;
	this->high=high;

}

Circle :: Circle(int x,int y,int r) : Shape(x,y)
{
	this->r=r;
}

int main()
{
	Shape shape(5,5);
	Rect rect(1,1,6,6);
	cout << rect.getWidth() << endl;
	cout << rect.getHeigh() << endl;
	Circle circle(6,6,10);
	cout << circle.getR() << endl;
	return 0;
}
