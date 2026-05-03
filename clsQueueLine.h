#pragma warning(disable : 4996)
#pragma once

#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include "clsDate.h"

using namespace std;

class clsQueueLine
{
private:
short _totalTickets=0; 
 short _AverageServeTime =0;
string _Prefix="";


class clsTicket { //nested class 
private: 
short _Number=0; 
string _Prefix; 
string _TicketTime; 
short _WaitingTime =0 ; 
short _WaitingClients = 0;
short _AverageServeTime = 0;
short _ExpectedSeriveTime=0; 

public: 
	clsTicket(string Prefix, short Number, short WaitingTime, short AveragSeriveTime)
	{
		_TicketTime =clsDate::GetSystemDateTimeString();
		_Prefix= Prefix;
		_Number= Number;
		_WaitingTime=WaitingTime;
		_AverageServeTime = AveragSeriveTime;
	}

	string Prefix(){
	return _Prefix;
	}
	short Number (){
	return _Number;
	}
	string FullNumber(){
		return _Prefix + to_string(_Number);
	
	}
	string TicketTime(){
	return _TicketTime;
	}
	short WaitingClients() {
	return _WaitingClients;
	}
	short ExpectedSerivTime() {
	return _ExpectedSeriveTime;
	}
	void Print (){
	
	
	
			cout << "\n\t\t\t  _______________________\n";
			cout << "\n\t\t\t\t    " << FullNumber();
			cout << "\n\n\t\t\t    " << _TicketTime;
			cout << "\n\t\t\t    Wating Clients = " << _WaitingClients;
			cout << "\n\t\t\t      Serve Time In";
			cout << "\n\t\t\t       " << ExpectedSerivTime() << " Minutes.";
			cout << "\n\t\t\t  _______________________\n";


	
	}

};

public: 
queue <clsTicket> Line ; 
	clsQueueLine(string Prefix ,short AverageServeTime )
	{
		_Prefix= Prefix;
        _AverageServeTime= AverageServeTime;
		_totalTickets = 0;
	}
	
	void IssueTicket()
	{
		_totalTickets++;
		clsTicket Tic(_Prefix, _totalTickets, WaitingClients(), _AverageServeTime) ;
		Line.push(Tic);

	}
	int WaitingClients()
	{
		return Line.size();

	}
	string WhoIsNext(){
	
	if(Line.empty())
	{cout<< "No Clients" ;}
	else {
	return Line.front().FullNumber(); 

	}

	}
	bool SeriveNextClient()
	{
		if (Line.empty())
	     return false;
		else
		{
			Line.pop(); 
			return true ; 
		}
	}
	short SerivedClients(){
	
	
	return _totalTickets- WaitingClients(); 

	
	}
	void PrintInfo(){
	
		cout << "\n\t\t\t _________________________\n";
		cout << "\n\t\t\t\tQueue Info";
		cout << "\n\t\t\t _________________________\n";
		cout << "\n\t\t\t    Prefix   = " << _Prefix;
		cout << "\n\t\t\t    Total Tickets   = " << _totalTickets;
		cout << "\n\t\t\t    Served Clients  = " << SerivedClients();
		cout << "\n\t\t\t    Wating Clients  = " << WaitingClients(); ;
		cout << "\n\t\t\t _________________________\n";
		cout << "\n";
	
	}

	void PrintTecketLineRTL(){


		if (Line.empty())
			cout << "\n\t\tTickets: No Tickets.";
		else
			cout << "\n\t\tTickets: ";


		queue <clsTicket>temp = Line;
		while (!temp.empty())
		{
			cout << " " << temp.front().FullNumber() << " --> ";
			temp.pop();


		}


	}

	void PrintTecketLineLTR() {
	

		if (Line.empty())
			cout << "\n\t\tTickets: No Tickets.";
		else
			cout << "\n\t\tTickets: ";


		queue <clsTicket>tempQueue = Line;
		stack <clsTicket>tempStack;
		while (!tempQueue.empty())
		{
			tempStack.push(tempQueue.front());
			tempQueue.pop();


		}
		while (!tempStack.empty())
		{
			cout << " " << tempStack.top().FullNumber() << " <-- ";
			tempStack.pop();


		}
		cout << "\n";
	}
    void PrintAllTickets(){
	
	
		cout << "\n\n\t\t\t       ---Tickets---";

		if (Line.empty())
			cout << "\n\n\t\t\t     ---No Tickets---\n";
		queue <clsTicket>temp = Line;

		while (!temp.empty())
		{
			temp.front().Print();
			temp.pop();


		}
	
	
	
	}
};


