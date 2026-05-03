#pragma once
#include <iostream>
#include"clsMyQueueArr.h"
using namespace std;

template <class T> class clsMyStackArr :public  clsMyQueueArr<T>
{
public: 

void psuh (T Item )
{
	clsMyQueueArr<T>::InsertAtFront(Item);
}
T Tob()
{
return clsMyQueueArr <T>::front();
}

T Bottom()
{
	return clsMyQueueArr <T>::back();
}


};

