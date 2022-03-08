#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int i,j,k;
    i=10;
    do
    {

        do
        {
            j=1;
            k=i*j;
            cout<<k<<" ";
            j++;
        }
        while(j<=1);
        cout<<endl;
        i--;
    }while(i>=1);
    getch();
}
