#include <iostream>
#include <string>
#include "clsMyString.h"
using namespace std;







int main() {



	clsMyString S1; 
	
	S1.Value="ail";
	cout<< S1.Value<<endl;
	S1.Value = "mohemd";
	cout << S1.Value << endl;

	S1.Undo();
	cout << S1.Value << endl;



	S1.Undo();
	cout << "emptey " << S1.Value << endl;



	S1.Redo();
	S1.Redo();
	cout  <<" undo : " << S1.Value << endl;


	system("pause>0");
	return 0;
}