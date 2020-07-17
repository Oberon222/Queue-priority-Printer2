#pragma once
#include<iostream>
#include<string>

using namespace std;

class Document
{
	string name;
	int size;
	int priority;
public:

	Document()
	{
		name = " ";
		size = 0;
		priority = 0;
	}

	Document(string name, int size, int priority) : name(name), size(size), priority(priority)
	{ }

	string GetNeme()
	{
		return this->name;

	}

	int GetSize()
	{
		return this->size;
	}

	int GetPriority()
	{
		return this->priority;
	}

	void ShowDocument()const
	{
		cout << "Document name: " << name << endl;
		cout << "Document size: " << size << endl;
		cout << "Document priority: " << priority << endl;
	}
};
