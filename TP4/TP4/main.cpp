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
#include <random>
#include <time.h>
#include <stdlib.h>
#include "plenty.cpp"
using namespace :: std;
int choose1;

/*Параметризованный класс (или шаблонный класс) в C++ - это класс, который может принимать типы данных в качестве параметров при создании экземпляра.*/





template <typename T>
void search(T arr[], int sizeArr, T key) {
    for (int i = 0; i < sizeArr; i++) {
        if (arr[i] == key) {
            cout << "\nindex -> " << i << endl;
        }
    }
}



void task1() {

    int size;
    cout << "size of mass\t->";
    cin >> size;

    //////////////////////////

    int* arr = new int[size];
    double* arr1 = new double[size];
    string* arr2 = new string[size];





    ////////////////
    int key;
    cout << "\nint key\t->";
    cin >> key;

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10;
        cout << arr[i] << "\t";
    }

    // Вызов шаблонной функции с  типами
    search<int>(arr, size, key);

   
    //////////////////////////////////







//Для мака
    std::random_device rd;
       std::mt19937 gen(rd());
       std::uniform_real_distribution<double> dis(0.0, 1.0);

       double random_value = dis(gen);
    double key2;

    cout << "\n\n\ndouble key\t->";

    cin >> key2;


    // Генерация массива случайных чисел типа double
    for (int i = 0; i < size; i++) {
        arr1[i] = dis(gen);
        cout << arr1[i] << "\t";
    }

    // Вызов шаблонной функции с конкретными типами
    search<double>(arr1, size, key2);



///////////////////////

    // Заполнение массива случайными словами
    const std::string words[] = { "apple", "banana", "cherry", "orange", "pear",
       "kiwi", "strawberry", "mango", "pineapple"};

    string key3;
    cout << "\nKey\t->";
    cin >> key3;
    cout << "\n\n\nWOKABULAR\t->\n";
    for (int i = 0; i < size; ++i) {
        int index = rand() % sizeof(words) / sizeof(std::string); // случайный индекс слова в массиве
        arr2[i] = words[index];
        std::cout << arr2[i] << "\t";
    }

    // Вызов шаблонной функции с конкретными типами
    search<string>(arr2, sizeof(arr2), key3);

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
    
    int choose1 = 1;
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
