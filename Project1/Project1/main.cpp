//#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include <map>
using namespace std;



int maxScoreSightseeingPair(vector<int>& A) {
	int ret = 0;
	int lo = 0;
	int hi = A.size() - 1;
	int max1 = 0, max2 = 0;
	int j = 0;
	for (int i = 0; i < A.size(); i++) {
		
	}

	while (lo<hi) {
		max1 = max1<(A[hi] - hi) ? (A[hi] - hi) : max1;
		max2 = max2<(A[lo] + lo) ? (A[lo] + lo) : max2;
		if ((hi - 1>0) && ((A[lo] + lo + A[hi] - hi)<(A[lo] + lo + A[hi - 1] - hi + 1))) {
			hi--;
		}
		else {
			lo++;
		}
	}
	return max1 + max2;
}



vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> ans;
	map<int, int>hashmap;
	if (hashmap[20]) {

	}
	for (int i = 0; i<nums.size(); i++) {
		if (hashmap[target - nums[i]] && hashmap[target - nums[i]] != i) {
			ans.push_back(i);
			ans.push_back(hashmap[target - nums[i]]);
			return ans;
		}
		hashmap[nums[i]] = i;
		//将hash表对应下标＋1，防止处理下标为0的情况
	}
	return ans;
}
int main(int argc, char** argv)
{
	
	vector<int> A{ 2,7,11,15};
	twoSum(A, 9);
	maxScoreSightseeingPair(A);

	return 0;
}

