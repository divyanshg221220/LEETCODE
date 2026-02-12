/*
 * @lc app=leetcode id=485 lang=c
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int max = 0, temp = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == 1)
        {
            temp++;
        }
        else
        {
            if (temp > max)
            {
                max = temp;
            }
            temp = 0;
        }
    }
    if (temp > max)
    {
        max = temp;
    }
    return max; 
}
// @lc code=end

