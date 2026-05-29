#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> seats = {3,1,5};
    std::vector<int> students = {2,7,4};
    int count = 0;

    std::sort(students.begin(), students.end());
    std::sort(seats.begin(), seats.end());

    for(int i = 0; i<seats.size(); i++){
        count += abs(students[i] - seats[i]);
    }

    return count;
}