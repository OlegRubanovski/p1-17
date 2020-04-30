///Задание: Напишите функцию power, реализующую возведение целого числа в неотрицательную целую степень. 
///Функция power должна принимать на вход два целых числа и возвращать целое число (смотрите шаблон кода). 
///При выполнении задания учтите, что функция обязательно должна называться power, функция ничего не должна читать со входа или выводить.
///Требования к реализации: в этом задании вам нужно реализовать только функцию power. 
///Вы можете определять вспомогательные функции, если они вам нужны. Реализовывать функции main не нужно.
///Ограничения: библиотеку cmath (и math.h) использовать запрещено.
///Источник: Stepic Программирование на языке C++ https://stepik.org/7 от Computer Science Center(CS центр) 
///Глава 1, раздел 8, шаг 4.
///Выполнил: Юшаков Н. Р. 22.04.2020. https://stepik.org/lesson/13377/step/4

// определите только функцию power, где
//    x - число, которое нужно возвести в степень
//    p - степень, в которую нужно возвести x
//

int power(int x, unsigned p) {
    int answer = 1;
    if (p)
        for (int i = 0; i < p; i++)
            answer *= x;
    else
        return answer;
    return answer;
}
