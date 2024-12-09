// Take 2 integers input and print the greatest of them.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 1st number = ";
    cin>>a;
    cout<<"Enter 2nd number = ";
    cin>>b;
    if(a>b){
        cout<<a<<" is greatest";
    }
    else{
        cout<<b<<" is greatest";
    }
}

//  Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.
#include<iostream>
using namespace std;
int main(){
    float r , a , c;
    cout<<"Enter Radius = ";
    cin>>r;
    a = 3.14*r*r;
    c = 2*3.14*r;
    if(a>c){
        cout<<"Area is greater than Circumference";
    }
    else{
        cout<<"Circumference is greater than Area";
    }
}

// Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 years)
#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"Enter year = ";
    cin>>y;
    if(y%4==0){
        if(y%100==0){
            if(y%400==0){
                cout<<"Leap Year";}
                else{
                    cout<<"Not a Leap Year";
                }
            }
            else{
                cout<<"Leap Year";
            }
        }
        else{
            cout<<"Not a Leap Year";
        }
    }


//Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.
#include<iostream>
using namespace std;
int main(){
    int l,b,a,p;
    cout<<"Enter length = ";
    cin>>l;
    cout<<"Enter breadth = ";
    cin>>b;
    a = l*b;
    p = 2*(l+b);
    if(a>p){
        cout<<"Area is Greatest than Perimeter";
    }
    else{
        cout<<"Perimeter is Greatest than Area";
    }

}



// Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st input = ";
    cin>>a;
    cout<<"Enter 2nd input = ";
    cin>>b;
    cout<<"Enter 3rd input = ";
    cin>>c;
    if(a==b && b==c && c==a){
        cout<<"Triangle is Equilateral";
    }
    else if(a!=b && b!=c && c!=a ){
        cout<<"Triangle is Scalene";
    }
    else if((a==b && b!=c) || (b==c && c!=a) ||(a==c && c!=b)){
        cout<<"Triangle is Isosceles";
    }
    }


//If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks. 
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter marks of STUDENT A = ";
    cin>>a;
    cout<<"Enter marks of STUDENT B = ";
    cin>>b;
    cout<<"Enter marks of STUDENT C = ";
    cin>>c;
    if(a<=b && a<=c){
        cout<<"A has least marks";
        }
    else if(b<=a && b<=c){
        cout<<"B has least marks";
    }
    else if(c<=a && c<=b){
        cout<<"B has least marks";
    }
}

// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0). 
#include<iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"Enter x coordinate = ";
    cin>>x;
    cout<<"Enter y coordinate = ";
    cin>>y;
    if(x==0 && y==0){
        cout<<"point lies at origin ";
    }
    else if(x!=0 && y==0){
        cout<<"point lies at 'x' origin ";
    }
    else if(x==0 && y!=0){
        cout<<"point lies at 'y' origin ";
    }
    else if(x!=0 && y!=0){
        cout<<"point lies on plane ";
    }
}


//Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line
#include<iostream>
using namespace std;
int main(){
    float x1,x2,x3,y1,y2,y3,m1,m2;
    cout<<"Enter x1 coordinate = ";
    cin>>x1;
    cout<<"Enter x2 coordinate = ";
    cin>>x2;
    cout<<"Enter x3 coordinate = ";
    cin>>x3;

    cout<<"Enter y1 coordinate = ";
    cin>>y1;
    cout<<"Enter y2 coordinate = ";
    cin>>y2;
    cout<<"Enter y3 coordinate = ";
    cin>>y3;

    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);

    if(m1=m2){
        cout<<"All 3 coordinates lie on same line ";
    }
    else{
        cout<<"all 3 coordinates do not lie on the same line";
    }
}

//Write a C++ program to input any character and check whether it is the alphabet, digit or special character.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter input = ";
    cin>>ch;
    int ascii = int(ch);
    if(ascii<=47){
        cout<<" Entered input is Speical Character";
        }
    else if(ascii>=48 && ascii<=57){
        cout<<" Entered input is Upper Case Alphabet";
    }
    else if(ascii>=58 && ascii<=64){
        cout<<" Entered input is Special Character";
    }
    else if(ascii>=65 && ascii<=90){
        cout<<" Entered input is Upper Case Alphabet";
    }
     else if(ascii>=97 && ascii<=122){
        cout<<" Entered input is Small Case Alphabet";
    }
    else if(ascii>=97 && ascii<=122){
        cout<<" Entered input is Upper Case Alphabet";
    }

}


//PREDICT THE OUTPUT

// int a = 500, b, c ; 
// if ( a >= 400 ) 
// b = 300 ; 
// c = 200 ; 
// cout << "value of b and c are respectively “ <<b<<” and ” << c  ; 
// 	return 0;
// }

//value of b and c are respectively 300 and 200