int BinarySearch(int arr[],int li,int ri,int target)
{
    int mi;
    while(li<=ri)
    {
        mi = li + (ri - li)/2;
        if(arr[mi] == target)
            return mi;
        if(arr[mi] < target)
            li = mi + 1;
        else
            ri = mi - 1;
    }
    return -1;
} 