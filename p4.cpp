//
// Created by 91998 on 15-12-2021.
//

#include <iostream>
#include <math.h>

using namespace std;

int nthdig(int n,int k){
    if (k == 1){return n%10;}
    if (k == 2){
        int a = n/10;
        return a%10;
    }
    int a = n/(pow(10,k-1));
    int r = a%10;
    return r;
}

int nodig(int n){
    int i = 1;
    if (n/10){
        return 1 + nodig(n/10);
    }
    else{
        return 1;
    }
}

bool ispal(int n){
    // first find the number of digits in n
    // then just check the ith digit and n-i th digit
    // i th digit is n/10**(i-2)%10
    for (int i = 1; i < nodig(n); ++i) {
        if(nthdig(n,i) != nthdig(n, nodig(n)+1-i)){
            return false;
        }
    }
    return true;
}

int main(){
    int max1= 0;
    for (int i = 100; i < 1000; ++i) {
        for (int j = 100; j < 1000; ++j) {
            if(ispal(i*j)){
                max1 = max(max1,i*j);
            }
        }
    }
    cout<<max1<<endl;
    cout<<nthdig(9009,4)<<endl;
    cout<<nodig(9009)<<endl;
    return 0;
}

