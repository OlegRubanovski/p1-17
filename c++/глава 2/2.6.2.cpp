/*Реализуйте функцию getline, которая считывает поток ввода посимвольно, пока не достигнет конца потока или не встретит символ переноса строки ('\n'), и возвращает C-style строку с прочитанными символами. */
/*Величко П1-17*/
/*https://stepik.org/lesson/542/step/10?unit=865*/
#include <iostream>
 
char *getline()
{
    const int BUF_LEN = 50; 
    int len = BUF_LEN;
    int i = 0;
    char * str=(char*)malloc(BUF_LEN*sizeof(char)), c;  
    while(std::cin.get(c) && c!='\n') {
        if(i==len) 
            str=(char*)realloc(str, len += BUF_LEN);
        str[i++] = c;       
    }
    char * rez = new char[i+1];
    for(int j = 0; j < i; ++j)
        rez[j] = str[j];
    rez[i] = 0;
    free(str);
    return rez;
}
