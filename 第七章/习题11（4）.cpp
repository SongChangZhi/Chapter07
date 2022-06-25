////医院内科有A,B,C,D,E,F,G共7位医生，每人在一周内要值一次夜班，排班要求是：
////（1）A医生值班日比C医生晚一天；（2）C医生值班日比D医生晚3天；（3）D医生值班日比E医生晚2天；
////（4）B医生值班日比G医生早两天；（5）F医生值班日在B医生和C医生值班日之间，且在星期四；
////请编写程序，输出每位医生的值班日。值班日以Sunday，Monday，Tuesday，Wednesday，Thursday，Friday，Saturday
////分别表示星期日到星期六（提示：用枚举变量）
//#include<iostream>
//using namespace std;
//int main()
//{
//	enum weekday { sun, mon, tue, wed, thu, fri, sat };			//声明枚举类型weekday
//	enum weekday day;
//	int a, b, c, d, e, f, g, loop;
//	char ch = 'A';
//	f = thu;
//	for (a = sun; a <= sat; a++)								//根据条件逐个检查A医生星期几符合条件	
//		if (a != f)												//要求A医生值班日不与F医生相同
//			for (b = sun; b <= sat; b++)							//逐个检查B医生星期几符合条件
//				if ((a != b) && (f > b))											//要求B医生值班日不与A医生相同且F在B之后
//					for (c = sun; c < sat; c++)							//逐个检查C医生星期几符合条件
//						if ((c != a) && (c != b) && (c != f) && (a == c + 1) && (f < c))						//要求C医生值班日不与ABF医生相同且A比C晚一天
//							for (d = sun; d <= sat; d++)					//逐个检查D医生星期几符合条件
//								if ((d != a) && (d != b) && (d != c) && (d != f) && (c == d + 3))			//要求D医生值班日不与ABCF医生相同，C在D3天之后
//									for (e = sun; e <= sat; e++)				//逐个检查E医生星期几符合条件
//										if ((e != a) && (e != b) && (e != c) && (e != f) && (e != d) && (d == e + 2))
//											for (g = sun; g <= sat; g++)			//逐个检查G医生星期几符合条件
//												if ((g != a) && (g != b) && (g != c) && (g != f) && (g != d) && (g != e) && (g == b + 2))
//													for (loop = 0; loop < 7; loop++)
//													{
//														cout << "Doctor" << char(ch + loop) << ":";
//														switch (loop + 1)
//														{
//														case 1:day = weekday(a); break;		//将a强制转换为weekday类型，是A医生的值班日
//														case 2:day = weekday(b); break;
//														case 3:day = weekday(c); break;
//														case 4:day = weekday(d); break;
//														case 5:day = weekday(e); break;
//														case 6:day = weekday(f); break;
//														case 7:day = weekday(g);
//														}
//														switch (day)
//														{
//														case sun:cout << "Sunday" << endl; break;
//														case mon:cout << "Monday" << endl; break;
//														case tue:cout << "Tuesday" << endl; break;
//														case wed:cout << "Wednesday" << endl; break;
//														case thu:cout << "Thursday" << endl; break;
//														case fri:cout << "Friday" << endl; break;
//														case sat:cout << "Saturday" << endl; break;
//														}
//													}
//	return 0;
//}