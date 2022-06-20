//有10个学生，每个学生的数据包括学号。姓名、3门课的成绩，从键盘输入10个学生的数据，打印出三门课程总平均成绩，以及最高分的学生的数据
//包括学号、姓名、3门成绩、平均分
#include<iostream>
#include<iomanip>
const int n = 10;
struct student {
	char num[6];
	char name[8];
	int score[3];
	float avr;
}stu[n];
using namespace std;
int main()
{
	int i, j, max, maxi, sum;
	float average;
	for (i = 0; i < n; i++)
	{
		cout << "请输入第" << i + 1 << "个学生的信息" << endl;
		cout << "学号：";
		cin >> stu[i].num;
		cout << "姓名：";
		cin >> stu[i].name;
		for (j = 0; j < 3; j++)
		{
			cout << "第" << j + 1 << "门课程成绩：";
			cin >> stu[i].score[j];
		}
		cout<<endl;
	}
	average = 0;
	max = 0;
	maxi = 0;
	for (i = 0; i < n; i++)
	{
		sum = 0;
		for (j = 0; j < 3; j++)
			sum = sum + stu[i].score[j];
		stu[i].avr = sum / 3.0;
		average = average + stu[i].avr;
		if (sum > max)
		{
			max = sum;
			maxi = i;
		}
	}
	average = average / n;
	cout << "学号:       姓名       分数1       分数2       分数3       平均分" << endl;
	for (i = 0; i < n; i++)
	{
		cout<< stu[i].num << "  " << setw(10) << stu[i].name << "         ";
		for (j = 0; j < 3; j++)
			cout << setw(3) << stu[i].score[j] << "         ";
			cout << stu[i].avr << endl;
	}
	cout << "总平均分为：" << average << endl;
	cout << "成绩第一名为：" << stu[maxi].name << ",总分为：" << max << endl;
	return 0;
}
