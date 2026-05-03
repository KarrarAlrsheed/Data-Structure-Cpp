#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include "clsDynamicArray.h"
using namespace std;







int main() {

	clsDynamicArray  <int> array(3);

	array.SetItem(0,1);
	array.SetItem(1, 2);
	array.SetItem(2, 3);


	array.print();

	array.InsertAtEnd(200);
    array.print();
	system("pause>0");
	return 0;
}