//Напишите программу для решения квадратных уравнений вида a x^2 + b x + c = 0(относительно x). 
//На вход программа получает три целых числа: a , b и c, соответственно. При этом гарантируется, что a != 0.
//На вывод программа должна вывести два вещественных корня уравнения, разделённые пробелом.
//Если вещественных корней нет, то программа должна вывести строку "No real roots".
//Если у уравнения имеется только один корень (кратный корень), то программа должна вывести его дважды. 
//Порядок вывода корней не важен. Ничего, кроме этого, выводить не нужно. Для вычислений с плавающей точкой используйте тип double.
//При выполнении задания вам может оказаться полезной функция sqrt из заголовочного файла cmath.
//Курс Программирование на языке C++ (Степик. Александ Смаль, Михаил Кринкин) 
// Выполнила: Суркова Валерия П1-17.
//Дата: 23 апреля 2020 г.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    double D, x;
    cin >> a >> b >> c;
    D = b * b - 4 * a * c;
    if (D < 0)
        cout << "No real roots";
    else if (D == 0)
        cout << (-b / (2 * a)) << " " << (-b / (2 * a));
    else
    {
        x = (-b - sqrt(D)) / (2 * a);
        cout << x << " ";
        x =(-b + sqrt(D)) / (2 * a);
        cout << x;
    }
    return 0;
}
