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
using namespace std;

template <typename T1, int size1, typename T2>
void search(T1 arr[], int size, T2 key){
    for (int i = 0; i < size; i++){
        if (arr[i] == key) {
            cout << "Индекс -> "<< i<< endl;
        }
    }
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

void task2(){}

int main(int argc, const char * argv[]) {
    srand(time(NULL));
    int choose1;
    
    cout << "Задание 1\n\tНаписать функцию-шаблон последовательного поиска в массиве по ключу. Функция возвращает индексы всех элементов, найденных в массиве, равных ключу. Размер массива и данные задаются пользователем.\n\nЗадание 2\n\tСоздать параметризованный класс «множество» и перегрузить операторы != проверка на неравенство множеств, == проверка на равенство множеств, [] для доступа по индексу\n(1/2) ->";
    cin >> choose1;
    
    switch (choose1) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
            
        default:
            break;
    }

    return 0;
}
