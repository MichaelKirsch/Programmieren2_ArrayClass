//
// Created by micha on 04.05.2020.
//

#include <stdexcept>
#include "array.h"

Array::Array() {

}

Array::Array(int sizeToreserve) {
    m_size = sizeToreserve;
    m_array = new int[sizeToreserve];
    dropData();
}

Array::~Array() {
    delete m_array;
}

int Array::get(int index) {
    if(index>m_size)
        throw std::runtime_error("Yo that array is not big enough. You searched outside of its scope");
    return m_array[index];
}

void Array::set(int index, int to_set) {
    if(index>m_size)
        throw std::runtime_error("Yo that array is not big enough. You tried to set outside of its scope");
    m_array[index]=to_set;
}

int Array::replace(int index, int to_set) {
    //replace old value, set new value, return old value
    int buffer = m_array[index];
    set(index,to_set);
    return buffer;
}

void Array::resize(int new_size) {
    //theory: we copy all the stuff out of the old array into a buffer, then make a new one and copy all the
    //Data into the new one, then delete the buffer
    if(new_size<m_size)
        throw std::runtime_error("You cant make the array smaller mate, sorry");
    int* buffer = new int[m_size];
    for(int x =0;x<m_size; x++)
        buffer[x] = m_array[x];
    delete m_array;
    m_array = new int[new_size];
    for(int x =0;x<new_size;x++)
        if(x<m_size)
            m_array[x] = buffer[x];
        else
            m_array[x] = 0;
    delete buffer;
    m_size = new_size;
}

int Array::getSize() {
    return m_size;
}

int Array::getFirst() {
    return m_array[0];
}

int Array::getLast() {
    return m_array[m_size-1];
}

void Array::dropData() {
    for(int x=0;x<m_size;x++)
        m_array[x]=0;
}
