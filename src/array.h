#pragma once
#include <iostream>
class Array {
public:
    Array();
    Array(int sizeToreserve);
    Array(int size, int startValue);
    ~Array();
    Array(const Array& other);
    void operator ++(int);
    void operator --(int);
    void operator +=(const Array& other);
    void operator -=(const Array& other);
    Array operator +(const Array& other);
    Array operator -(const Array& other);
    void operator =(const Array& other) = delete;
    friend std::ostream & operator<<(std::ostream& os, const Array& dt);
    int get(int index);
    int replace(int index, int to_set);
    void set(int index, int to_set);
    void resize(int new_size);
    int getSize();
    int getFirst();
    int getLast();
    void dropData();
private:
    int* m_array;
    int m_size=0;
};


