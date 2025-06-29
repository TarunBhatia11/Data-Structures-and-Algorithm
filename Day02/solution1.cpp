class Solution {
public:
    string findLargest(vector<int> &arr) {
        // Convert integers to strings
        vector<string> nums;
        for (int num : arr) {
            nums.push_back(to_string(num));
        }

        // Custom comparator to sort based on combined string
        sort(nums.begin(), nums.end(), [](string &a, string &b) {
            return a + b > b + a;
        });

        // Edge case: if the largest number is "0", the whole number is zero
        if (nums[0] == "0") return "0";

        // Concatenate sorted strings
        string result = "";
        for (string &num : nums) {
            result += num;
        }

        return result;
    }
};
