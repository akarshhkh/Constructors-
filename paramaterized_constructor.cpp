//akarsh khot
//23070123012
//Aim - to learn how to use the paramaterized contructor in cpp.

#include <iostream>
using namespace std;

class construct{
    int a,b;
    public:
construct(int m , int n){
    a = m;
    b = n;
}
void display(){
cout << "a ="<< a <<endl<< "b ="<<b;
}
};

int main() {
    construct construct(20,30);
    construct.display();
    
    return 0;
}

/*
OUTPUT
a =20
b =30
*/
