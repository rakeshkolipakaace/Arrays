// Brute force 

class Solution {
    public:
        vector<int> findDisappearedNumbers(vector<int>& nums) {
            vector<int> ans;
    
             // Loop from 1 to n (inclusive) to check for missing numbers
            for (int i = 1; i <= nums.size(); i++) {
                bool flag = false;
    
                // Inner loop to check if the current number i exists in the array
                for (int j = 0; j < nums.size(); j++) {
                    if (i == nums[j]) {
                        flag = true; // Found i in the array
                        break;
                    }
                }
    
                // If i is not found in the array, add it to the result
                if (!flag) {
                    ans.push_back(i);
                }
            }
    
            return ans;
            
        }
    };




     //optimal way

     int n = nums.size();
     vector<int> sol;

     for (int i = 0; i < n; i++) {
         int idx = abs(nums[i]) - 1;
         nums[idx] = -abs(nums[idx]);
     }

     for (int i = 0; i < n; i++) {
         if (nums[i] > 0) sol.push_back(i + 1);
     }

     return sol;