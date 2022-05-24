#include <iostream>
#include "Time.cpp"
using namespace std;


int main()
{
    
    /*
    Создать класс Time, будет включать в себя сек.мин.и часы
    Реализовать метод сложения двух объектов класса Time
    например 2:30:55  1:40:15
    итог: 4:11:10
    */
    
    Time t1(2, 30, 55);
    Time t2(1, 40, 15);
    Time t3 = t1.add(t2);

    t1.print();
    t2.print();
    t3.print();
}


