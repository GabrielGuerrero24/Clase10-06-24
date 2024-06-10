#include <iostream>
using namespace std;
int fact(int n);
int main()
{
    int n;
    cout << "Ingrese un numero entero:\n";
    cin >> n;

    cout << "El factorial de:" << n << fact(n) << "\n";

    return 0;
}
int fact(int n)
{
    int res;
    if (n == 0)
    {
        res = 1;
    }
    else
    {
        res = 1;
        for (int i = 0; i < n; i++)
        {
            res = res * i;
        }
    }
    return res; 
}