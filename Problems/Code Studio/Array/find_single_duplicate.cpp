// Criteria and Assumptions:


// Presence of a Single Duplicate: The algorithm assumes there is exactly one duplicate number in the array.
// This is because it relies on the existence of a cycle formed by the duplicate.

// Range of Values: The values in the array should be within the range [1, n-1], where n is the length of the array. 
// This ensures that the array elements can form a cycle.

// Elements as Indices: The array values are used as indices for the next element. 
// Hence, all elements must be within the valid index range of the array.




#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	int slow = arr[0];
    int fast = arr[0];
    
    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);
    
    slow = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }
    
    return slow;
}