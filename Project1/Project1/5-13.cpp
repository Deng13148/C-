#include <iostream>
#include <string>
using namespace std;
class Y;
class X {
public:
	friend int h(X*);
	friend int Y::g(X*);
	friend class Z;
	void setI(int newi);
private:
	static int i;
};
class Y {
public:
	int g(X*);
private:

};
class Z {
public:
	int f(X*);
private:

};
void X::setI(int newi) {
	i = newi;
}
int Y::g(X*) {
	
}
int main() {

}