//AADITYA PARIHAR
//23070123001
#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<=10;i++)
    {
        if(i==1||i==3||i==5||i==7||i==9)
        {
            continue;
        }
        cout<<i<<endl;
    }
}

/* OUTPUT: 
0
2
4
6
8
10
*/
