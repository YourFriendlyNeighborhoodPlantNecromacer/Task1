#include <iostream>

int silnia(int n){
	if(n==0){
		return 1;
	}
	return silnia(n-1) * n;
}


bool czy_pierwsza(int n){
	for(int i=2; i<=n/2; i++){
		if(n%i==0){
			return false'
		}
	}
	return true;
}

int main(){
	int k=-1;
	while(k!=0||k!=1){
		std::cout << "[1] Licz silnie\n[0] Czy pierwsza"<<std::endl;
		std::cin >> k;
	int n;
	std::cin >> n;
	if(k==0){
		if(czy_pierwsza(n)){
			std::cout << "Jest pierwsza!" << std::endl;
		} else { 
			std::cout << "Nie jest pierwsza!" << std::endl;
		}
	} else {
		std::cout<< silnia(n) <<std::endl;
	}
}
