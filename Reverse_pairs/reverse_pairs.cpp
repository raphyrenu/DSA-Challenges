
#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int>& nums, int low, int mid, int high, vector<pair<int, int>>& pairs) {
    int count = 0;
    int j = mid + 1;

    for (int i = low; i <= mid; i++) {
        while (j <= high && nums[i] > 2LL * nums[j]) {
            j++;
        }
        for (int k = mid + 1; k < j; ++k) {
            pairs.push_back({nums[i], nums[k]});
        }
        count += (j - (mid + 1));
    }

    vector<int> temp;
    int left = low, right = mid + 1;
    while (left <= mid && right <= high) {
        if (nums[left] <= nums[right]) {
            temp.push_back(nums[left++]);
        } else {
            temp.push_back(nums[right++]);
        }
    }
    while (left <= mid) temp.push_back(nums[left++]);
    while (right <= high) temp.push_back(nums[right++]);

    for (int i = low; i <= high; i++) {
        nums[i] = temp[i - low];
    }

    return count;
}

int mergeSort(vector<int>& nums, int low, int high, vector<pair<int, int>>& pairs) {
    if (low >= high) return 0;
    int mid = (low + high) / 2;
    int inv = mergeSort(nums, low, mid, pairs);
    inv += mergeSort(nums, mid + 1, high, pairs);
    inv += merge(nums, low, mid, high, pairs);
    return inv;
}

int countReversePairs(vector<int>& nums, vector<pair<int, int>>& pairs) {
    return mergeSort(nums, 0, nums.size() - 1, pairs);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<pair<int, int>> pairs;
    int result = countReversePairs(nums, pairs);

    cout << "Number of reverse pairs: " << result << endl;
    if (!pairs.empty()) {
        cout << "The reverse pairs are:\n";
        for (auto& p : pairs) {
            cout << "(" << p.first << ", " << p.second << ")\n";
        }
    }
    return 0;
}
