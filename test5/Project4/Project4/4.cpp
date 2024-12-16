#include<iostream> 
using namespace std;
class student
{
public:
	student(int n, int s) : num(n),score(s) {}
	int getNum() {
		return num;
	}
	int getScore() {
		return score;
	}
private:
	int num;
	int score;
};
void max(student* students[], int size) {
	int m = 0;
	for (int i = 0; i < size; i++) {
		if (students[i]->getScore() > students[m]->getScore()) {
			m = i;
		}
	}
	cout << "最高成绩者的学号为:" << students[m]->getNum() << endl;
}
int main(){
	student students[5] = {
		student(1001,90),
		student(1002,85),
		student(1003,94),
		student(1004,80),
		student(1005,95)
	};
	student * p[5];
	for (int i = 0; i < 5; i++) {
		p[i] = &students[i];
	}
	max(p, 5);
	return 0;
	}