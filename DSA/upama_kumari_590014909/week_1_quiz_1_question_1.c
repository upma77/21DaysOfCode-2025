int maxSubarraySum(int nums[], int n) {
    int maxSum = nums[0];
    int currentSum = 0;

    for (int i = 0; i < n; i++) {
        currentSum += nums[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        } else if (currentSum < 0) {
            currentSum = 0;
        }
    }
    return maxSum;
}

/*Queston 1.-ans -->The else if (currentSum < 0) check is misplaced—it should reset currentSum before comparing with maxSum.
Fails if all numbers are negative */

/*Question 2.-ans -->Should return the largest single element (e.g., {-3, -2, -1, -4} → -1).*/

/*Question 3.-ans -->Returns -1 (accidentally correct due to flawed logic).*/
