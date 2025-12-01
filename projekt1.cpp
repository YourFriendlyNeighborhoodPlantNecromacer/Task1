#include <iostream>

bool czy_pierwsza(int n){
	for(int i=2; i<=n/2; i++){
		if(n%i==0){
			return false'
		}
	}

	return true;
}

int main(){
	std::cout << "Jaką liczbę chcesz sprawdzić?" << std::endl;
	int n;
	std::cin >> n;
	if(czy_pierwsza(n)){
		std::cout << "Jest pierwsza!" << std::endl;
	} else { 
		std::cout << "Nie jest pierwsza!" << std::endl;
	}

}
