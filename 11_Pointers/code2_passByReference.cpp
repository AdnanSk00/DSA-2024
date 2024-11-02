// Pass By Reference :-
            // i) Using Pointers
           // ii) Using references (alias)

#include<iostream>
using namespace std;

// void changeA(int a){    // pass by value
void changeA(int* ptr){    // pass by reference using pointers
    *ptr = 20;
}

void changeA(int &a){      // pass by reference using alias
    a = 20;
}

int main(){
    int a = 10;
    // changeA(&a);
    changeA(a);

    cout << "Inside main fnx : " << a << endl;  // a = 20;

    return 0;
}