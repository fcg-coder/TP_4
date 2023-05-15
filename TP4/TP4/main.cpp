//
//  main.cpp
//  TP4
//
//  Created by mak on 12.05.2023.
//

/*Вариант 1
 Задание 1
 
 Написать функцию-шаблон последовательного поиска в массиве по ключу. Функция возвращает индексы всех элементов, найденных в массиве, равных ключу. Размер массива и данные задаются пользователем.
 
 
 
 Задание 2
 Создать параметризованный класс «множество» и перегрузить операторы !=
 проверка на неравенство множеств, == проверка на равенство множеств, [] для
 доступа по индексу.*/



#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "plenty.hpp"
using namespace std;
int choose1;

/*Параметризованный класс (или шаблонный класс) в C++ - это класс, который может принимать типы данных в качестве параметров при создании экземпляра.*/


//Тут тот же класс
//template <typename T>
//class plenty{
//private:
//    int size;
//    T * arr;
//public:
//
//    plenty(int _size, int choose) : size(_size), arr(new T[_size]) {
//        int R;
//        size = _size;
//
//        if (choose == 1){ // Тут рандомизируем
//            cout << "\nВерхняя граница рандома \n\t->";
//            cin >> R;
//            for (int i = 0; i < size ; i++){
//                arr[i] = rand() % R;
//                cout << "["<<i<<"]\t"<< arr[i]<<"\n";
//            }
//
//        }
//        else {//Тут вводим сами
//            cout << "Введите размер массивов\t->";
//            cin >> _size;
//            size = _size;
//            T* arr = new T[size];
//            for (int i = 0; i < size ; i++){
//                cout <<  "["<<i<<"]\t ->";
//                cin >> arr[i];
//                cout << "\n["<<i<<"]\t"<< arr[i]<<"\n";
//            }
//        }
//    };
//
//
//    void print(){
//        int _size = size;
//        for (int i = 0; i < _size ; i++){
//            cout << arr[i]<<"\t";
//
//        }
//        cout << endl;
//    }
//
//
//    //!= проверка на неравенство множеств
//    bool operator!=(const plenty& L) const {
//
//            for (int i = 0; i < size; i++) {
//                if (arr[i] != L.arr[i]) {
//                    cout << "Множества не совпадают\n";
//                    return true;
//                }
//            }
//            cout << "Множества совпадают\n";
//            return false;
//        }
//
//    //!= проверка на равенство множеств
//    bool operator==(const plenty& L) const {
//
//            for (int i = 0; i < size; i++) {
//                if (arr[i] != L.arr[i]) {
//                    cout << "Множества не совпадают\n";
//                    return false;
//                }
//            }
//            cout << "Множества совпадают\n";
//            return true;
//        }
//
//    T& operator [] (int index){
//        return this->arr[index];
//    }
//};
//



template <typename T1, int size1, typename T2>

void search(T1 arr[], int size, T2 key){
    for (int i = 0; i < size; i++){
        if (arr[i] == key) {
            cout << "Индекс -> "<< i<< endl;
        }
    }
}

void menu(){
    
    cout << "\n\nЗадание 1\n\tНаписать функцию-шаблон последовательного поиска в массиве по ключу. Функция возвращает индексы всех элементов, найденных в массиве, равных ключу. Размер массива и данные задаются пользователем.\n\nЗадание 2\n\tСоздать параметризованный класс «множество» и перегрузить операторы != проверка на неравенство множеств, == проверка на равенство множеств, [] для доступа по индексу\n3\tEXIT\n(1/2/3) ->";
    cin >> choose1;
}

void task1(){
    
    // Задание 1                                                                                                               Написать функцию-шаблон последовательного поиска в массиве по ключу. Функция возвращает индексы всех элементов, найденных в массиве, равных ключу. Размер массива и данные задаются пользователем.
    
    
    int size,key,choose2;
    cout << "Введите размер массива\t->";
    cin >> size;
    cout << "Рандомизируем его ?\t->";
    cin >> choose2;
    int * arr  = new int [size];
    cout << "Введите ключ\t->";
    cin >> key;
    
    switch (choose2) {
        case 1:
            cout << "\nВведите границу рандома\t->";
            int R;
            cin >> R;
            for (int i = 0; i < size; i ++){
                cout << "\n[" << i<< "]\t->";
                arr[i] = rand() % R;
                cout << arr[i] <<endl;
            }
            break;
        case 0:
            for (int i = 0; i < size; i ++){
                cout << "\n[" << i<< "]\t->";
                cin >> arr[i];
            }
            break;
            
        default:
            break;
    }
    // Вызов шаблонной функции с конкретными типами
    search<int, 10, int>(arr, size, key);

    // Освободить выделенную память
    delete[] arr;
}

void task2(){
    
    
    int size,choose2,choose3;
   
    cout <<"Рандомизируем массивы ? \n\t(0/1)->";
    cin >> choose2;
    cout << "Введите размер массивов\t->";
    cin >> size;
    plenty<int> A(size, choose2);
    plenty<int> B(size, choose2);
    cout << "\n\n";
    A.print();
    B.print();
    cout << "\n\n1)\t!= проверка на неравенство множеств\n2)\t== проверка на равенство множеств\n3)\t[] для доступа по индексу.\n4)EXIT\n\t(1/2/3/4)->";
    cin >> choose3;
    
    bool WORK = true;
    while (WORK){
        switch (choose3) {
            case 1:
                cout << "\n\n";
                A.print();
                B.print();
                A != B;
                cout << "\n\n1)\t!= проверка на неравенство множеств\n2)\t== проверка на равенство множеств\n3)\t[] для доступа по индексу.\n4)EXIT\n\t(1/2/3/4)->";
                cin >> choose3;
                break;
            case 2:
                cout << "\n\n";
                A.print();
                B.print();
                A == B;
                cout << "\n\n1)\t!= проверка на неравенство множеств\n2)\t== проверка на равенство множеств\n3)\t[] для доступа по индексу.\n4)EXIT\n\t(1/2/3/4)->";
                cin >> choose3;
                break;
            case 3:
                
                cout << "К какому элементу обращаемся ? (Индексация идет с 0) \n\t->";
                int index;
                cin >> index;
                cout << "\n\n";
                A.print();
                B.print();
                cout << "\n\n";
                cout << A[index] << endl;
                cout << B[index] << endl;
                cout << "\n\n1)\t!= проверка на неравенство множеств\n2)\t== проверка на равенство множеств\n3)\t[] для доступа по индексу.\n4)EXIT\n\t(1/2/3/4)->";
                cin >> choose3;
                break;
            case 4:
                WORK = false;
                break;
            default:
                break;
        }
    }
    
}

int main(int argc, const char * argv[]) {
//    srand(time(NULL));
    srand((unsigned int) time(NULL));

    bool WORK = true;
    
    
    menu();
    while (WORK){
        switch (choose1) {
            case 1:
                task1();
                menu();
                break;
            case 2:
                task2();
                menu();
                break;
            case 3:
                WORK = false;
                break;
                return 0;
            default:
                break;
        }
    }
    return 0;
}
