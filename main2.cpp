#include <iostream>

//Selection Sort

template <typename T>
void SelectionSort(T arr[], int n)
    {
        int i, j, min_idx; //счестчики
        for (i = 0; i < n-1; i++) // по одному передвигаем границы неотсортированной части массива
        {
            min_idx = i; // ищем минимальный элемент в неотсортированной части
            for (j = i+1; j < n; j++)
                if (arr[j] < arr[min_idx])
                    min_idx = j;
            if(min_idx!=i) //свапаем этот найденный минимальный элемент с нашим ым элементом
                std::swap(arr[min_idx], arr[i]);
        }
    }


int main() {
    srand (time(NULL)); // инициализируем рандом
    int i, n;           //переменные цикла, кол-во элементов массива
    std::cout << "put in n: " ; //Кол-во элементов массива
    std::cin >> n;

    int *arr = new int [n];
    //double arr[n];     // целевой массив

    for (i = 0; i < n; i++){ // вводим рандомные знаения в массив
        arr[i] = (rand()%n)+1;
        std::cout << arr[i];
        std::cout << " ";
    }
    std::cout << std::endl;

    SelectionSort(arr, n); //выполняем Selection sort

    for (int i = 0; i < n; ++i) //принтим конечный результат
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    delete [] arr;

    return 0;
}
