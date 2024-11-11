#include <iostream>
#include <string>

#ifndef VECTOR_H
#define VECTOR_H

#endif //VECTOR_H

template<class T>
class Vector {
public:
    Vector() {
        maxItems = 10;
        array = new T[maxItems];
        numItems = 0;
    }

    ~Vector() {
        delete[] array;
    }

    void push_back(T item) {

        if (numItems == maxItems) {
            reallocate();
        }

        array[numItems] = item;
        numItems++;
    }

    void insert(T item, int position) {

        if (numItems == maxItems) {
            reallocate();
        }

        for (int i = numItems; i > position; i--) {
            array[i] = array[i-1];
        }
        array[position] = item;
    }

    void remove(int position) {
        for (int i = position; i < (numItems-1); i++) {
            array[i] = array[i+1];
        }
        numItems--;
    }

    T& operator[](int index) {

        // check if it is in range

        return array[index];
    }

    void clear() {
        numItems = 0;
    }

    int size() const {
        return numItems;
    }

private:
    T *array;
    int numItems;
    int maxItems;

    void reallocate() {
        maxItems *= 2;
        T *arrayNuevo = new T[maxItems];
        for (int i = 0; i < numItems; i++) {
            arrayNuevo[i] = array[i];
        }
        delete[] array;
        array = arrayNuevo;

    }
};



