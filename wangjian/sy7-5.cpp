#include <iostream>
using namespace std;
const double PI = 3.1415926535;
class Shape {
public:
	double feature(double x, double y) { 
		const double s[2] = {x,y};
		cout << "����Shape�ľ�������������s[2]=" << s[2] << endl;
		return s[2]; 
	};
	double feature(double r) { 
		cout << "����Shape��Բ������������r=" << r << endl;
		return r; 
	};
private:

};
class Rectangle :public Shape {
public:
	double GetArea();
private:
	double x, y;
};
class Square :public Rectangle {
public:
	void show() {
		cout << "������Squre������" << endl;
	};
private:

};
class Circle :public Shape {
public:
	double GetArea();
private:
	double r;
};
double Rectangle::GetArea() {
	double s= feature(x,y);
	cout << "����Rectangle������s=" << s << endl;
	return s;
}
double Circle::GetArea() {
	cout << "����Circle�����������" << PI * feature(r) * feature(r) << endl;
	return PI*feature(r)*feature(r);
}
int main() {
	Shape shape1;
	Rectangle rectangle1;
	Circle circle1;
	Square square1;
	shape1.feature(2, 2);
	shape1.feature(3);
	rectangle1.GetArea();
	circle1.GetArea();
	square1.show();
	return 0;
}