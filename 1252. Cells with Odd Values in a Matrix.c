/**
 * https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/
 */

int oddCells(int n, int m, int** indices, int indicesSize, int* indicesColSize){
    int** arr = (int**)malloc(sizeof(int*)*n);
    for(int i=0; i<n; i++) arr[i] = (int*)malloc(sizeof(int)*m);
    
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            arr[i][j] = 0;
    
    int tmp;
    for(int i=0; i<indicesSize; i++){
        tmp = indices[i][0];
        for(int j=0; j<m; j++) arr[tmp][j]++;
        tmp = indices[i][1];
        for(int j=0; j<n; j++) arr[j][tmp]++;
    }
    
    int output = 0;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(arr[i][j] & 1) output++;
    
    return output;
}
