#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        // Declaring the set
        // using range of vector
        set<int> s(nums.begin(), nums.end());
        cout << s.size() << endl;
        cout << nums.size() << endl;

        if (s.size() < nums.size())
        {
            return true;
        }
        return false;
    }
};

int main(void)
{
    vector<int> v = {1, 2, 3, 1};

    Solution solution;
    cout << solution.containsDuplicate(v) << endl;

    return 0;
}