/**
 * https://leetcode.com/problems/defanging-an-ip-address/
 */

char defanging[22];
char *result = defanging;

char *defangIPaddr(char *address)
{
    int a = 0;
    int d = 0;
    while (address[a] != '\0')
    {
        if (address[a] != '.')
        {
            defanging[d++] = address[a++];
        }
        else
        {
            defanging[d++] = '[';
            defanging[d++] = '.';
            defanging[d++] = ']';
            a++;
        }
    }
    defanging[d] = '\0';

    return result;
}
