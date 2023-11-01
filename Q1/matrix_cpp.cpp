#include <iostream>
#include <vector>

int main() {
	int rows, cols;
	std::cout << "행 수 입력 : ";
    	std::cin >> rows;
	
	std::cout << "열 수 입력 : ";
	std::cin >> cols;

	std::vector<std::vector<int>> matrix1(rows, std::vector<int>(cols));
	std::vector<std::vector<int>> matrix2(rows, std::vector<int>(cols));

	std::cout << "행렬 1 입력 : \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cin >> matrix1[i][j];
		}
	}
	   
	std::cout << "행렬 2 입력 : \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cin >> matrix2[i][j];
		}
	}
	
	std::vector<std::vector<int>> matrix_result(rows, std::vector<int>(cols));
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++){
			matrix_result[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}

 	std::cout << "행렬 1 : \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << matrix1[i][j] << ' ';
		}
		std::cout << '\n';
	}
	
	std::cout << "행렬 2 : \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << matrix2[i][j] << ' ';
		}
		
		std::cout << '\n';
	}
	
	
	std::cout << "행렬 1 + 행렬 2 : \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << matrix_result[i][j] << ' ';
		}
		        std::cout << '\n';
	}
	
	
	return 0;

}
