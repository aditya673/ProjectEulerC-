//
// Created by 91998 on 15-12-2021.
//

#include <iostream>

using namespace std;

long int gcd(long  m, long int n){
    if(n == 0){
        return m;
    }
    else{
        return gcd(n,m%n);
    }
}

long int lcm(long int m,long int n){
    long int a = (m*n)/gcd(m,n);
    return a;
}

int main(){
    long int a = 1;
    for (int i = 1; i < 21; ++i) {
        if (a%i){
            a = lcm(a,i);
        }
    }
    cout<<a<<endl;
    return 0;
}

