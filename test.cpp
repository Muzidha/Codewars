#include <iostream>
#include <cassert>

void process_data(int* data, size_t size) {
    // Assertion 1: Ensure the data pointer is not null
    assert(data != nullptr && "Data pointer cannot be null");
    
    // Assertion 2: Ensure the size is positive
    assert(size > 0 && "Size must be positive");

    std::cout << "Processing data of size " << size << std::endl;
    // ... further processing ...
}

int main() {
    int arr[] = {1, 2, 3};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    // This call works correctly
    process_data(arr, n); 

    // This call will trigger the first assertion (nullptr check)
    // process_data(nullptr, n); 

    // This call will trigger the second assertion (size check)
    // process_data(arr, 0);

    return 0;
}
