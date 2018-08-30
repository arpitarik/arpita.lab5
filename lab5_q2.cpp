//using librabry
#include<iostream>
using namespace std;
//using main function
int main (){
//variable declaration
int a,b,c;
cout << "Enter three numbers" << endl;
cin >> a >> b >> c;
//condition
 if((a > b) && (a > c)){
cout << a << "is the maximum number." << endl;
}
else if((b > a) && (b > c)){
cout << b << "is the maximum number." << endl;
}
 else{
cout << c << "is the maximum number." << endl;
}
}
 
