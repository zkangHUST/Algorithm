#include<stdlib.h>
void mergesort(int* nums, int l, int r);
void merge(int* nums, int l, int mid, int r);

int main()
{
    int nums[] = {7, 2, 4, 8, 1, 5, 3};
    mergesort(nums, 0, 6);

}
void merge(int* nums, int l, int mid, int r)
{
    int *tmp = (int*)malloc(sizeof(int) * (r - l + 1));
    int i = l, j = mid + 1, k = 0;

    while(k < r - l + 1) {
        if (i > mid) {
            tmp[k] = nums[j];
            j++;
        } else if (j > r) {
            tmp[k] = nums[i];
            i++;
        } else {
            if (nums[i] < nums[j]) {
                tmp[k] = nums[i];
                i++;
            } else {
                tmp[k] = nums[j];
                j++;
            }
        }
        k++;
    }
    i = l;
    for (k = 0; k < r - l + 1; k++) {
        nums[i] = tmp[k];
        i++;
    }
    free(tmp);
}

void mergesort(int* nums, int l, int r)
{
    if (l == r) {
        return ;
    }
    int mid = (l + r) / 2;
    mergesort(nums, l, mid);
    mergesort(nums, mid + 1, r);
    merge(nums, l, mid, r);
}
