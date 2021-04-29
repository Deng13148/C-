#include <iostream>
#include <string>
using namespace std;
class Y;
class X {
public:
	friend class Y;
	friend int h();
	//friend int Y::g();
	friend class Z;
	void setI();
private:
	static int i;
};
class Y {
public:
	int g();
private:

};
class Z {
public:
	int f();
private:

};
int X::i = 0;
void X::setI() {
	int newi;
	cout << "请输入i的值：";
	cin >> newi;
	i = newi;
}
int Y::g() {
	X::i = (X::i)+1;
	cout << "调用g（）后，i：" << X::i<<endl;
	return X::i;
}
int Z::f() {
	X::i = (X::i)+5;
	cout << "调用f（）后，i：" << X::i<<endl;
	return X::i;
}
int h() {
	X::i = (X::i)+10;
	cout << "调用h（）后，i：" << X::i<<endl;
	return X::i;
}
int main() {
	X myx;
	Y myy;
	Z myz;
	myx.setI();
	myy.g();
	myz.f();
	h();
	return 0;
}
