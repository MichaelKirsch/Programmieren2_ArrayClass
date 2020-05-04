#pragma once

class Array {
public:
    Array();
    Array(int sizeToreserve);
    ~Array();

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


