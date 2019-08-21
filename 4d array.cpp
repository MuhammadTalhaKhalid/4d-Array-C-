#include<iostream>
#define Count 2
using namespace std;
int array[2][2][2][2]={ { { {1,2},{3,4} } , { {5,6},{7,8} } }, { { {9,10},{11,12} } , { {13,14},{15,16} } }};

int main() {
system("echo off");
system("cls");

cout<<array[0][0][0][0]<<"\t";
cout<<array[0][0][0][1]<<"\t";
cout<<array[0][0][1][0]<<"\t";
cout<<array[0][0][1][1]<<"\t";
cout<<array[0][1][0][0]<<"\t";
cout<<array[0][1][0][1]<<"\t";
cout<<array[0][1][1][0]<<"\t";
cout<<array[0][1][1][1]<<"\t";
cout<<array[1][0][0][0]<<"\t";
cout<<array[1][0][0][1]<<"\t";
cout<<array[1][0][1][0]<<"\t";
cout<<array[1][0][1][1]<<"\t";
cout<<array[1][1][0][0]<<"\t";
cout<<array[1][1][0][1]<<"\t";
cout<<array[1][1][1][0]<<"\t";
cout<<array[1][1][1][1]<<"\t";
return 0;	

}
