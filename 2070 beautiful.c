/**
 * Given a 2D integer array `items` where each element is a pair [price, beauty],
 * and an integer array `queries`, this function returns an array `answer` where
 * each element `answer[j]` is the maximum beauty of an item whose price is less
 * than or equal to `queries[j]`. If no such item exists, the answer for that query
 * is 0.
*/

#include <stdlib.h>

int compare(const void* a, const void* b) 
{
    return (*(int**)a)[0] - (*(int**)b)[0];
}

int* maximumBeauty(int** items, int itemsSize, int* itemsColSize, int* queries, int queriesSize, int* returnSize) 
{
    int* result = (int*)malloc(queriesSize * sizeof(int));
    *returnSize = queriesSize;

    // Sort items by price
    qsort(items, itemsSize, sizeof(int*), compare);

    // Create an array to store the maximum beauty up to each price
    int* maxBeauty = (int*)malloc(itemsSize * sizeof(int));
    maxBeauty[0] = items[0][1];
    for (int i = 1; i < itemsSize; i++) 
    {
        maxBeauty[i] = (items[i][1] > maxBeauty[i - 1]) ? items[i][1] : maxBeauty[i - 1];
    }

    // Process each query
    for (int i = 0; i < queriesSize; i++) 
    {
        int left = 0, right = itemsSize - 1;
        while (left <= right) 
        {
            int mid = left + (right - left) / 2;
            if (items[mid][0] <= queries[i]) 
            {
                left = mid + 1;
            } else 
            {
                right = mid - 1;
            }
        }
        result[i] = (right >= 0) ? maxBeauty[right] : 0;
    }

    free(maxBeauty);
    return result;
}