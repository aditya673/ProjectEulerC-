#include <iostream>

using namespace std;

long fib(int n){
	    if (n == 0 || n == 1){
		            return n;
			        } else{
					        int a  = 0;
						        int b = 1;
							        int c;
								        for (int i = 2; i <= n; ++i) {
										            c = a+b;
											                a = b;
													            b = c;
														            }
									        return b;
										    }
}

int main(){
	    int MAX = 4000000;
	        long sum = 0;
		    int i = 0;
		        while (fib(i)%2 == 0 && fib(i)<= MAX){
				        sum += fib(i);
                        i +=3;
					    }
			    cout<<sum<<endl;
}



