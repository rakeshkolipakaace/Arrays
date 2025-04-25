
//Normal apporach
class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
             sort(nums.begin(), nums.end()); 
            for (int i = 0; i < nums.size() - 1; i++) {
                if (nums[i] == nums[i + 1]) {
                    return true; 
                }
            }
            return false;
        }
            
        
    };



// Optimal solution
// sets
class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
         unordered_set<int> s(nums.begin(), nums.end());
            return s.size() < nums.size();
            
        }
    };