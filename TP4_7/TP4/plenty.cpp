#include "plenty.hpp"
#include <iostream>
using namespace std;


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



