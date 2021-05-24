#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
const double PI = 3.1415926535;
class CPoint {
public:
	CPoint(double xx = 0.0, double yy = 0.0) {
		x = xx; y = yy;
	};
	double getX()const { return x; };
	double getY()const { return y; };
private:
	double x, y;
};
class CLine :public CPoint{
public:
	CLine(CPoint &a, CPoint &b):a(a),b(b){};
	double Lpoint();
	double Kpoint();
private:
	double L=0, K=0;
	CPoint a, b;
};
double CLine::Lpoint() {
	L = sqrt(pow((a.getX() - b.getX()), 2) + pow((a.getY() - b.getY()), 2));
	return L;
}
double CLine::Kpoint() {
	K = (a.getY() - b.getY()) / (a.getX() - b.getX());
	return K;
}
class CCircle :public CPoint {
public:
	CCircle(CPoint& a, CPoint& b) :a(a), b(b) {};
	double getR() { CLine radius(a, b); r=radius.Lpoint(); return r; };
	double Scircle();
private:
	double r=0,S=0;
	CPoint a, b;
};
double CCircle::Scircle() {
	r = CCircle::getR();
	S = PI * pow(r, 2);
	return S;
}
int main() {
	CPoint a(1, 1),b(2,2);
	CLine line(a, b);
	line.Lpoint();
	line.Kpoint();
	CCircle circle(a, b);
	circle.Scircle();
	cout << "两点间的距离：" << fixed << line.Lpoint() << endl;
	cout <<"两点间的斜率：" << fixed << line.Kpoint() << endl;
	cout <<"圆的面积：" << setw(12) << setfill(' ')<< fixed <<circle.Scircle() << endl;
	return 0;
}