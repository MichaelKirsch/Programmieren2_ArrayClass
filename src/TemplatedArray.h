

#pragma once
#include <stdexcept>
// class template:
template <class T,int N>
class TemplatedArray {
public:
    TemplatedArray();
    ~TemplatedArray();
    void set(T arg, int index);
    T& get(int index);
    void resize(int new_size);
    int getSize();
    T& getFirst();
    T& getLast();

private:
    int m_size=0;
    T* m_array_of_type;
};

template<class T, int N>
TemplatedArray<T, N>::TemplatedArray() {
    m_array_of_type = new T[N];
    m_size = N;
}

template<class T, int N>
TemplatedArray<T, N>::~TemplatedArray() {
    delete[] m_array_of_type;
}

template<class T, int N>
void TemplatedArray<T, N>::set(T arg, int index) {
    if(index>m_size)
        throw std::runtime_error("You tried to access outside of the array");
    m_array_of_type[index] = arg;
}

template<class T, int N>
T& TemplatedArray<T, N>::get(int index) {
    if(index>m_size)
        throw std::runtime_error("You tried to access outside of the array");
    return m_array_of_type[index];
}

template<class T, int N>
void TemplatedArray<T, N>::resize(int new_size) {
    if(new_size<m_size)
        throw std::runtime_error("You cant shrink this array mate");

    T* buffer = new T[m_size];
    for(int x =0;x<m_size;x++)
    {
        buffer[x] = m_array_of_type[x];
    }
    delete [] m_array_of_type;
    m_array_of_type = new T[new_size];
    for(int x=0;x<m_size;x++)
    {
        m_array_of_type[x] = buffer[x];
    }
    delete [] buffer;
    m_size = new_size;
}

template<class T, int N>
int TemplatedArray<T, N>::getSize() {
    return m_size;
}

template<class T, int N>
T& TemplatedArray<T, N>::getFirst() {
    return m_array_of_type[0];
}

template<class T, int N>
T &TemplatedArray<T, N>::getLast() {
    return m_array_of_type[m_size-1];
}



