class Solution {
public:
    bool isPrime[1000];

    void sieve() {
        // accumulate(isPrime.start(), isPrime.end() + 1000, true);
        fill(isPrime, isPrime + 1000, true); // initialise
        isPrime[0] = false;
        isPrime[1] = false;

        for (int i = 2; i * i < 1000; i++) {
            // check all values which are prime
            if (isPrime[i] == true) {
                for (int j = i * i; j < 1000; j+=i) {
                    isPrime[j] = false;
                }
            }
        }
    }

    bool primeSubOperation(vector<int>& nums) {
        int n = nums.size();

        sieve(); // it will store all prime values;
        //  if isPrime[i] = true, then it is prime. else not

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                continue;
            }
            // if nums[i]>= nums[i]
            // decre nums[i] till it becomes just smaller than nums[i+1]

            // check prime nums less than nums[i]

            for (int j = 2; j < nums[i]; j++) {
                if (!isPrime[j]) {
                    continue;
                }
                if (nums[i] - j < nums[i + 1]) {
                    nums[i] -= j;
                    break;
                }
                
            }
            if (nums[i] >= nums[i + 1]) {
                // impossible
                return false;
            }
        }
        return true;
    }
};