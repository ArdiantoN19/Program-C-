#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    for (int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cout<<"*";
            if(i==j)
            {
                break;
            }
        }cout<<endl;
    }
    for (int i=4;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<"*";
        }cout<<endl;
    }
    getch ();
}

