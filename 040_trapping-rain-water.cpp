//https://www.codingninjas.com/studio/problems/trapping-rain-water_8230693?challengeSlug=striver-sde-challenge

long long getTrappedWater(long long* arr, int n) {
  long long left = 0, right = n - 1;
  long long res = 0;
  long long  maxLeft = 0, maxRight = 0;
  while (left <= right) {
    if (arr[left] <= arr[right]) {
      if (arr[left] >= maxLeft) maxLeft = arr[left];
      else res += maxLeft - arr[left];
      left++;
    } else {
      if (arr[right] >= maxRight) maxRight = arr[right];
      else res += maxRight - arr[right];
      right--;
    }
  }
  return res;
}
