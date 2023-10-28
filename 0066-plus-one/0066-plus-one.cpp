class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 1;  // Initialize the carry to 1 for adding one.

        for (int i = n - 1; i >= 0; i--) {
            int sum = digits[i] + carry;
            digits[i] = sum % 10;  // Update the current digit.
            carry = sum / 10;     // Calculate the carry for the next iteration.
        }

        // If there's still a carry after the loop, insert it at the beginning.
        if (carry > 0) {
            digits.insert(digits.begin(), carry);
        }

        return digits;
    }
};
