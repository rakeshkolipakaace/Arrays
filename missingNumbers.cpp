//Brute Force

int n = nums.size();
        
for (int i = 0; i <= n; i++) {  // Check each number from 0 to n
    bool found = false;

    for (int j = 0; j < n; j++) {  // Search if `i` is in `nums`
        if (nums[j] == i) {
            found = true;
            break;  // No need to check further
        }
    }

    if (!found) return i;  // If not found, return it
}

return -1; 


