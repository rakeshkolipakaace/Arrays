// Brute Force
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            for(int i=0;i<nums.size();i++){
                for(int j=i+1;j<nums.size();j++){
                    if(nums[j]==target-nums[i]){
                    return {i,j};
                    }
                   
                }
            }
            return {};
            
            
         }
    };





      // Better solution
    // Binary search


    class Solution {
        public:
            vector<int> twoSum(vector<int>& nums, int target) {
                 vector<pair<int, int>> indexedNums;
                
                for (int i = 0; i < nums.size(); i++) {
                    indexedNums.push_back({nums[i], i});
                }
        
                sort(indexedNums.begin(), indexedNums.end());
        
                int left = 0, right = nums.size() - 1;
                while (left < right) {
                    int sum = indexedNums[left].first + indexedNums[right].first;
                    
                    if (sum == target) {
                        return {indexedNums[left].second, indexedNums[right].second};
                    }
                    else if (sum < target) {
                        left++; 
                    } 
                    else {
                        right--;
                    }
                }
        
                return {}; 
            }
                
            
        };




         // optimal solution
        //Two pointers


        class Solution {
            public:
                vector<int> twoSum(vector<int>& nums, int target) {
                     vector<pair<int, int>> indexedNums;
                    
                    for (int i = 0; i < nums.size(); i++) {
                        indexedNums.push_back({nums[i], i});
                    }
            
                    sort(indexedNums.begin(), indexedNums.end());
            
                    int left = 0, right = nums.size() - 1;
                    while (left < right) {
                        int sum = indexedNums[left].first + indexedNums[right].first;
                        
                        if (sum == target) {
                            return {indexedNums[left].second, indexedNums[right].second};
                        } 
                        else if (sum < target) {
                            left++;
                        } 
                        else {
                            right--;
                        }
                    }
            
                    return {};
                }
                    
                
            };
