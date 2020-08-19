#include<iostream>
using namespace std;

int add(int a,int b){
    cout<<"Using Function with 2 argument"<<endl;
    return a+b;
}

int add(int a,int b, int c){
        cout<<"Using Function with 3 argument"<<endl;
    return a+b+c;
}

//Calculate the volume of a cylinder 
int volume(double r, int h){
    return(3.14 *r *r *h);
}
//Calculate the volume of a cube
int volume(int a){

    return (a* a* a);
}
//Calculate the volume of a cube
int volume(int l ,int b,int h){

    return (l*b*h);
}
int main(){
    cout<<"the sum of 3 and 5 is "<<add(3,5)<<endl;
    cout<<"the sum of 3, 5 and 9 is "<<add(3,5,9)<<endl;
    cout<<"the volume of cuboid of 3,7 and 6 is "<<volume(3,7,6)<<endl;
    cout<<"the volume of cylinder of  radius 3 and height 6 is "<<volume(3,6)<<endl;
    cout<<"the volume of cube of  side 3 is "<<volume(3)<<endl;
    return 0;
}