/**
 * https://leetcode.com/problems/course-schedule/
 */

int *visited1;
int *visited2;

bool dfs(int **prerequisites, int prerequisitesSize, int node)
{
    if (visited2[node] == 1)
        return true;
    visited1[node] = 1;
    visited2[node] = 1;
    for (int i = 0; i < prerequisitesSize; i++)
    {
        int u = prerequisites[i][0];
        int v = prerequisites[i][1];
        if (u == node)
        {
            if (dfs(prerequisites, prerequisitesSize, v))
                return true;
        }
    }
    visited2[node] = 0;
    return false;
}

bool canFinish(int numCourses, int **prerequisites, int prerequisitesSize, int *prerequisitesColSize)
{
    visited1 = malloc(sizeof(int) * numCourses);
    visited2 = malloc(sizeof(int) * numCourses);
    for (int i = 0; i < numCourses; i++)
        visited1[i] = 0;
    for (int i = 0; i < numCourses; i++)
        visited2[i] = 0;

    for (int i = 0; i < numCourses; i++)
        if (visited1[i] == 0)
            if (dfs(prerequisites, prerequisitesSize, i))
                return false;
    return true;
}
