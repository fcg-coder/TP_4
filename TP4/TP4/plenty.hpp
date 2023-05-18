//
//  plenty.hpp
//  TP4
//
//  Created by mak on 15.05.2023.
//

#ifndef plenty_hpp
#define plenty_hpp

#include <stdio.h>

#include <iostream>
using namespace std;



template <typename T>
class plenty{
private:
    int size;
    T * arr;
public:
    plenty(int _size, int choose);
    void print();
    
    //!= проверка на неравенство множеств
    bool operator!=(const plenty& L) const;
    
    //!= проверка на равенство множеств
    bool operator==(const plenty& L) const;

    T& operator [] (int index);

};






//НЕ УДАЕТСЯ ПЕРЕНЕСТИ ОПРЕДЕЛЕНИЯ МЕТОДОВ КЛАССА В CPP ФАЙЛ!!!!!!!!!!!!!!!!!!!!!!!

template <typename T>
plenty<T> :: plenty(int _size, int choose) : size(_size), arr(new T[_size]) {
    int R;
    size = _size;
    
    if (choose == 1){ // Тут рандомизируем
        cout << "\nВерхняя граница рандома \n\t->";
        cin >> R;
        for (int i = 0; i < size ; i++){
            arr[i] = rand() % R;
            cout << "["<<i<<"]\t"<< arr[i]<<"\n";
        }
        
    }
    else {//Тут вводим сами
        cout << "Введите размер массивов\t->";
        cin >> _size;
        size = _size;
        T* arr = new T[size];
        for (int i = 0; i < size ; i++){
            cout <<  "["<<i<<"]\t ->";
            cin >> arr[i];
            cout << "\n["<<i<<"]\t"<< arr[i]<<"\n";
        }
    }
};

template <typename T>
void plenty<T>::print(){
    int _size = size;
    for (int i = 0; i < _size ; i++){
        cout << arr[i]<<"\t";
        
    }
    cout << endl;
}




template <typename T>
bool plenty<T>::operator!=(const plenty& L) const {
    for (int i = 0; i < size; i++) {
        if (this->arr[i] != L.arr[i]) {
            cout << "Множества не совпадают\n";
            return true;
        }
    }
    cout << "Множества совпадают\n";
    return false;
}



template <typename T>
bool plenty<T>::operator==(const plenty& L) const {
    for (int i = 0; i < size; i++) {
        if (this->arr[i] != L.arr[i]) {
            cout << "Множества не совпадают\n";
            return false;
        }
    }
    cout << "Множества совпадают\n";
    return true;
}


template <typename T>
T& plenty<T>:: operator [] (int index){
    return this->arr[index];
}



#endif /* plenty_hpp */
