#ifndef TABLEENTRY_H
#define TABLEENTRY_H

#include <string>
#include <ostream>

using namespace std;

template <typename V> 

class TableEntry {
    public:
        string key;
	V value;
    public:
	TableEntry();
	TableEntry(string key);
	TableEntry(string key,V value);
	friend bool operator==(const TableEntry<V> &te1,const TableEntry<V> &te2);
	friend bool operator!=(const TableEntry<V> &te1,const TableEntry<V> &te2);
	friend std::ostream& operator<<(std::ostream &out,const TableEntry<V> &te);

        };

#endif
