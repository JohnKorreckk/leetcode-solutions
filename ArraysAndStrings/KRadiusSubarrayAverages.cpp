#include <vector>
#include <iostream>

std::vector<int> getAverages(std::vector<int>& nums, int k) {

}

int main() {
    std::vector<int> nums {7,4,3,9,1,8,5,2,6};
    std::vector<int> new_nums = getAverages(nums, 3);
    for (int i : new_nums) {
        std::cout << i << " ";
    }
}