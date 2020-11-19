/**
 * https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
 */

int getDecimalValue(struct ListNode *head)
{
    int count = 0, i = 0;
    int arr[30] = {'\0'};

    while (head)
    {
        count++;
        if (head->val == 1)
        {
            arr[i++] = count;
        }
        head = head->next;
    }

    int result = 0;
    i = 0;
    while (arr[i])
    {
        result += pow(2, count - arr[i]);
        i++;
    }
    return result;
}
