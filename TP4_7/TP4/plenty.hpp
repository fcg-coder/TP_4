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
    
    
    
    //Задание 2
    //Создать параметризированный класс «множество», перегрузить оператор* для
    //пересечения множеств, +для объединения множеств, < для сравнения множеств.
    
    
    //перегрузить оператор* для
    //пересечения множеств
    void operator*(const plenty& L) const{
        int size = this->size;
        for (int i = 0 ; i < size ; i++){
            bool flag = true;
            for (int j = 0 ; j < size ; j++){
                if (this->arr[i] == L.arr[j]){
                    if (flag == true){
                        cout << arr[i] << "["<<i<<"]\t";
                    }
                    flag = false;
                    
                }
            }
        }
    }

    // +для объединения множеств,
    void operator+(const plenty& L) const{
        for (int i = 0 ; i < this->size; i++){
            cout << this->arr[i] << "\t";
            cout <<  L.arr[i] << "\t";
        }
        cout << "\n";
    }
    
    //< для сравнения множеств.
    void operator<(const plenty& L) const{
        for (int i = 0 ; i < this->size; i++){
            if (this->arr[i] == L.arr[i]){
                cout << "T\t";
            }else{
                cout <<"F\t";
            }
        }
        cout << "\n";
    }
};
