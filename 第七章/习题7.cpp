////编写一个函数print，将第6题建立的链表中各节点的数据依次输出。
//#include<iostream>
//using namespace std;
//#define NULL 0
//struct student {
//	long num;
//	float score;
//	student* next;
//};
//int n;
//int main()
//{
//	student* creat(void);
//	void print(student * head);
//	student* head = creat();
//	print(head);
//}
//student* creat(void)			//定义一个函数，此函数带回一个指向链表头的指针
//{
//	student* head;
//	student* p1, * p2;
//	n = 0;
//	p1 = p2 = new student;
//	cin >> p1->num >> p1->score;
//	head = NULL;
//	while (p1->num != 0)
//	{
//		n = n + 1;
//		if (n == 1)
//			head = p1;
//		else
//			p2->next = p1;
//		p2 = p1;
//		p1 = new student;
//		cin >> p1->num >> p1->score;
//	}
//	p2->next = NULL;
//	return(head);
//}
//void print(student* head)
//{
//	student* p;
//	cout << "这"<<n<<"个数据为：" << endl;
//	p = head;
//	if(head!=NULL)
//		do
//		{
//			cout << p->num << "   " << p -> score << endl;
//			p = p->next;
//		} while (p != NULL);
//}
