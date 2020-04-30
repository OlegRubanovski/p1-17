//Очень часто для работы со строками нам нужно сначала вычислить длину строки.
//Для C-style строк длина нигде явно не хранится, но её можно вычислить. 
//Напишите функцию, которая вычисляет длину C-style строки. Учтите, что завершающий нулевой символ считать не нужно.
//Требования к реализации: при выполнении этого задания вы можете создавать любые вспомогательные функции. 
//Вводить или выводить что-либо не нужно. Реализовывать функцию main не нужно.
//Курс Программирование на языке C++ (Степик. Александ Смаль, Михаил Кринкин) 
// Выполнила: Суркова Валерия П1-17.
//Дата: 28 апреля 2020 г.



unsigned strlen(const char *str)
{
    int a = 0;
    for(; *str != '\0'; str++)
        a++;
    return a;
}
