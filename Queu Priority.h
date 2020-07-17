#pragma once
#include<iostream>
#include<string>
#include"Document.h"
#include"Queue Statistics.h"

using namespace std;

class QueuePriority
{
protected:
	Document* Wait;
	int* Priorit;
	int maxQueueLength;
	int currentQueuLength;
	int currentQueuStatLength;

public:

	QueuePriority()
	{ }
	QueuePriority(int maxSizeQueue)
	{
		maxQueueLength = maxSizeQueue;
		Wait = new Document[maxQueueLength];
		Priorit = new int[maxQueueLength];
		currentQueuLength = 0;
		currentQueuStatLength = 0;
	}

	~ QueuePriority()
	{
		if (Wait != nullptr && Priorit != nullptr)
		{
			delete[]Wait;
			delete[]Priorit;
		}
	}

	void Add(Document newElem, int priorNewElem)
	{
		if (!IsFull())
		{
			Wait[currentQueuLength] = newElem;
			Priorit[currentQueuLength] = priorNewElem;
			currentQueuLength++;
		}
	}

	
	Document Extract()
	{
		if (!IsEmpty())
		{
			// нехай пр≥ор≥тетний елемент - нульовий
			int max_pri = Priorit[0];
			// а пр≥ор≥тетний ≥ндекс =0
			int pos_max_pri = 0;

			//шукЇмо пр≥ор≥тет 
			for (int i = 1; i < currentQueuLength; i++)
			{
				//€кщо зустр≥вс€ б≥льш пр≥ор≥тетний елемент
				if (max_pri < Priorit[i])
				{
					max_pri = Priorit[i];
					pos_max_pri = i;
				}
				// вит€гуЇмо пр≥ор≥тетний елемент
				Document tmp1 = Wait[pos_max_pri];
				int tmp2 = Priorit[pos_max_pri];

				// сдвигаЇмо вс≥ елементи
				for (int i = pos_max_pri; i < currentQueuLength - 1; i++)
				{
					Wait[i] = Wait[i + 1];
					Priorit[i] = Priorit[i + 1];
				}
				//зменшуЇмо загальну к≥льк≥сть елемент≥в у черз≥
				currentQueuLength--;

				
				// повертаЇмо вит€гнутий елемент
				return tmp1;
		
			}
		}
		/*else return -1;*/
	}

	void AddStat() // помилка
	{
		Document result = Extract();
		Wait[currentQueuStatLength] = result;
		currentQueuStatLength++; // 
	}

	void Clear()
	{
		currentQueuLength = 0;
	}

	bool IsEmpty()const
	{
		return currentQueuLength == 0;
	}

	bool IsFull()const
	{
		return currentQueuLength == maxQueueLength;
	}

	int GetCount()const
	{
		return currentQueuLength;
	}

	void Show()const
	{
		for (int i = 0; i < currentQueuLength; i++)
		{
			cout << Wait[i].GetNeme() << " - " << Priorit[i] << endl;
		}
	}
	
	void PrintStatictyc() const
	{
		for (int i = 0; i < currentQueuLength; i++)
		{
			cout << Wait[i].GetNeme() << endl;
		}
	}
};
