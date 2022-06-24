////编写一个函数del，来删除动态链表中一个指定的节点（由实参指定某一学号，表示要删除该学生的节点。
//#include<iostream>
//using namespace std;
//#define NULL0;
//struct student
//{
//	long num;
//	float score;
//	struct student* next;
//};
//int n;
//student* del(student* head, long num)
//{
//	student* p1, *p2;
//	if (head == NULL)
//	{
//		cout << "错误的链表" << endl;
//		return(head);
//	}
//	p1 = head;
//	while (num != p1->num && p1 ->next != NULL)
//	{
//		p2 = p1;
//		p1 = p1->next;
//	}
//	if (num == p1->num)
//	{
//		if (p1 == head)
//			head = p1->next;
//		else
//			p2->next = p1->next;
//		cout << "删除:" << num << endl;
//		n = n - 1;
//	}
//	else cout << "找不到节点" << num;
//	return(head);
//}