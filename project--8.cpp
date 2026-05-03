
#include <iostream>
#include <string>
#include "clsQueueLine.h"
using namespace std;







int main() {


	clsQueueLine BillesLine("B0",10);
	BillesLine.PrintInfo(); 
	BillesLine.IssueTicket(); 
	BillesLine.IssueTicket();
	BillesLine.IssueTicket();
	BillesLine.IssueTicket();
	BillesLine.PrintTecketLineLTR();
	BillesLine.PrintTecketLineRTL();
	BillesLine.PrintAllTickets();
	system("pause>0");
	return 0;
}