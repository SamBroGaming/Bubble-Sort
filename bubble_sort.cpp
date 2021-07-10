#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

void bubble_sort(std::vector<int>& arr);
std::vector<int> vector_print(std::vector<int>& arr);

int main() {
    srand((unsigned) time(0));
    int rand1 = rand() % 25 + 1;
    std::vector<int> vector_1;
    for (int i = 0; i < rand1; i++) {
        vector_1.push_back(rand());
    }
    for (auto i = vector_1.cbegin(); i != vector_1.cend(); ++i) 
        std::cout << *i << " ";
    std::cout << std::endl;
    bubble_sort(vector_1);
    for (auto i = vector_1.cbegin(); i != vector_1.cend(); ++i) 
        std::cout << *i << " "; 
}

void bubble_sort(std::vector<int>& arr) {
    for (int i = arr.size() - 1; i > 0; i--) {
        for (int j = 0; j < arr.size() - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}
