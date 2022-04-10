//radix sort
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void radixSort(vector<int> &nums)
{
    //radix sort
    int max = *max_element(nums.begin(), nums.end());
    int exp = 1;
    while (max / exp > 0)
    {
        vector<int> output(nums.size());
        vector<int> count(10);
        for (int i = 0; i < nums.size(); i++)
        {
            count[(nums[i] / exp) % 10]++;
        }
        for (int i = 1; i < 10; i++)
        {
            count[i] += count[i - 1];
        }
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            output[count[(nums[i] / exp) % 10] - 1] = nums[i];
            count[(nums[i] / exp) % 10]--;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = output[i];
        }
        exp *= 10;
    }
}
int main()
{
    // driver program
    vector<int> nums;
    int n;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    radixSort(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums.at(i) << " ";
    }
    return 0;
}

