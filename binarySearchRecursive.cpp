#include <iostream>
#include <vector>
int binarySearch(std::vector<int>& nums, int left, int right, int target){
    // TO DO 
 
}

int main() {
    std::cout << "Test example " << std::endl;
    std::vector<int> nums = {2,4,6,7,8,10};
    int target = 4;
    std::cout << "The index is: " << binarySearch(nums,0, nums.size() - 1, target) << std::endl;
}