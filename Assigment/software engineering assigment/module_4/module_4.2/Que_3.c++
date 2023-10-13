/* Write a program to find the multiplication values and the cubic values using 
inline function */
#include<iostream>
using namespace std;
inline int multy(int a, int b){
    return a*b;
}
inline int cube (int c){
    return c*c*c;
}
int main(){
    int a,b,c,multiplication;
    cout<<"enter number a & b for multiplicxation here :";
    cin>>a>>b;
    multiplication=multy(a,b);
    int cub;
    cout<<"multiplication is "<<multiplication<<endl;
    cout<<"enter number for cube here :";
    cin>>c;
    cub=cube(c);
    cout<<"cube is "<<cub;
    return 0;
}
