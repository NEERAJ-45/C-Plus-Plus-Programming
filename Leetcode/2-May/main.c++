#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class solution
{

public:
    int findMaxK(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = n - 1; i >= 0; i--)
        {
            if (nums[i] > 0 && binary_search(nums.begin(), nums.end(), -nums[i]))
            {
                return nums[i];
            }
        }
        return -1;
    }
};

int main()
{
    cout << "";

    return 0;
}
