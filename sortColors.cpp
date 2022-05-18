class Solution {
public:
    void bubbleSort(vector<int> &arr)
    {
        int i, j,n=arr.size();
        for (i = 0; i < n - 1; i++)
            for (j = 0; j < n - i - 1; j++)
                if (arr[j] > arr[j + 1])
                    swap(arr[j], arr[j + 1]);  
    }
    void sortColors(vector<int>& nums) {
        bubbleSort(nums);
        return;
    }
};