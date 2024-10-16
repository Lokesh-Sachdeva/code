// area of circle,triagle and square 
#include <iostream>
#include <cmath>
using namespace std;

double area(double radius){
    return 3.14*radius*radius;
}

double area(double side1,double side2){
    return side1*side2;
}

double area(double side1,double side2 , double side3){
    int s= (side1 +side2 +side3)/2;
    return sqrt(s*(s-side1)*(s-side2)*(s-side3));
}
int main(){
    double radius,side_1,side_2,side1,side2,side3;
    
    cout<<"Enter the radius of circle: ";
    cin>>radius;
    cout<<"area of the circle: "<<area(radius)<<endl;

    cout<<"Enter all 3 sides of the triangle :";
    cin>>side1>>side2>>side3;
    cout<<"Area of triangle:"<<area(side1,side2,side3)<<endl;

    cout<<"enter the sides of the rectangle:";
    cin>>side_1>>side_2;
    cout<<"area of rectangle:"<<area(side_1,side_2)<<endl;
    return 0;
    
}
