#include <iostream>
#include <cstdlib>
#include <ctime>
void resize_arr(int*& arr,int length1,int length2=1) {
	int* tmp = new int[length2];
	for (int i = 0; i < length1; i++)
		tmp[i] = arr[i];
	delete[]arr;
	srand(time(NULL));
	for (int i = length1; i < length2; i++)
		tmp[i] = rand() % 21;
	arr = tmp;
}
int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	//Task 1.
	
	int size1=5,
		size2=5,
		size3=size1+size2;
	int* arr1 = new int[size1];
	int* arr2 = new int[size2];
	
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % 21;
		arr2[i] = rand() % (41 - 20) + 20;
	}
	int* arr3 = new int[size3];
	for (int i = 0; i < size1; i++)
		arr3[i] = arr1[i];
	for (int i = size1; i < size3; i++)
		arr3[i] = arr2[i - size1];
	std::cout << "Массив 1:\n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i]<<' ';
	delete[]arr1;
	std::cout << std::endl;
	std::cout << "Массив 2:\n";
	for (int i = 0; i < size2; i++)
		std::cout << arr2[i] << ' ';
	delete[]arr2;
	std::cout << std::endl;
	std::cout << "Массив 3:\n";
	for (int i = 0; i < size3; i++)
		std::cout << arr3[i] << ' ';
	std::cout << std::endl;
	delete[]arr3;
	
	//Task 2.
	int size = 10;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) 
		arr[i] = rand() % 21;
	std::cout << "\n\nИзначальный массив:\n";
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';
	resize_arr(arr, size, 15);
	std::cout << "Конечный массив:\n";
	for (int i = 0; i < 15; i++)
		std::cout << arr[i] << ' ';


	return 0;
}