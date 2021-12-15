//
// Created by 91998 on 15-12-2021.
//

#include <iostream>
using namespace std;
int main(){
    long long int sum = 0;
    for (long int i = 2; i < 101; ++i) {
        sum += i*i*(i-1);
    }
    cout << sum;
    return 0;
}

