#pragma once
#include <iostream>
using namespace std;



template <typename T>
class plenty {
private:
    int size;
    T* arr;
public:
    plenty(int _size, int choose);
    void print();

    //!= проверка на неравенство множеств
    bool operator!=(const plenty& L) const;

    //!= проверка на равенство множеств
    bool operator==(const plenty& L) const;

    T& operator [] (int index);

};