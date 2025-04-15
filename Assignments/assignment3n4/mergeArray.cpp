///////// Student Info/////////
//
//           Your Name: Er Jia Liang Sean
//      Your NTU Email: erji0002@e.ntu.edu.sg
//
//
//

/*1. (Merge Arrays) [10 Marks] Write a C++ function template called mergeArrays to
concatenate two arrays of different type of data (i.e., int, double, float, string, long).
Below are the basic requirements for the function template mergeArrays:

    • The two arrays will always be arrays of the same data type;
    • The array can be empty, i.e., nullptr;
    • You are NOT allowed to use any STL containers or algorithms in your
    implementation. Otherwise, 0 marks will be given;
    • If you do not implement the solution as a function template, 0 marks will be given.
Also, you are requested to write another C++ function template
printAndDeleteArray to 1) print each element of the merged array, and 2) then free
the dynamically allocated memory for merged array*/

#include <iostream>
#include <string>

////// To-do: Write Your Code Here//////////////
// Template function mergeArrays()  to merge two arrays
template <typename T>
void mergeArrays(T* array1, int size1, T* array2, int size2, T*& mergeArray) {
    int mergeSize = size1 + size2;

    if (mergeSize == 0) {
        mergeArray == nullptr;
        return;
    }
    
    mergeArray = new T[mergeSize];

    for (int i = 0; i <size1; i++) {
        mergeArray[i] = array1[i];
    }

    for (int i = 0; i < size2; i++) {
        mergeArray[size1 + i] = array2[i];
    }
}

////// To-do: Write Your Code Here//////////////
// Template function printAndDeallocate() to print and deallocate the merged array
template <typename T>
void printAndDeallocate(T* newArray, int mergeSize) {
    std::cout << "Merged Array: ";
    for (int i = 0; i < mergeSize; i++) {
        std::cout << newArray[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Case 1: Integers
    int* arr1 = new int[3];
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;
    int size1 = 3;
    int arr2[] = {4, 5, 6};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int* mergedArray = nullptr;
    // Merging arrays
    mergeArrays(arr1, size1, arr2, size2, mergedArray);
    // Printing and deallocating the merged array
    printAndDeallocate(mergedArray, size1 + size2);
    delete[] arr1;

    // Case 2: doubles
    double arr3[] = {1.1, 2.2, 3.3};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    double arr4[] = {4.4, 5.5};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    double* mergedArray2 = nullptr;
    mergeArrays(arr3, size3, arr4, size4, mergedArray2);
    printAndDeallocate(mergedArray2, size3 + size4);

    return 0;
}