// O(√n)

#include<iostream>
using namespace std;

int main(){         // T.complexity - O(√n)
    int n = 9;
    for(int i=2; i*i<=n; i++){      // i = 2 to √n
        if(n % i == 0){
            cout << "Not Prime";
            break;
        }
    }

    return 0;
}

// NOTE : H.W => Which is better ?
// O(√n) or O(n) ?  ans - O(√n)
// O(√n) or O(logn) ?   ans - O(logn)