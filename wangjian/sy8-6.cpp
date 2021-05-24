#include<iostream>
#include<cmath>
using namespace std;
const double PI = 3.1415926535;
class Shape {
public:
	Shape() {};
	Shape(double a,double b):a(a),b(b) {};
	Shape(double r):r(r) {};
	double getA() { return a; };
	double getB() { return b; };
	double getR() { return r; };
private:
	double a=0,b=0,r=0;
};
class Rectangle :public Shape{
public:
	double getArea(Shape &m);
	double getPerim(Shape &m);
private:
	Shape n;
	double area=0, perim=0;
};
double Rectangle::getArea(Shape &m) {
	n = m;
	area=n.getA()* n.getB();
	return area;
};
double Rectangle::getPerim(Shape &m) {
	n = m;
	perim = 2 * (n.getA() + n.getB());
	return perim;
};
class Circle :public Shape {
public:
	Circle() {};
	double getArea(Shape& m);
	double getPerim(Shape& m);
private:
	Shape n;
	double area=0, perim=0;
};
double Circle::getArea(Shape &m) {
	n = m;
	area = PI * pow(n.getR(), 2);
	return area;
};
double Circle::getPerim(Shape& m) {
	n = m;
	perim = 2 * PI * n.getR();
	return perim;
};
int main() {
	Shape a(2, 3), b(4);
	Rectangle rectangle;
	Circle circle;
	cout <<"矩形的面积："<< rectangle.getArea(a)<<endl;
	cout << "矩形的周长：" << rectangle.getPerim(a)<<endl;
	cout << "圆的面积：" << circle.getArea(b) << endl;
	cout << "圆的周长：" << circle.getPerim(b) << endl;
	return 0;
}