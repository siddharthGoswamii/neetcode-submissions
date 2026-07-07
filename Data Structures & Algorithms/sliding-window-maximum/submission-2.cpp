class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
int n = nums.size();
        if (n == 0) return {};
        
        vector<int> left(n), right(n);
        
        // 1. Left to Right Blocks Calculation
        for (int i = 0; i < n; i++) {
            // Agar block ki shuruat hai (i % k == 0), toh naya max start hoga
            if (i % k == 0) {
                left[i] = nums[i];
            } else {
                left[i] = max(left[i - 1], nums[i]);
            }
        }
        
        // 2. Right to Left Blocks Calculation
        for (int i = n - 1; i >= 0; i--) {
            // Agar block ka end hai, ya array ka aakhiri element hai
            if (i == n - 1 || (i + 1) % k == 0) {
                right[i] = nums[i];
            } else {
                right[i] = max(right[i + 1], nums[i]);
            }
        }
        
        // 3. Sliding Window Pairs Collection (Using Two Pointers l and r)
        vector<int> res;
        for (int l = 0, r = k - 1; r < n; l++, r++) {
            // Dono blocks ke intersection ka maximum utha lo
            res.push_back(max(right[l], left[r]));
        }
        
        return res;
    }
};
