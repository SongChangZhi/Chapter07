////ҽԺ�ڿ���A,B,C,D,E,F,G��7λҽ����ÿ����һ����Ҫֵһ��ҹ�࣬�Ű�Ҫ���ǣ�
////��1��Aҽ��ֵ���ձ�Cҽ����һ�죻��2��Cҽ��ֵ���ձ�Dҽ����3�죻��3��Dҽ��ֵ���ձ�Eҽ����2�죻
////��4��Bҽ��ֵ���ձ�Gҽ�������죻��5��Fҽ��ֵ������Bҽ����Cҽ��ֵ����֮�䣬���������ģ�
////���д�������ÿλҽ����ֵ���ա�ֵ������Sunday��Monday��Tuesday��Wednesday��Thursday��Friday��Saturday
////�ֱ��ʾ�����յ�����������ʾ����ö�ٱ�����
//#include<iostream>
//using namespace std;
//int main()
//{
//	enum weekday { sun, mon, tue, wed, thu, fri, sat };			//����ö������weekday
//	enum weekday day;
//	int a, b, c, d, e, f, g, loop;
//	char ch = 'A';
//	f = thu;
//	for (a = sun; a <= sat; a++)								//��������������Aҽ�����ڼ���������	
//		if (a != f)												//Ҫ��Aҽ��ֵ���ղ���Fҽ����ͬ
//			for (b = sun; b <= sat; b++)							//������Bҽ�����ڼ���������
//				if ((a != b) && (f > b))											//Ҫ��Bҽ��ֵ���ղ���Aҽ����ͬ��F��B֮��
//					for (c = sun; c < sat; c++)							//������Cҽ�����ڼ���������
//						if ((c != a) && (c != b) && (c != f) && (a == c + 1) && (f < c))						//Ҫ��Cҽ��ֵ���ղ���ABFҽ����ͬ��A��C��һ��
//							for (d = sun; d <= sat; d++)					//������Dҽ�����ڼ���������
//								if ((d != a) && (d != b) && (d != c) && (d != f) && (c == d + 3))			//Ҫ��Dҽ��ֵ���ղ���ABCFҽ����ͬ��C��D3��֮��
//									for (e = sun; e <= sat; e++)				//������Eҽ�����ڼ���������
//										if ((e != a) && (e != b) && (e != c) && (e != f) && (e != d) && (d == e + 2))
//											for (g = sun; g <= sat; g++)			//������Gҽ�����ڼ���������
//												if ((g != a) && (g != b) && (g != c) && (g != f) && (g != d) && (g != e) && (g == b + 2))
//													for (loop = 0; loop < 7; loop++)
//													{
//														cout << "Doctor" << char(ch + loop) << ":";
//														switch (loop + 1)
//														{
//														case 1:day = weekday(a); break;		//��aǿ��ת��Ϊweekday���ͣ���Aҽ����ֵ����
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