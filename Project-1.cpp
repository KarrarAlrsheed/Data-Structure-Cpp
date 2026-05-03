#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include "clsDblLinkedList.h"
using namespace std;


int main() {




	clsDblLinkedList <int> LinkList;

	LinkList.InsertAtBeginning(4);
	LinkList.InsertAtBeginning(2);
	LinkList.InsertAtBeginning(4);
	LinkList.InsertAtBeginning(0);
	LinkList.InsertAfter(1,10);
	LinkList.PrintList();





	system("pause>0");
	return 0;
}