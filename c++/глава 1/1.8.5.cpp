#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a, b, c;
    double x;
    cin >> a >> b >> c;
    double dis = b * b - 4 * a * c;
    if(dis < 0)
        cout << "No real roots";
    else if(dis == 0)
        cout << -b / (2 * a) << " " << -b / (2 * a);
    else{
        x = (-b - pow(dis,1.0/2))/(2 * a); 
        cout<< x <<" ";
        x = (-b + pow(dis,1.0/2))/(2 * a); 
        cout << x;
    }  
    return 0;
}
