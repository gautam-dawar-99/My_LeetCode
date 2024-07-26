#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int>& boards, int n, int k, int maxTime) {
    int painters = 1, currentTime = 0;
    for (int i = 0; i < n; i++) {
        if (currentTime + boards[i] > maxTime) {
            painters++;
            currentTime = boards[i];
            if (painters > k) return false;
        } else {
            currentTime += boards[i];
        }
    }
    return true;
}

int minTimeToPaintBoards(vector<int>& boards, int n, int k) {
    int low = *max_element(boards.begin(), boards.end());
    int high = accumulate(boards.begin(), boards.end(), 0);
    int result = high;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isPossible(boards, n, k, mid)) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    int k, n;
    cin >> k >> n;
    vector<int> boards(n);
    for (int i = 0; i < n; i++) {
        cin >> boards[i];
    }
    cout << minTimeToPaintBoards(boards, n, k) << endl;
    return 0;
}
