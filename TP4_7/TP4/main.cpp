//
//  main.cpp
//  TP4
//
//  Created by mak on 12.05.2023.
//

//Задание 1
//Написать функцию - шаблон, которая ищет разницу между максимальным и
//минимальным элементом в неупорядоченном массиве.Размер массива и значения
//задаются случайным образом(от 50 до 100).
//Задание 2
//Создать параметризированный класс «множество», перегрузить оператор* для
//пересечения множеств, +для объединения множеств, < для сравнения множеств.

#include <iostream>
#include <random>
#include <time.h>
#include <stdlib.h>
#include "plenty.cpp"
using namespace :: std;
int choose1;
#include <clocale>
using namespace std;

/*Параметризованный класс (или шаблонный класс) в C++ - это класс, который может принимать типы данных в качестве параметров при создании экземпляра.*/





template <typename T>
void search(T arr[], int sizeArr) {
    
    T min = INT_MAX;
    T max = INT_MIN;
    for (int i = 0; i < sizeArr; i++) {
        if (arr[i] > max){
            max = arr[i];
            
        }
        if (arr[i] < min){
            min = arr[i];
        }
    }
    
    cout << "\nmax->\t"<<max << "\n";
    cout << "\nmin->\t"<<min << "\n";
    cout << "\nmax - min ->\t"<<max - min << "\n";
    
    
}



void task1() {

    int size;
    cout << "size of mass\t->";
    cin >> size;

    //////////////////////////

    int* arr = new int[size];
    double* arr1 = new double[size];





    ////////////////

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10;
        cout << arr[i] << "\t";
    }

    // Вызов шаблонной функции с  типами
    search<int>(arr, size);

   
    //////////////////////////////////







//Для мака
    std::random_device rd;
       std::mt19937 gen(rd());
       std::uniform_real_distribution<double> dis(0.0, 1.0);



    // Генерация массива случайных чисел типа double
    for (int i = 0; i < size; i++) {
        arr1[i] = dis(gen);
        cout << arr1[i] << "\t";
    }

    // Вызов шаблонной функции с конкретными типами
    search<double>(arr1, size);




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
    cout << "\n1)перегрузить оператор* для пересечения множеств,\n2) +для объединения множеств,\n3) < для сравнения множеств.";
    cin >> choose3;
    
    bool WORK = true;
    while (WORK){
        switch (choose3) {
            case 1:
                cout << "\n\n";
                A.print();
                B.print();
                A * B;
                cout << "\n1)перегрузить оператор* для пересечения множеств,\n2) +для объединения множеств,\n3) < для сравнения множеств.";
                cin >> choose3;
                break;
            case 2:
                cout << "\n\n";
                A.print();
                B.print();
                A + B;
                cout << "\n1)перегрузить оператор* для пересечения множеств,\n2) +для объединения множеств,\n3) < для сравнения множеств.";
                cin >> choose3;
                break;
            case 3:
                
                cout << "\n\n";
                A.print();
                B.print();
                A < B;
                cout << "\n1)перегрузить оператор* для пересечения множеств,\n2) +для объединения множеств,\n3) < для сравнения множеств.";
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
    srand(time(NULL));
    setlocale(LC_ALL,"ru_RU");
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


    bool WORK = true;
    
    choose1 = 1;
    cout << "Задание 1\n\tНаписать функцию-шаблон последовательного поиска в массиве по ключу. Функция возвращает индексы всех элементов, найденных в массиве, равных ключу. Размер массива и данные задаются пользователем.\n\nЗадание 2\n\tСоздать параметризованный класс «множество» и перегрузить операторы != проверка на неравенство множеств, == проверка на равенство множеств, [] для доступа по индексу\n3\tEXIT\n(1/2/3) ->";
    std::cin >> choose1;
    while (WORK == true){
        switch (choose1) {
            case 1:
                task1();
                cout << "\n\nЗадание 1\n\tНаписать функцию-шаблон последовательного поиска в массиве по ключу. Функция возвращает индексы всех элементов, найденных в массиве, равных ключу. Размер массива и данные задаются пользователем.\n\nЗадание 2\n\tСоздать параметризованный класс «множество» и перегрузить операторы != проверка на неравенство множеств, == проверка на равенство множеств, [] для доступа по индексу\n3\tEXIT\n(1/2/3) ->";
                std::cin >> choose1;
                break;
            case 2:
                task2();
                cout << "\n\nЗадание 1\n\tНаписать функцию-шаблон последовательного поиска в массиве по ключу. Функция возвращает индексы всех элементов, найденных в массиве, равных ключу. Размер массива и данные задаются пользователем.\n\nЗадание 2\n\tСоздать параметризованный класс «множество» и перегрузить операторы != проверка на неравенство множеств, == проверка на равенство множеств, [] для доступа по индексу\n3\tEXIT\n(1/2/3) ->";
                std::cin >> choose1;
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