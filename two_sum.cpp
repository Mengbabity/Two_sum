#include<iostream>
#include<vector>
using namespace std;

class Solution {
public :
	int count = 0;

	vector<int> twoSum(vector<int> nums, int target)
	{
		for (int i = 0; i < nums.size(); i++)
		{
			for (int j = i+1; j < nums.size(); j++)
			{
				count = nums[i] + nums[j];   //ֵ
				if (count == target)
				{
					cout << i << " " << j << endl;
					return vector<int> {i, j};
				}
			}
		}
/*		for (vector<int>::iterator i = nums.begin(); i < nums.end(); i++)
		{
			for (vector<int>::iterator j = nums.begin(); j < nums.end(); j++)
			{
				count = *i + *j;   //ֵ
				if (count == target)
				{
					cout << *i << " "<<*j << endl;
					return vector<int> {i, j};
				}				
			}
		}*/
	}
};

void main()
{
	Solution solution;
	solution.twoSum({ 3,2,4 }, 6);	
	system("pause");
}
