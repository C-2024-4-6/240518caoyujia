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
		cout << "请输入长方柱的长:"; 
		cin >> length;
		cout << "请输入长方柱的宽:";
		cin >> width;
		cout << "请输入长方柱的高:"; 
		cin >> height;
	};
	int volume() {
		return length * width * height;
	}
	void showV() {
		cout << "长方柱的体积为:"<< volume() << endl;
	}
};
int main()
{
	cuboid c1;
	c1.setCuboid();
	c1.showV();
	return 0;
}