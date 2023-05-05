#include <iostream>

void imprime(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

void ordena(int* arr, int n) {
	int i, j, min, aux;

	for(i = 0; i < (n - 1); i++){
		min = i;
		for(j = i+1; j < n; j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}

		if(i != min){
			aux = arr[i];
			arr[i] = arr[min];
			arr[min] = aux;
		}
	}

	
}

int main() {

	int notas[] = {5, 3, 4, 10, 8, 7, 9};

	imprime(notas, 7);
	ordena(notas, 7);
	imprime(notas, 7);

	return 0;
}