#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << endl;

    int row = 1;

    char ch='A';

//output is independent of row and column
   

    while (row <= n)
    {
        int col = 1;
        
                

        while (col <= row)
        {
          
            cout << ch << " ";

            ch=ch+1;
           
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}