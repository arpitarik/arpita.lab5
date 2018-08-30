//using library
#include<iostream>
using namespace std;
//using main function
int main (){
//variable declaration
int a;
cout << "Enter a number" << endl;
cin >> a;
//condition
if (a > 0){
cout << a << " is the positive number. " << endl;
}
else if (a < 0){
cout << a << " is the negative number. " << endl;
}
else {
cout << a << " is zero. " << endl;
}
}
