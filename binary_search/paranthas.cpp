#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Helper function to check if we can cook 'P' paranthas in 'mid' time
bool canCookAllParanthas(int P, vector<int>& ranks, int mid) {
    int totalParanthas = 0;
    for (int rank : ranks) {
        int time = 0;
        int k = 1;
        while (time + k * rank <= mid) {
            time += k * rank;
            totalParanthas++;
            k++;
        }
        if (totalParanthas >= P) return true;
    }
    return totalParanthas >= P;
}

int minTimeToCookParanthas(int P, int L, vector<int>& ranks) {
    int low = 0;
    int high = ranks[0] * P * (P + 1) / 2; // Max time if one cook cooks all P paranthas

    int result = high;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (canCookAllParanthas(P, ranks, mid)) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    int P;
    cin >> P;
    int L;
    cin >> L;
    vector<int> ranks(L);
    for (int i = 0; i < L; i++) {
        cin >> ranks[i];
    }
    sort(ranks.begin(), ranks.end()); // Sort ranks for optimal allocation
    cout << minTimeToCookParanthas(P, L, ranks) << endl;
    return 0;
}
