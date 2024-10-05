#include <vector>
#include <iostream>


int longestOnes(std::vector<int>& nums, int k) {
    // Initialize the right an leftt pointers to the first element
    int left{0}, right{0};
    // While loop to run until the end of the array
    while (right < nums.size()) {
        // If the right element is a '0', decrement the amount of zeroes allowed (k)
        if (nums.at(right) == 0) {
            k--;
        }
        // If the amount of zeroes left is less than zero, move the left pointer and fix the k value
        if (k < 0) {
            k += 1 - nums.at(left);
            left++;
        }
            
        right++;
    }
    return right-left;
}

int main() {
    std::vector<int> vec{1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0};
    std::cout << longestOnes(vec, 2);
}