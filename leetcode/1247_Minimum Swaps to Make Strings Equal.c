/**
 * https://leetcode.com/problems/minimum-swaps-to-make-strings-equal/submissions/
 */

int minimumSwap(char *s1, char *s2)
{
    int count = 0;
    int Dx = -1, Dy = -1;

    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] != s2[i])
        {
            if (s1[i] == 'x')
            {
                if (Dx >= 0)
                {
                    Dx = -1;
                    count++;
                }
                else
                    Dx = i;
            }
            else
            {
                if (Dy >= 0)
                {
                    Dy = -1;
                    count++;
                }
                else
                    Dy = i;
            }
        }
    }
    if (Dx == -1 && Dy == -1)
        return count;
    else if (Dx == -1 || Dy == -1)
        return -1;
    else
        return count + 2;
}
