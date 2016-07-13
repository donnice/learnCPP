// page 84
#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

class Point
{
private:
	double xval, yval;
public:
	Point(double x=0.0, double y=0.0)
	{
		xval = x;
		yval = y;
	}

	double x(){return xval;}
	double y(){return yval;}

	double dist(Point other)
	{
		double xd = xval-other.x();
		double yd = yval-other.y();
		return sqrt(xd*xd+yd*yd);
	}

	Point add(Point b)
	{
		return Point(xval+b.x(),yval+b.y());
	}

	void rotate(int angle)
	{
		cout << "I have rotated " << angle << " degree!"<<endl;
	}
};

class Shape
{
public:
	virtual Point center() const = 0;		// pure virtual function
	virtual void move(Point to) = 0;

	virtual void draw() const = 0;			// draw on current "Canvas"
	virtual void rotate(int angle) = 0;

	virtual ~Shape(){cout << "Shape is destructed!" << endl;}
};

class Circle:public Shape
{
public:
	Circle(Point p, int rr)					// constructor

	Point center() const {return x;}

};

void rotate_all(vector<Shape*>& v, int angle);


int main()
{	
	Point p;
	cout << p.x() << endl;
	return 0;
}

void rotate_all(vector<Shape*>& v, int angle)
{
	for(auto p:v)
		p->rotate(angle);
}
