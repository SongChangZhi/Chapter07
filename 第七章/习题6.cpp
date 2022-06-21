////编写一个函数creat,用来建立一个动态链表。
//#include<iostream>
//using namespace std;
//#define NULL 0
//struct student {
//	long num;
//	float score;
//	student* next;
//};
//	int n;
//	int main()
//	{
//		student* creat(void);
//		student* p=creat();
//		return 0;
//		cout << p->num<<p->score;
//	}
//	student* creat(void)
//	{
//		student* head;
//		student* p1, * p2;
//		n = 0;
//		p1 = p2 = new student;
//		cin >> p1->num >> p1->score;
//		head = NULL;
//		while (p1->num != 0)
//		{
//			n = n + 1;
//			if (n == 1)
//				head = p1;
//			else
//				p2->next = p1;
//			p2 = p1;
//			p1 = new student;
//			cin >> p1->num >> p1->score;
//		}
//		p2->next = NULL;
//		return(head);
//	}
//	
//	
