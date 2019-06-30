// insert-sort
void insert_sort(int nums[], int len)
{
    int i, j, key;

    for(j = 1; j < len; j++) {
        key = nums[j];
        i = j-1;
        while(i >= 0 && nums[i] > key) {
            nums[i + 1] = nums[i];
            i = i-1;
        }
        nums[i + 1] = key;
    }
}
