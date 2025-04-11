/*4. (STL vector) A small café wants to track its daily sales for one week. Each day’s sales
figure is an integer. You are asked to use an STL vector container, i.e.,
std::vector<int> dailySales to track the daily sales. Please perform the following
operations in the main() function:
• Add Sales: Insert seven daily sale values into the vector.
• Print Sales: Traverse and print all sales values using an iterator.
• Calculate Average: Compute and display the average of the sales figures.
• Sort Sales: Sort the sales in ascending order using std::sort and then print the
sorted list using an iterator*/

#include <iostream>
#include <vector>
#include <algorithm> // for std::sort
#include <numeric>   // for std::accumulate

int main() {
    // Declare a vector to store daily sales.
    std::vector<int> dailySales;

    // TO-DO: Add seven daily sales values to the vector: 
    //         120, 200, 150, 80, 90, 220, 100
    std::cout << "Daily Sales: ";
    dailySales.push_back(120);
    dailySales.push_back(200);
    dailySales.push_back(150);
    dailySales.push_back(80);
    dailySales.push_back(90);
    dailySales.push_back(220);
    dailySales.push_back(100);

    // TO-DO: Print all sales values by using an iterator
    for(std::vector<int>::iterator it = dailySales.begin(); it != dailySales.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;


    // TO-DO: Calculate the average of the sales values and print it
    // Sum up the values using std::accumulate.
    int sum = std::accumulate(dailySales.begin(), dailySales.end(), 0);
    // Compute the average: cast the sum to double to keep the fractional part.
    double average = static_cast<double>(sum) / dailySales.size();
    // Print the average with the three digits after the decimal using std::fixed and std::setprecision.
    std::cout << "Average Sales: " << average << std::endl;


    // TO-DO: Sort the vector in ascending order using std::sort.
    sort(dailySales.begin(), dailySales.end());


    // TO-DO: Print all the sorted sales values by using an iterator
    std::cout << "Sorted Sales: ";
    for (std::vector<int>::iterator it = dailySales.begin(); it != dailySales.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}