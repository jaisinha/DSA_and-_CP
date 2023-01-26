#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int a=3;
    int *ptr1=&a;
    int **ptr2=&ptr1;
    cout<<**ptr2;
}