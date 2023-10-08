int findDuplicate(vector<int> &arr) {
  int ans = 0;

  // xor ing all array elements
  for (int i = 0; i < arr.size(); i++) {
    ans = ans ^ arr[i];
  }


  // xor [1, n-1] 
  for (int i = 1; i < arr.size(); i++) {
    ans = ans ^ i;
  }

  return ans;
}


// Question link
// https://www.codingninjas.com/studio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=1