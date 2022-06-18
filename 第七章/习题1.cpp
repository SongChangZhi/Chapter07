////定义一个结构体变量，（年、月、日），编写程序，要求输入年月日程序能计算并输出该日在本年中是第几天。注意闰年问题
//#include<iostream>	
//using namespace std;
//struct 
//{
//	int year;
//	int month;
//	int day;
//}date;
//
//int main()
//{
//	int i, days;
//	int day_tab[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	cout << "请输入一个日期：";
//	cin >> date.year >> date.month >> date.day;
//	days = 0;
//	for (i = 1; i < date.month; i++)
//		days = days + day_tab[i];
//	days = days + date.day;
//	if (((date.year % 4 == 0) && (date.year % 100 != 0)) || (date.year % 400 == 0))
//	{
//		if (date.month > 2)
//			days = days + 1;
//	}
//	cout << "这是"<<date.year<<"年中的第" << days << "天" << endl;
//	return 0;
//}