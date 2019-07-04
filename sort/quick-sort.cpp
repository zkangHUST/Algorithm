// quick-sort
int partition(int* nums, int l , int r)
{
    int x = nums[r];
    int i = l - 1, j = 0;
    int tmp;
    for (j = l; j < r; j++) {
        if (nums[j] <= x) {
            tmp = nums[i + 1];
            nums[i + 1] = nums[j];
            nums[j] = tmp;
            i++;
        }
    }
    nums[r] = nums[i + 1];
    nums[i + 1] = x;
    return i + 1;
}

void quicksort(int* nums, int l, int r)
{
    if (l >= r) {
        return;
    } 
    int m = partition(nums, l, r);
    quicksort(nums, m + 1, r);
    quicksort(nums, l, m - 1);
}