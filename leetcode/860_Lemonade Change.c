/**
 * https://leetcode.com/problems/lemonade-change/
 */

bool lemonadeChange(int *bills, int billsSize)
{
    int D5 = 0, D10 = 0;
    bool result = true;

    for (int i = 0; i < billsSize; i++)
    {
        if (bills[i] == 5)
            D5++;
        else if (bills[i] == 10)
        {
            if (D5 == 0)
            {
                result = false;
                break;
            }
            else
            {
                D5--;
                D10++;
            }
        }
        else
        {
            if (D5 > 0 && D10 > 0)
            {
                D5--;
                D10--;
            }
            else if (D5 >= 3 && D10 == 0)
                D5 -= 3;
            else
            {
                result = false;
                break;
            }
        }
    }
    return result;
}
