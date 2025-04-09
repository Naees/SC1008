/*3. (Template Class) Imagine you are building a software module for processing students’
exam results. In different courses, the exam results can be represented in different
formats—for instance, letter grades (e.g., “A”, “B”, “C”), integer scores (e.g., 80, 85), floating-
point numbers (e.g., 80.5, 91.7), or as boolean values indicating pass/fail. To avoid writing
separate classes for each type of result, you are asked to implement a generic container
template, ExamResult<T>. This class will store a single exam result of any data type and
track whether a result has been stored. Create a template class ExamResult<T> that has
the following members

    • Private Members
        o T* result: the pointer pointing to the array storing exam result (e.g.,
        T could be an int, std::string, etc.).
        o int size: the size of the array pointed to by the pointer result.
    • Public Members
        o A default constructor without any parameters initializing the private
        member variables as their default values (i.e., set size as 0, and
        result as a NULL pointer)
        o setExamResult(T* array, int len) initializing private member
        variables (i.e., sets result as array, size as len)
        o updateResultAtOneLoc(int i, const T &newResult):
        Update the exam result at i-th location. If the index i exceeds the size
        of the array size, output an error message “Out of the size limit!”
        o printExamResult() print out all the exam result. If it is empty, print
        out “No exam results!”.
        o The destructor clears the stored exam result (clear the dynamically-
        allocated memory result, and set size as 0).*/

#include <iostream>
#include <string>
using namespace std;

// Template class for storing exam results of different data types
template <typename T>
class ExamResult {
private:
    T* result; // Pointer to dynamically allocated array of exam results
    int size;  // Number of exam results

public:
    // Default constructor
    ExamResult() : result(nullptr), size(0) {}

    void setExamResult(T* array, int len) {
        // TO-DO: Set the exam result as the input array
        // If memory already allocated, free it
        if (result != nullptr) {
            delete [] result;
        }
        size = len;
        // Allocate new memory and copy the array elements
        result = new T[size];
        for (int i = 0; i < len; i++) {
            result[i] = array[i];
        }
    }


    void updateResultAtOneLoc(int i, const T &newResult) {
        // TO-DO: Update the exam result at i-th location to new result
        if (i < 0 || i >= size){
            cout << "Out of the size limit!";
        } else {
            result[i] = newResult;
        }
    }


    void printExamResult() const {
        // TO-DO: Print all exam results
        if (size == 0 || result == nullptr) {
            cout << "No exam result";
        } else {
            for (int i = 0; i < size; i++) {
                cout << result[i];
                if (i < size - 1)
                    cout << " ";
            }
            cout << endl;
        }
    }


    ~ExamResult() {
        // TO-DO: Destructor to free allocated memory
        if (result != nullptr){
            delete [] result;
            result = nullptr;
        }
        size = 0;
    }
};


int main() {
    // Test with integer scores
    int intScores[] = {80, 90, 75, 85};
    ExamResult<int> intExam;
    intExam.setExamResult(intScores, 4);
    intExam.printExamResult();
    intExam.updateResultAtOneLoc(2, 95);
    intExam.printExamResult();
    cout<<endl;

    int intScores2[] = {100, 99};
    intExam.setExamResult(intScores2, 2);
    intExam.printExamResult();
    cout<<endl;

    // Test with letter grades
    string letterGrades[] = {"A", "B", "C", "D"};
    ExamResult<string> stringExam;
    stringExam.setExamResult(letterGrades, 4);
    stringExam.printExamResult();
    stringExam.updateResultAtOneLoc(3, "A+");
    stringExam.printExamResult();
    cout<<endl;

    // Test with boolean pass/fail results
    cout << boolalpha; // Enables printing "true" and "false"
    bool passFail[] = {true, false, true};
    ExamResult<bool> boolExam;
    boolExam.setExamResult(passFail, 3);
    boolExam.printExamResult();
    boolExam.updateResultAtOneLoc(0, false);
    boolExam.printExamResult();

    return 0;
}
          