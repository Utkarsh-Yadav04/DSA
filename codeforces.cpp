// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int a;
//     int b;
//     cin >> n >> a >> b;
//     int x;
//     int y;
//     x = a * n;
//     y = (b/2)*n;

//     if (n % 2 == 0 && x < y)
//     {
//         cout << a * n;
//     }

//     else if (n % 2 == 0 && x > y)
//     {
//         cout << b * (n / 2);
//     }

//     else if (n % 2 != 0 && x > y)
//     {
//         cout << (b * (n - 1) / 2) + a;
//     }
//     else
//     {
//         cout << a * n;
//     }
// }

#include <iostream>
using namespace std;

int main()
{
    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
            int n;
    int a;
    int b;
    cin >> n >> a >> b;
    int x;
    int y;
    x = a * n;
    y = (b/2)*n;

    if (n % 2 == 0 && x < y)
    {
        cout << a * n<<endl;
    }

    else if (n % 2 == 0 && x > y)
    {
        cout << b * (n / 2)<<endl;
    }

    else if (n % 2 != 0 && x > y)
    {
        cout << (b * (n - 1) / 2) + a<<endl;
    }
    else
    {
        cout << a * n<<endl;
    }
    }
}

// Git practice
//second change