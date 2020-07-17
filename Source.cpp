#include<iostream>
#include<string>
#include"Document.h"
#include"Queu Priority.h"
using namespace std;

int main()
{
	Document d1("Name1", 12, 1);
	Document d2("Name2", 17, 3);
	Document d3("Name3", 21, 2);
	Document d4("Name4", 30, 1);

	QueuePriority qp(5);

	qp.Add(d1,1);
	qp.Add(d2,3);
	qp.Add(d3,2);
	qp.Add(d4,1);
	qp.Show();

	cout << "-----------" << endl;

	qp.Extract();
	qp.Show();
	cout << "-----------" << endl;


	qp.Extract();
	qp.Show();

	cout << "-----------" << endl;

	qp.Extract();
	qp.Show();

	cout << "------------" << endl;

	qp.Extract();
	qp.Show();

	cout << "-------------" << endl;
	



	
	system("pause");
	return 0;
}