/*
题目2：两数相加
给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。
如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
您可以假设除了数字 0 之外，这两个数都不会以 0 开头。
示例：
输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
输出：7 -> 0 -> 8
原因：342 + 465 = 807
*/
#include <stdio.h>
#include <stdlib.h>

//Definition for singly-linked list.
typedef struct ListNode
{
    int val;
    struct ListNode *next;
} ListNode;

void ListNodeInit(int in1, int in2, ListNode *l1, ListNode *l2)
{
    int i;
    int cnt1 = 0;
    int cnt2 = 0;
    int in_tmp;
    ListNode *list = l1;
    printf("input_org = %d, %d\n", in1, in2);

    in_tmp = in1;
    while (in_tmp != 0)
    {
        in_tmp /= 10;
        cnt1++;
    }

    for (i = 0; i < cnt1; i++)
    {
        list = l1;
        list->val = in1 % 10;
        printf("value = %d, ", list->val);
        in1 /= 10;
        list = l1->next;

    }

    printf("input =");
    while(l1)
    {
        printf(" %d", l1->val);
        l1++;
    }
    printf("\n");


    while (in2 != 0)
    {
        in2 /= 10;
        ++cnt2;
    }

    for (i = 0; i < cnt2; i++)
    {
        list = l2;
        list->val = in2 % 10;
        in2 /= 10;
        list = l2->next;
    }

    printf("input =");
    while(l2)
    {
        printf(" %d", l2->val);
        l2++;
    }
    printf("\n");
};

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    int carry;
};

void main()
{
    int in1 = 342;
    int in2 = 465;
    ListNode *l1 = (ListNode*)malloc(10*sizeof(ListNode));
    ListNode *l2 = (ListNode*)malloc(10*sizeof(ListNode));
    ListNodeInit(in1, in2, l1, l2);

#if 0
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
#endif
}