#include<iostream>
using namespace std;
class Point {
public:
	Point() {};
	Point(double x,double y):x(x),y(y) {};
	friend Point operator+(Point &m,Point &n);//定义友元函数+
	void show() { cout << "(" << x << "," << y << ")" << endl; };
private:
	double x = 0, y = 0;
};
    Point operator+(Point& m,Point &n) {
	return Point(m.x + n.x, m.y + n.y);
};//友元函数的实现
int main() {
	Point a(4, 5), b(3, 2),c;
	c = a + b;
	c.show();
	return 0;
}