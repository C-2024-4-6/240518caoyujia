#include<iostream> 
using namespace std; 
class cuboid
{
private:
	int length;
	int width;
	int height;
public:
	void setCuboid()
	{
		cout << "�����볤�����ĳ�:"; 
		cin >> length;
		cout << "�����볤�����Ŀ�:";
		cin >> width;
		cout << "�����볤�����ĸ�:"; 
		cin >> height;
	};
	int volume() {
		return length * width * height;
	}
	void showV() {
		cout << "�����������Ϊ:"<< volume() << endl;
	}
};
int main()
{
	cuboid c1;
	c1.setCuboid();
	c1.showV();
	return 0;
}