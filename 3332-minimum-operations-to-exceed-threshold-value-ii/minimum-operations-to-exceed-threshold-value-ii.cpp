class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long, vector<long>, greater<long>> pq(begin(nums), end(nums));
        // pq(begin(nums), end(nums)); // heap

        int count = 0;

        while (!pq.empty() && pq.top() < k) {

            long small = pq.top();
            pq.pop();

            long secondSmall = pq.top();
            pq.pop();

            pq.push(min(small, secondSmall) * 2 + max(small, secondSmall));
            count++;
        }
        return count;
    }
};