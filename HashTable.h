#include <vector>
#include <iostream>
#include "LinkedList.h"
using namespace std;

template <class KeyType, class ValueType>
class HashTable
{
private:
	vector<LinkedList<KeyType, ValueType>> table;
	int storage;
	int size;

public:
	HashTable(int);
	void insert(KeyType, ValueType);
	void erase(KeyType);
	ValueType get(KeyType);
	int getSize();
	string toString();
};

template <class KeyType, class ValueType>
HashTable<KeyType, ValueType>::HashTable(int max)
{
	size = 0;
	storage = max;
	table.resize(max);
}

template <class KeyType, class ValueType>
void HashTable<KeyType, ValueType>::insert(KeyType key, ValueType value)
{
}

template <class KeyType, class ValueType>
void HashTable<KeyType, ValueType>::erase(KeyType key)
{
}

template <class KeyType, class ValueType>
ValueType HashTable<KeyType, ValueType>::get(KeyType key)
{
}

template <class KeyType, class ValueType>
int HashTable<KeyType, ValueType>::getSize()
{
}

template <class KeyType, class ValueType>
string HashTable<KeyType, ValueType>::toString()
{
	stringstream aux;
	Node<KeyType, ValueType> *p;

	for (int i = 0; i < storage; i++)
	{
		aux << table[i].toString() << endl;
	}

	return aux.str();
}
