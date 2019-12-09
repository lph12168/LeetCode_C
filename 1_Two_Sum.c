/*
题目1：两数之和
给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。
示例:
给定 nums = [2, 7, 11, 15], target = 9
因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
*/
#include <stdio.h>
int twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int i, j;

    for (i = 0; i < numsSize; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                returnSize[0] = i;
                returnSize[1] = j;
            }
        }
    }
    return 0;
}
void main()
{
    //printf("get started !\n");
    int i;
    int ret_nums[2];
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int nums_len = sizeof(nums) / sizeof(nums[0]);
    int ret_num_len;

    for (i = 0; i <= nums_len; i++)
    {
        if (i == 0)
            printf("nums = [%d, ", nums[i]);
        else if (i == nums_len)
            printf("]\n");
        else if (i == nums_len - 1)
        {
            printf("%d", nums[i]);
        }
        else
        {
            printf("%d, ", nums[i]);
        }
    }

    printf("numsSize = %d\n", nums_len);
    printf("target = %d\n", target);

    twoSum(nums, nums_len, target, ret_nums);
    ret_num_len = sizeof(ret_nums) / sizeof(ret_nums[0]);

    for (i = 0; i <= ret_num_len; i++)
    {
        if (i == 0)
        {
            printf("ret_nums = [%d, ", ret_nums[i]);
        }
        else if (i == ret_num_len)
        {
            printf("]\n");
        }
        else if (i == ret_num_len - 1)
        {
            printf("%d", ret_nums[i]);
        }
        else
        {
            printf("%d, ", ret_nums[i]);
        }
    }
}