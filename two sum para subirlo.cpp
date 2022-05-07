#include<iostream>
using namespace std;
int main()
{
    int array [7]={7,13,50,9,5,40,455};
    for(int a=0;a<7;a++)
    {
        cout<<array[a]<<",";
    }
    cout<<endl;
      cout<<"la suma de estos lugares es:"<<endl;
      cout<<array[2]+array[6];
      return 0;
}
