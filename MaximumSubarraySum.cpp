#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> &nums)
{

    int maxSum = nums[0];
    int currSum = 0;
    // Using kadane's intution
    for (int i = 0; i < nums.size(); i++)
    {
        currSum += nums[i];

        maxSum = max(currSum, maxSum);

        if (currSum < 0)
            currSum = 0;
    }

    return maxSum;
}

int main()
{
    vector<int> nums = {1, -2, 3, -4, -1, 5};
    cout << maxSubArray(nums) << endl;

    return 0;
}