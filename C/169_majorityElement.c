// 1. use hashmap
// 2. sort array and find middle element

// 3. 
int majorityElement(int* nums, int numsSize) {
    int count = 0;
    int i = 0;
    int maj;
    
    for (i = 0; i < numsSize; i++) {
        if (count == 0)
            maj = nums[i];

        if (maj == nums[i])
            count++;
        else
            count--;
    }
    
    return maj;
}
