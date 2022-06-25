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
//	int a, b, c, d, e, f, g;
//	f = thu;
//	for (a = sun; a <= sat; a++)								//根据条件逐个检查A医生星期几符合条件	
//		if(a!=f)												//要求A医生值班日不与F医生相同
//		for (b = sun; b <= sat; b++)							//逐个检查B医生星期几符合条件
//			if(a!=b)											//要求B医生值班日不与A医生相同
//			for (c = sun; c < sat; c++)							//逐个检查C医生星期几符合条件
//				if((c!=a)&&(c!=b)&&(c!=f))						//要求C医生值班日不与ABF医生相同
//				for (d = sun; d <= sat; d++)					//逐个检查D医生星期几符合条件
//					if((d!=a)&&(d!=b)&&(d!=c)&&(d!=f))			//要求D医生值班日不与ABCF医生相同
//					for (e = sun; e <= sat; e++)				//逐个检查E医生星期几符合条件
//						if ((e != a) && (e != b) && (e != c) && (e != f)&&(e!=d))
//						for (g = sun; g <= sat; g++)			//逐个检查G医生星期几符合条件
//							if ((g != a) && (g != b) && (g != c) && (g != f) && (g != d)&&(g!=e))
//							if ((a == c + 1) && (c == d + 3) && (d == e + 2) && (g == b + 2) && (f > b) && (f < c))
//								cout << a << "," << b << "," << c << "," << d << "," << e << "," << f << "," << g << endl;
//	return 0;
//}
////通过进行条件限制进行穷举法输出唯一结果