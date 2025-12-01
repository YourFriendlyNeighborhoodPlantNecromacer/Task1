#include <iostream>

int silnia(int n){
	if(n==0){
		return 1;
	}
	return silnia(n-1) * n;
}

int main(){
	std::cout << "Jakiej liczby chcesz silnię?" << std::endl;
	int n;
	std::cin >> n;
	std::cout << silnia(n) << std::endl;
	return 0;
}
