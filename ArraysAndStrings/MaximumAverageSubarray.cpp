#include <vector>
#include <iostream>

double findMaxAverage(std::vector<int>& nums, int k) {
    int left{0};
    int right{k-1};
    double max{0};
    double sum{0};
    for (int i{0}; i <= right; i++) {
            sum += nums.at(i);
        }
    max = sum/k;
    right++;
    while (right < nums.size()) {
        sum -= nums.at(left);
        sum += nums.at(right);
        if (sum/k > max) {
            max = sum/k;
        }
        right++;
        left++;
    }
    return max;
}

int main() {
    std::vector<int> vec{-1,2,3,4,5};
    std::cout << findMaxAverage(vec, 4);
}