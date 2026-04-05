/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    for(int i = 0; i < numsSize; i++)
    {
        for(int w = i+1; w < numsSize; w++)
        {
            if(nums[w] + nums[i] == target)
            {
                int *vetor = (int *)malloc(sizeof(int)*2);
                vetor[0] = i;
                vetor[1] = w;
                *returnSize = 2;
                return vetor;
            }
        }        
    }
    *returnSize = 0;
    return NULL;
}