//
//  main.cpp
//  TP4
//
//  Created by mak on 12.05.2023.
//

/*Вариант 1
Задание 1
Написать функцию-шаблон для инверсии массива. Размер массива и значения
задаются случайным образом (до 30).



Задание 2
Создать параметризованный стек. Начальный размер стека вводится с клавиатуры,
заполняется случайными значениями. Перегрузить оператор = для присваивания
двух стеков друг другу, + для сложения двух стеков, == для сравнения двух стеков, -
для вычитания стеков.*/



#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "plenty.cpp"
using namespace :: std;
int choose1;

/*Параметризованный класс (или шаблонный класс) в C++ - это класс, который может принимать типы данных в качестве параметров при создании экземпляра.*/



void TEST();

/*Задание 1
Написать функцию-шаблон для инверсии массива. Размер массива и значения
задаются случайным образом (до 30).*/
template <typename T1, int size1>

void search(T1 arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        T1 temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

void menu(){
    
    cout << "\n\nTask1/Task2\n";
    cin >> choose1;
}

void task1(){
    
    // Задание 1                                                                                                               Написать функцию-шаблон последовательного поиска в массиве по ключу. Функция возвращает индексы всех элементов, найденных в массиве, равных ключу. Размер массива и данные задаются пользователем.
    
    
    int size;
    size = rand() % 25 + 5;
    int * arr  = new int [30];
    double * arr1  = new double [30];
    string * arr2  = new string [30];
    

    for (int i = 0; i < size; i ++){
        arr[i] = rand() % 100;
        cout << arr[i] << "\t";
    }
    cout << "\n";
   
           
       
    // Вызов шаблонной функции с конкретными типами
    search<int, sizeof(size)>(arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    } 
    
    cout << "\n\n\n\n\n\n\n\n\n";
    for (int i = 0; i < size; i ++){
        arr1[i] = (double)rand() / 100;
        cout << arr1[i] << "\t";
    }
    cout << "\n";
           
       
    // Вызов шаблонной функции с конкретными типами
    search<double, sizeof(size)>(arr1, size);
    for (int i = 0; i < size; i++) {
        cout << arr1[i] << "\t";
    }
    

    cout << "\n\n\n\n\n\n\n\n\n";
    const std::string words[] = { "apple", "banana", "cherry", "orange", "pear",
    "kiwi", "strawberry", "mango", "pineapple",
    "grapefruit", "lemon", "lime", "peach",
    "plum", "blueberry", "raspberry",
    "blackberry", "watermelon",
    "apricot","avocado","coconut","fig",
    "guava","papaya","pomegranate","tangerine",
    "mulberry","persimmon","dragon fruit" };


    size = 8;
    for (int i = 0; i < size; ++i) {
        int index = rand() % sizeof(words) / sizeof(std::string); // случайный индекс слова в массиве
        arr2[i] = words[index];
        std::cout << arr2[i] <<"\t\t";
    }


    cout << "\n";


    search<string, 30>(arr2, size);

    for (int j = 0;j < size;j++)
    {
        std::cout << arr2[j] << "\t\t";
    }
    // Освободить выделенную память
    delete[] arr;
}

void task2(){
 
    list<int> A; // Создание пустого списка
    list<int> B; // Создание пустого списка
 
    for (int i = 0; i < 10; i++) {
        A.push(rand()%100);       
        B.push(rand() % 100);
    }
    cout << "INT###################################################\n";
    cout << "\n\n\nA->\t";
    A.out();
    cout << "\n\n\nB->\t";
    B.out();


    A == B;
   
    cout << "\n\n\nA + B->\t";
    A + B;
    A.out();
    cout << "\n\n\nA - B->\t";
    A - B;
    A.out();


    cout << "\n\n\nA = B->\t";
    A = B;
    A.out();
    cout << "\t";
    B.out();
 
 

    
    /*
    * Перегрузить оператор = для присваивания
двух стеков друг другу, +для сложения двух стеков, == для сравнения двух стеков, -
для вычитания стеков.
*/
    cout << "\n\n\n\n\ndouble################################################\n";
    list<double> C; // Создание пустого списка
    list<double> D; // Создание пустого списка
 
    for (int i = 0; i < 10; i++) {
        C.push((double)rand() / 100);
        D.push((double)rand() / 100);
    }

    cout << "\n\n\nC->\t";
    C.out();
    cout << "\n\n\nD->\t";
    D.out();

    C == D;

    cout << "\n\n\nC + D->\t";
    C + D;
    C.out();
    cout << "\n\n\nC - D->\t";
    C - D;
    C.out();


    cout << "\n\n\nA = B->\t";
    C = D;
    C.out();
    cout << "\t";
    D.out();
    /*
    * Перегрузить оператор = для присваивания
двух стеков друг другу, +для сложения двух стеков, == для сравнения двух стеков, -
для вычитания стеков.
*/


    cout << "\n\n\n\n\nstring################################################\n";
    const std::string words[] = { "apple", "banana", "cherry", "orange", "pear",
    "kiwi", "strawberry", "mango", "pineapple",
    "grapefruit", "lemon", "lime", "peach",
    "plum", "blueberry", "raspberry",
    "blackberry", "watermelon",
    "apricot","avocado","coconut","fig",
    "guava","papaya","pomegranate","tangerine",
    "mulberry","persimmon","dragon fruit" };
     list<string> E; // Создание пустого списка
    list<string> F; // Создание пустого списка
 
    for (int i = 0; i < 10; i++) {
        E.push(words[rand() % sizeof(words) / sizeof(std::string)]);
        F.push(words[rand() % sizeof(words) / sizeof(std::string)]);
    }

    cout << "\n\n\nE->\t";
    E.out();
    cout << "\n\n\nF->\t";
    F.out();


    E == F;

    /*
    * Перегрузить оператор = для присваивания
двух стеков друг другу, +для сложения двух стеков, == для сравнения двух стеков, -
для вычитания стеков.
*/
   
    
}

int main(int argc, const char * argv[]) {
//    srand(time(NULL));
    srand((unsigned int) time(NULL));

    bool WORK = true;
    
    
    menu();
    while (WORK){
        system("cls");
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


void TEST() {

}