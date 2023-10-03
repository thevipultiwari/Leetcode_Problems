class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
           vector<int> result(2, -1);  // Initialize the result as [-1, -1]

    // Search for the left bound of the target
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result[0] = mid;  // Found the target on the left side
            right = mid - 1; // Continue searching on the left side
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // Search for the right bound of the target
    left = 0;
    right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result[1] = mid;  // Found the target on the right side
            left = mid + 1;  // Continue searching on the right side
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}
        
    
};