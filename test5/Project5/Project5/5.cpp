#include<iostream> 
using namespace std; 
class Point {
private:
	int x;
	int y;
public:
	Point() :x(60), y(80) {}
	void setPoint(int i, int j) {
		x = 60 + i;
		y = 80 + j;
	}
	void display() {
		cout << "�޸ĺ������ֵΪ:(" << x << "," << y << ")" << endl;
	}
};
int main() {
	Point p;
	p.setPoint(10,10);
	p.display();
	return 0;
}