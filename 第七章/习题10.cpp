////�������ĸ��������һ���������������Ⱥ������Щ������ʵ������Ľ����������ɾ���Ͳ��롣����������ָ����Ҫ��ɾ���Ľڵ㡣
//#include<iostream>
//using namespace std;
//#define NULL 0
//struct student {
//	long num;
//	float score;
//	struct student* next;
//};
//int n;
//int main()
//{
//	student* creat(void);
//	student* del(student*, long);
//	student* insert(student*, student*);
//	void print(student*);
//	student* head, *stu;
//	long del_num;
//	cout << "��������Ϣ��" << endl;
//	head = creat();
//	print(head);
//	cout << endl << "��������Ҫɾ����ѧ�ţ�";
//	cin >> del_num;
//	while (del_num != 0)
//	{
//		head = del(head, del_num);
//		print(head);
//		cout << "��������Ҫɾ����ѧ�ţ�";
//		cin >> del_num;
//	}
//	cout << endl << "��������Ҫ�������Ϣ��";
//	stu = new student;
//	cin >> stu->num >> stu->score;
//	while (stu->num != 0)
//	{
//		head = insert(head, stu);
//		print(head);
//		cout << endl << "��������Ҫ�������Ϣ��";
//		stu = new student;
//		cin >> stu->num >> stu->score;
//	}
//	return 0;
//}
//student* creat(void)
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
//student* del(student* head, long num)
//{
//	student* p1, * p2;
//	if (head == NULL)
//	{
//		cout << "���������" << endl;
//		return(head);
//	}
//	p1=p2 = head;
//	while (num != p1->num && p1->next != NULL)
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
//		cout << "ɾ��:" << num << endl;
//		n = n - 1;
//	}
//	else cout << "�Ҳ����ڵ�" << num;
//	return(head);
//}
//student* insert(student* head, student* stud)
//{
//	student* p0, * p1, * p2;
//	p1=p2 = head;
//	p0 = stud;
//	if (head == NULL)
//	{
//		head = p0;
//		p0->next = NULL;
//	}
//	else
//	{
//		while ((p0->num > p1->num) && (p1->next != NULL))
//		{
//			p2 = p1;
//			p1 = p1->next;
//		}
//		if (p0->num <= p1->num)
//		{
//			if (head == p1)
//				head = p0;
//			else
//				p2->next = p0;
//			p0->next = p1;
//		}
//		else
//		{
//			p1->next = p0;
//			p0->next = NULL;
//		}
//	}
//	n = n + 1;
//	return(head);
//}
//void print(student* head)
//{
//	student* p;
//	cout << "��" << n << "������Ϊ��" << endl;
//	p = head;
//	if (head != NULL)
//		do
//		{
//			cout << p->num << "   " << p->score << endl;
//			p = p->next;
//		} while (p != NULL);
//}