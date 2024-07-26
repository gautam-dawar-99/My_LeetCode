Part A: Counting the number of ways to split
We'll create a recursive function to count the number of ways the array can be split into two groups with equal sums.

cpp
Copy code
#include <iostream>
#include <vector>
using namespace std;

bool canPartition(vector<int>& nums, int n, int sum1, int sum2) {
    if (n == 0) return sum1 == sum2;
    return canPartition(nums, n - 1, sum1 + nums[n - 1], sum2) || canPartition(nums, n - 1, sum1, sum2 + nums[n - 1]);
}

int countPartitions(vector<int>& nums, int n, int sum1, int sum2) {
    if (n == 0) return sum1 == sum2 ? 1 : 0;
    return countPartitions(nums, n - 1, sum1 + nums[n - 1], sum2) + countPartitions(nums, n - 1, sum1, sum2 + nums[n - 1]);
}

int main() {
    int N;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; ++i) {
        cin >> nums[i];
    }

    int totalWays = countPartitions(nums, N, 0, 0) / 2; // Dividing by 2 because each partition is counted twice
    cout << totalWays << endl;

    return 0;
}
Part B: Printing all the ways to split
We'll create another recursive function to print all the ways the array can be split into two groups with equal sums.

cpp
Copy code
#include <iostream>
#include <vector>
using namespace std;

void printPartition(vector<int>& nums, int n, int sum1, int sum2, vector<int>& group1, vector<int>& group2) {
    if (n == 0) {
        if (sum1 == sum2) {
            for (int num : group1) cout << num << " ";
            cout << "and ";
            for (int num : group2) cout << num << " ";
            cout << endl;
        }
        return;
    }

    group1.push_back(nums[n - 1]);
    printPartition(nums, n - 1, sum1 + nums[n - 1], sum2, group1, group2);
    group1.pop_back();

    group2.push_back(nums[n - 1]);
    printPartition(nums, n - 1, sum1, sum2 + nums[n - 1], group1, group2);
    group2.pop_back();
}

int main() {
    int N;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; ++i) {
        cin >> nums[i];
    }

    vector<int> group1, group2;
    printPartition(nums, N, 0, 0, group1, group2);

    return 0;
}
Explanation
Part A:

canPartition: This function checks if the array can be partitioned into two groups with equal sums.
countPartitions: This function counts the number of ways the array can be partitioned into two groups with equal sums.
main: Reads input and calls countPartitions, then prints the result.
Part B:

printPartition: This function prints all the ways the array can be partitioned into two groups with equal sums.
main: Reads input, initializes the groups, and calls printPartition.
By dividing the result of countPartitions by 2, we avoid counting the same partition twice. This solution ensures that all unique partitions are considered.







