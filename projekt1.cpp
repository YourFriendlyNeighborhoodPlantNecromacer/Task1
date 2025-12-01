#include <iostream>

int silnia(int n){
	if(n==0){
		return 1;
	}
	return silnia(n-1) * n;
}
