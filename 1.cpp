#include <iostream>
using namespace std;
int a, b, i, ceva;
int main()
{   cout << "a= ";cin>>a;
    cout <<"b=";cin>>b;



    cout << "Numerele prime dintre " << a << " si " << b<< " sunt: ";

    while (a < b)
    {
        ceva = 0;

        for(i = 2; i <= a/2; ++i)
        {
            if(a% i == 0)
            {
                ceva = 1;
                break;
            }
        }

        if (ceva == 0)
            cout << a<< " ";

        ++a;
    }

    return 0;
}
