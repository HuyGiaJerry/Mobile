#include <bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	Node *Next;
};
struct List
{
	Node* pHead;
	Node* pTail;
};
void CreateList(List &l)
{
	l.pHead = NULL;
	l.pTail = NULL;
}
Node* makeNode(int x)
{
	Node* newNode = new Node;
	if( newNode == NULL){
		cout << "khong du bo nho!";
		return NULL;
	}
	else{
		newNode->data = x;
		newNode->Next = NULL;
	}
    return newNode;
}
//bool empty(List l)
//{
//	return (l.pHead = l.pTail = NULL);
//}
void insertFirst(List &l, int x)
{
	Node* newNode = makeNode(x);
	if( l.pHead == NULL)
		l.pHead = l.pTail = newNode;
	else{
		newNode->Next = l.pHead;
		l.pHead = newNode;
	}
}
void insertLast(List &l, int x)
{
	Node* newNode = makeNode(x);
	if( l.pTail == NULL)
	{
		l.pTail->Next = newNode;
		l.pTail = newNode;
	}
}
void insertMid(List &l, int x, int pos, int n)
{
	Node* newNode = makeNode(x);
	if( pos <= 0 || pos > n+1)
		cout << "Vi tri chen khong hop le!\n";
	if( n == 1)
	{
		insertFirst(l, x);
		return;
	}
	else if( n == pos + 1)
	{
		insertLast(l, x);
		return;
	}
	Node* p = l.pHead;
	for( int i = 1; i < pos - 1; i++)
	{
		p = p->Next;
	}
	newNode->Next = p->Next;
	p->Next = newNode;
}
void deleteFirst(List &l)
{
    Node *p = l.pHead;
	if( l.pHead == NULL)
		return;
	if(l.pHead == l.pTail)
		l.pHead = l.pTail = NULL;
	else{
        l.pHead = l.pHead->Next;
        delete p;
        
	}
}
void deleteLast(List &l)
{
    if(l.pHead == NULL)
        return;
    if(l.pHead == l.pTail)
		l.pHead = l.pTail = NULL;

	Node* p = l.pHead;
    while(p->Next != l.pTail)
    {
        p = p->Next;
    }
    delete l.pTail;
    l.pTail = p;
    p->Next = NULL;

}
void deleteMid(List &l, int pos, int n)
{
	if(pos < 0 || pos > n+1)
		cout << "Vi tri xoa khong hop le\n";
	Node* newNode = l.pHead;
	if( pos == 1)
		deleteFirst(l);
	else if( pos == n)
		deleteLast(l);
	else{
		Node* newNode = l.pHead;
		for(int i = 1; i< pos;i++)
		{
			newNode = newNode->Next;
		}
		Node* temp = newNode->Next;
		newNode->Next = temp;
	}
}
void Duyet(List l)
{
    if(l.pHead == NULL)
    {
        cout << endl << " DS RONG !";
        return;
    }
    
	Node* newNode = l.pHead;
	while(newNode->Next!=NULL)
	{
		cout << newNode->data << " " << endl;
		newNode = newNode->Next;
	}
}
int main()
{
	int x;
	List l;
    CreateList(l);
	int n = sizeof(l);
	int pos = 0;
	int choice;
	do{
		cout << "----------------MENU----------------\n";
		cout << "1.Chen vao dau danh sach.\n";
		cout << "2.Chen vao vi tri bat ki trong danh sach.\n";
		cout << "3.Chen vao cuoi danh sach.\n";
		cout << "4.Xoa phan tu dau danh sach.\n";
		cout << "5.Xoa phan tu bat ki trong danh sach.\n";
		cout << "6.Xoa phan tu cuoi cung trong danh sach.\n";
		cout << "7.Duyet danh sach.\n";
		cout << "0.Thoat chuong trinh.\n";
		cout << "------------------------------------\n";
		cout << "Nhap choice: ";
		cin >> choice;
		switch(choice){
			case 1:
				cout << "Nhap gia tri can chen: ";
				cin >> x;
				insertFirst(l, x);
				break;
			case 2:
				cout << "Nhap gia tri can chen: ";
				cin >> x;
				cout << "Nhap vi tri can chen: ";
				cin >> pos;
				insertMid(l, x, pos, n);
				break;
			case 3:
				cout << "Nhap gia tri can chen: ";
				cin >> x;
				insertLast(l, x);
				break;
			case 4:
				deleteFirst(l);
				break;
			case 5:
				cout << "Nhap vi tri can xoa: ";
				cin >> pos;
				deleteMid(l, pos, n);
				break;
			case 6:
				deleteLast(l);
				break;
			case 7:
				Duyet(l);
				break;
			case 0:
				cout << "Thoat chuong trinh.\n";
				break;
		}
	}while(choice != 0);
	return 0;
}