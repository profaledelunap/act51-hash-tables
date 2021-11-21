// =================================================================
//
// File: HashTable.h
// Author:
// Date:
//
// =================================================================
#include <vector>
#include <iostream>
#include "LinkedList.h"
using namespace std;

/*
* Definition of the HashTable class
*/
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

/*
* Constructor. Initializes the HashTable.
*
* @param max, size of the table.
*/
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

/*
* Erases the element with the given key value from the HashTable.
*
* @param key, key to be erased.
*/
template <class KeyType, class ValueType>
void HashTable<KeyType, ValueType>::erase(KeyType key)
{
}

/*
* Returns the value associated to a certain key.
*
* @param key, key assocaited to a certain value.
*/
template <class KeyType, class ValueType>
ValueType HashTable<KeyType, ValueType>::get(KeyType key)
{
}

/*
* Returns the number of elements in the HashTable.
*
*/
template <class KeyType, class ValueType>
int HashTable<KeyType, ValueType>::getSize()
{
}

/*
* Returns the string representation of the HashTable.
*
*/
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
