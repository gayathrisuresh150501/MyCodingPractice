#include<iostream>
using namespace std;

int main()
{
    int N, flag = 1;
    cin >> N;
    for(int i = 2; i * i < N; i++)
    {
        if(N % i == 0)
        {
            flag = 0;
        }
    }
    if(flag == 0)
    {
        cout << "Not Prime";
    }
    else
    {
        cout << "Prime";
    }
    return 0;
}