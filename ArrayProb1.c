//print all pairs whose sum is X
#define MAX 10
void findpairs(int *arr,int size,int sum)
{
    int index,temp;
    int hash[MAX]={0};
    for(index=0;index<size;index++)
    {
        temp=sum-arr[index];
        if(temp >= 0 && hash[temp]==1 )
        {
            printf("pair with given sum %d is (%d,%d) \n ",sum,arr[index],temp);
        }
        hash[arr[index]] = 1;
    }
}
