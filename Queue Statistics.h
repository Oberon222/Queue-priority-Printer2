//#pragma once
//#include<iostream>
//#include<string>
//#include"Document.h"
//#include"Queu Priority.h"
//
//using namespace std;
//
//class StatisticDocument : public QueuePriority
//{
//	Document* WaitStatDocument;
//	int maxQueueStatLength;
//	int currentQueuStatLength;
//public:
//
//	StatisticDocument() { }
//	
//	StatisticDocument(int maxSizeStatQueue) 
//	{ 
//		maxQueueStatLength = maxSizeStatQueue;
//		WaitStatDocument = new Document[maxQueueStatLength];
//		currentQueuStatLength = 0;
//	}
//
//	~StatisticDocument()
//	{
//		if (WaitStatDocument != nullptr) delete[]WaitStatDocument;
//	}
//void AddStat()
//	{
//		Document result = Extract();
//		WaitStatDocument[currentQueuLength] = result;
//		currentQueuStatLength++;
//	}
//	
//
//
//
//	void PrintStat()const
//	{
//		for (int i = 0; i < currentQueuLength; i++)
//		{
//			cout << WaitStatDocument[i].GetNeme() << endl;
//		}
//	}
// };