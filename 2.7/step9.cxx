	
	#include <iostream>
	
	int ** transpose(const int * const * m, unsigned rows, unsigned cols) {
		int ** tm;
		tm = new int *[rows];
		if (tm == NULL) { 
			std::cout << "Динамический массив НЕ создан!\n";
			exit(1);
		}
		
		for (size_t i = 0; i < rows; i++) {
			tm[i] = new int[cols];
			if (tm[i] == NULL) {
				std::cout << "Динамический массив НЕ создан!\n";
				exit(1);
			}
		}
		
		for (size_t i = 0; i < rows; i++)
			for (size_t j = 0; j < cols; j++)
				tm[j][i] = m[i][j];
		return tm;		
	}
	
	int main() {
		
		unsigned Mrows = 0;
		unsigned Mcols = 0;
		
		std::cout << "Введите количество строк - ";
			std::cin >> Mrows;
		std::cout << "Введите количество столбцов - ";
			std::cin >> Mcols;
		
		int ** matr = new int * [Mrows];
		if (matr == NULL) {
			std::cout << " Динамический массив НЕ создан!" << '\n';
			return 1;
		}
		
		for (size_t i = 0; i < Mrows; i++) {
			matr[i] = new int [Mcols];
			if (matr[i] == NULL) {
				std::cout << "Динамический массив НЕ создан!" << '\n';
				return 1;
			}
		
			for (size_t j = 0; j < Mcols; j++)
				if (i != j) matr[i][j] = i;
				else
				matr[i][j] = -1;
		}
		
		std::cout << "До транспонирования: " << '\n';
		
		for (size_t i = 0; i < Mrows; i++) {
			for (size_t j = 0; j < Mcols; j++) {
				std::cout << matr[i][j] << ' ';
			}
			std::cout << '\n';
		}
		
		int ** resmatr = transpose(matr, Mrows, Mcols);
		
		std::cout << "После транспонирования: " << '\n';
		
		for (size_t i = 0; i < Mrows; i++) {
			for (size_t j = 0; j < Mcols; j++) {
				std::cout << resmatr[j][i] << ' ';
			}
			std::cout << '\n';
		}		
			
		return 0;
	}



/*
 * 
 * #include <cstdlib>

template <class T>
T** CreateMatrix(size_t N, size_t M)
{
    T** matrix = new T* [N];

    matrix[0] = new T [N * M] {};

    for (size_t row = 1; row < N; ++row)
        matrix[row] = matrix[row - 1] + M;

    return matrix;
}

template <class T>
T** transpose(const T* const* matrix, size_t N, size_t M)
{
    const auto transposeMatrix = CreateMatrix<T>(M, N);

    for (size_t row = 0; row < M; ++row)
        for (size_t column = 0; column < N; ++column)
            transposeMatrix[row][column] = matrix[column][row];

    return transposeMatrix;
}
* */



