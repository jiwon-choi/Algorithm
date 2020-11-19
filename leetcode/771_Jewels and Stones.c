/**
 * https://leetcode.com/problems/jewels-and-stones/
 */

int numJewelsInStones(char *J, char *S)
{
    int i = 0, output = 0;
    while (S[i] != NULL)
    {
        for (int j = 0; J[j] != NULL; j++)
            if (S[i] == J[j])
                output++;
        i++;
    }
    return output;
}
