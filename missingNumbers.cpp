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


//optimal way 
// Using math



int n = nums.size();
        int expectedSum = (n * (n + 1)) / 2;  
        int actualSum = 0;

        // Normal for loop
        for (int i = 0; i < nums.size(); i++) {
            actualSum += nums[i];
        }

        return expectedSum - actualSum;




        //optimal way another XOR  method

int missing = nums.size(); // Start with n
for (int i = 0; i < nums.size(); i++) {
    missing ^= i ^ nums[i]; // XOR index and value
}
return missing;


