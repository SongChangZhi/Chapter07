////编写一个函数print，打印一个学生的成绩数组，该数组中有5个学生的数据，每个学生的数据包括num（学号），name，score[3]。用主函数输入数据，print输出
//#include<iostream>
//#include<iomanip>
//using namespace std;
//const int n = 5;
//struct Student
//{
//	int num;
//	char name[8];
//	float score[3];
//}stu [n];
//int main()
//{
//	void print(Student stu[]);
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		cout << "请输入第" << i + 1 << "个学生的信息"<<endl;
//		cout << "学号：";
//		cin >> stu[i].num;
//		cout << "姓名：";
//		cin >> stu[i].name;
//		for (j = 0; j < 3; j++)
//		{
//			cout << "学科" << j + 1 << ":";
//			cin >> stu[i].score[j];
//		}
//		cout << endl;
//	}
//	print(stu);
//	return 0;
//}
//void print(Student stu[])
//{
//	int i, j;
//	cout << "学号      " << "姓名       " << "分数1      " << "分数2      " << "分数3" << endl;
//	for (i = 0; i < 5; i++)
//	{
//		cout << stu[i].num << "" << setw(10) << stu[i].name << "        ";
//		for (j = 0; j < 3; j++)
//		{
//			cout << setw(3) << stu[i].score[j] <<  "        ";
//		}
//		cout << endl;
//	}
//}