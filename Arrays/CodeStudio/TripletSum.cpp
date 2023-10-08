/*

vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {
    vector<vector<int>> ans;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (arr[i] + arr[j] + arr[k] == K) {
                    ans.push_back({arr[i], arr[j], arr[k]});
                }
            }
        }
    }

    // Remove duplicates from the result vector
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());

    return ans;
}
*/

// now in optimised way



// question link
// https://www.codingninjas.com/studio/problems/triplets-with-given-sum_893028?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1&leftPanelTab=0