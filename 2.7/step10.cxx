
	#include <iostream>
	
	void swap_min(int *m[], unsigned rows, unsigned cols) {
		int minRow = 0, minCol = 0;
		for (int i = 0; i < rows ; i++ )
			for (int j = 0; j < cols ; j++ )
				if (m[i][j] < m[minRow][minCol]) {
					minRow = i;
					minCol = j;
				}

		if ( minRow != 0 ) {
			int *temp = m[0];
			m[0] = m[minRow];
			m[minRow] = temp;
		}        
	}

		
	int main() {
		
		srand(time(NULL));
		unsigned int rows = 1 + rand() % 10;
		unsigned int cols = 1 + rand() % 10;
		
		std::cout << "rows = " << rows << ", cols = " << cols << '\n';
		
		int ** matr = new int * [rows];
		if (matr == NULL) {
			std::cout << " Динамический массив НЕ создан!" << '\n';
			return 1;
		}
		
		for (size_t i = 0; i < rows; i++) {
			matr[i] = new int [cols];
			if (matr[i] == NULL) {
				std::cout << "Динамический массив НЕ создан!" << '\n';
				return 1;
			}
		}
		
		for (size_t i = 0; i < rows; i++) {
			for (size_t j = 0; j < cols; j++) {
				matr[i][j] = -50 + rand() % 99;
			}
		}
		
		std::cout << "До замены" << '\n';
		
		for (size_t i = 0; i < rows; i++) {
			for (size_t j = 0; j < cols; j++) {
				std::cout << matr[i][j] << '\t';
			}
			std::cout << '\n';
		}
		
		swap_min(matr, rows, cols);
		
		std::cout << "После замены" << '\n';
		
		for (size_t i = 0; i < rows; i++) {
			for (size_t j = 0; j < cols; j++) {
				std::cout << matr[i][j] << '\t';
			}
			std::cout << '\n';
		}		
		
		return 0;
	}
