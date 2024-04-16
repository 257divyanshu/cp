#include <iostream>
using namespace std;



// SOLID DIAMOND
//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
// int main()
// {
//     int m;
//     cout<<"Enter m: ";
//     cin>>m;
//     int n = (m-1)/2;
//     cout<<"n is "<<n<<endl;
//     for(int i = 0; i<n; i++)
//     {
//         for(int j = 0; j<n-i; j++)
//         {
//             cout<<" ";
//         };
//         for(int j = 0; j<=i; j++)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
//     for(int i = n; i>=0; i--)
//     {
//         for(int j = 0; j<n-i; j++)
//         {
//             cout<<" ";
//         };
//         for(int j = 0; j<=i; j++)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// HOLLOW DIAMOND
//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *
// int main()
// {
//     int m;
//     cout << "Enter m: ";
//     cin >> m;
//     int n = (m-1)/2;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << " ";
//         };
//         for (int j = 0; j <= i; j++)
//         {
//             if (i != 0)
//             {
//                 if (j == 0 || j == i)
//                 {
//                     cout << "* ";
//                 }
//                 else
//                 {
//                     cout << "  ";
//                 };
//             }
//             else
//             {
//                 cout<<"* ";
//             };
//         };
//         cout << endl;
//     };
//     for (int i = n; i >= 0; i--)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << " ";
//         };
//         for (int j = 0; j <= i; j++)
//         {
//             if (i != 0)
//             {
//                 if (j == 0 || j == i)
//                 {
//                     cout << "* ";
//                 }
//                 else
//                 {
//                     cout << "  ";
//                 };
//             }
//             else
//             {
//                 cout<<"* ";
//             };
//         };
//         cout << endl;
//     };
//     return 0;
// };

// SOLID HALF DIAMOND
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *
int main()
{
    int m;
    cout<<"Enter m : ";
    cin>>m;
    int n = (m-1)/2;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<=i; j++)
        {
            cout<<"* ";
        };
        cout<<endl;
    };
    for(int i = n; i>=0; i--)
    {
        for(int j = 0; j<=i; j++)
        {
            cout<<"* ";
        };
        cout<<endl;
    };
    return 0;
};


// HOLLOW FULL PYRAMID
//     *
//    * *
//   *   *
//  *     *
// * * * * *
// int main()
// {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << " ";
//         };
//         for (int j = 0; j <= i; j++)
//         {
//             if (i != 0 && i != n - 1)
//             {
//                 if (j == 0 || j == i)
//                 {
//                     cout << "* ";
//                 }
//                 else
//                 {
//                     cout << "  ";
//                 };
//             }
//             else
//             {
//                 cout<<"* ";
//             };
//         };
//         cout << endl;
//     };
//     return 0;
// };

// INVERTED FULL PYRAMID
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
// int main()
// {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for(int i = n; i>0; i--)
//     {
//         for(int j = 0; j<n-i; j++)
//         {
//             cout<<" ";
//         };
//         for(int j = 0; j<i; j++)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// FULL PYRAMID
//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// int main()
// {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for(int i = 0; i<n; i++)
//     {
//         for(int j = 0; j<n-i; j++)
//         {
//             cout<<" ";
//         };
//         for(int j = 0; j<=i; j++)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// HOLLOW INVERTED PYRAMID
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     for(int i = n; i>0; i--)
//     {
//         for(int j = 0; j<i; j++)
//         {
//             if(i==n || i==1)
//             {
//                 cout<<"* ";
//             }
//             else
//             {
//                 if(j==0 || j==i-1)
//                 {
//                     cout<<"* ";
//                 }
//                 else
//                 {
//                     cout<<"  ";
//                 }
//             };
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// HALF PYRAMID
// *
// * *
// * * *
// * * * *
// * * * * *
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     for(int i = 0; i<n; i++)
//     {
//         for(int j = 0; j<=i; j++)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// INVERTED HALF PYRAMID
// * * * * *
// * * * *
// * * *
// * *
// *
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     for(int i = n; i>0; i--)
//     {
//         for(int j = 0; j<i; j++)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// HOLLOW RECTANGLE
// for 5 cols and 3 rows
// * * * * *
// *       *
// * * * * *
// METHOD 1
// int main()
// {
//     int rows, cols;
//     cout << "Enter cols: ";
//     cin >> cols;
//     cout << "Enter rows: ";
//     cin >> rows;
//     cout<<"pattern: "<<endl;
//     for (int i = 0; i < cols; i++)
//     {
//         for (int j = 0; j < rows; j++)
//         {
//             if (i == 0 || i == cols - 1)
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 if(j==0 || j==rows-1)
//                 {
//                     cout<<"* ";
//                 }
//                 else
//                 {
//                     cout<<"  ";
//                 };
//             };
//         };
//         cout << endl;
//     };
//     return 0;
// };
// tc is O(n*m)
// METHOD 2
// int main()
// {
//     int rows, cols;
//     cout << "Enter cols: ";
//     cin >> rows;
//     cout << "Enter rows: ";
//     cin >> cols;
//     for (int i = 0; i < cols; i++)
//     {
//         cout << "* ";
//     };
//     cout << endl;
//     for(int i = 0; i<rows-2; i++)
//     {
//         cout<<"* ";
//         for(int j = 0; j<cols-2; j++)
//         {
//             cout<<"  ";
//         };
//         cout<<"* ";
//         cout<<endl;
//     };
//     if (cols != 1)
//     {
//         for (int i = 0; i < cols; i++)
//         {
//             cout << "* ";
//         };
//     }
//     // 1 -  1 0
//     // 2 -  2 0
//     // 3 -  2 1
//     // 4 -  2 2
//     // 5 -  2 3
//     return 0;
// };
// tc is O(n*m)

// SOLID RECTANGLE
// for 5 cols and 3 rows
// * * * * *
// * * * * *
// * * * * *
// int main()
// {
//     int length, breadth;
//     cout<<"Enter cols: ";
//     cin>>length;
//     cout<<"Enter rows: ";
//     cin>>breadth;
//     cout<<"pattern : "<<endl;
//     for(int i = 0; i<breadth; i++)
//     {
//         for(int j = 0; j<length; j++)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };