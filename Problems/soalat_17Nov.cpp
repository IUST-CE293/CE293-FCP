#include <iostream>
using namespace std;

// int main()
// {
//     int n; cin >> n;
//     int sum = 0;

//     for( int i = 1 ; i < n ; i++)
//     {
//         int counter  = 0 ;
//         for (int j = 1 ; j <= i ; j++)
//         {
//             if ( i % j == 0)
//             {
//                 counter++;
//             }
//         }
//         if (counter == 2)
//         {
//             sum += i;
//         }
//     }
//     cout << sum;
// }
///////////////////////////////////////
// int main()
// {
//     int n; cin >> n;
//     for (int i = 2 ; i <= n ; i++)
//     {
//         int counter = 0;
//         while ( n % i == 0)
//         {
//             n /= i;
//             counter++;
//         }
//         if ( counter != 0)
//         cout << i <<":" <<counter <<endl;
//     }
// }
///////////////////////////////////////////////////////
// 1
// 1 2 1
// 1 2 3 2 1
// 1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         for (int k = i - 1; k >= 1; k--)
//         {
//             cout << k << " ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int m = 1 ; m <= n -i; m++)
//         {
//             cout <<"  ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         for (int k = i - 1; k >= 1; k--)
//         {
//             cout << k << " ";
//         }
//         cout << endl;
//     }
// }
////////////////////////////////////////////////////////
int main()
{
    int num;
    string amin = "";
    for ( int i = 1 ; i <=3 ; i++)
    {
        for (int j = 1 ; j <=3 ; j++)
        {
            cin >> num;
            if ( i == j)
            {
                amin += (to_string(num) + " ");
            }
        }
    }
    cout << "main ghotr : " << amin;
}
