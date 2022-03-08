#include<iostream>
#include<conio.h>

using namespace std;

void fungsi(int *b)
{
    cout<<"Nilai dari b  : "<<*b<<endl;
    cout<<"Alamat dari b : "<<b<<endl;//deferencing
}
void kuadrat(int *valptr)
{
    *valptr=(*valptr)*(*valptr);
}

int kuadrat(int value)
{
    return value*value;
}
main()
{
    int a=5;
    cout<<"Nilai dari a  : "<<a<<endl;
    cout<<"Alamat dari a : "<<&a<<endl;

    //fungsi(&a);//fungsi dengan input pointer
    kuadrat(&a);
    cout<<"Nilai a = "<<a<<endl;

}
