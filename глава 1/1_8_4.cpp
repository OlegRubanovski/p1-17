/*
Простая задача на закрепления материала по работе с  вводом/выводом. Напишите программу, которая суммирует целые числа. На вход программе 
подаются целые числа в следующем формате: на первой строке идет целое число T, количество тестов, далее следует T строк, в каждой из 
которых через пробел идут два целых числа ai и bi
На выводе для каждой из T строк нужно вывести сумму ai + bi в том порядке, в котором пары поступают на вход. Ничего, кроме этого, выводить 
не нужно.
Выполнила : Озерова А.С. П1-17 23 апреля 2020
Источник : stepik, программирование на языке с++ Михаил Кринкин, 1.8.10, https://stepik.org/lesson/13377/step/10?unit=3571
*/
#include <iostream>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << a + b << endl;
    }
    return 0;
}
