/*Реализуйте макрос MAX от трёх параметров, который присваивает целочисленной (int) переменной, переданной в качестве третьего аргумента, 
наибольшее из значений, переданных в первых двух аргументах.
Требования к реализации: вам нужно реализовать только макрос MAX. Функцию main и какие-либо другие функции реализовывать не нужно. 
Попробуйте решить эту задачу исключительно средствами макросов.
Выполнила : Озерова А.С. П1-17 23 апреля 2020
Источник : stepik, программирование на языке с++ Михаил Кринкин,1.8.4,https://stepik.org/lesson/13377/step/4?unit=3571
*/
#define MAX(x, y, r) {int x1 = (x), y1 = (y), r1 = (x1 > y1 ? x1 : y1); (r) = r1;}
