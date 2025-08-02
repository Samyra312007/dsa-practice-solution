/**
 * @param {number[]} nums
 * @return {number}
 */
var longestConsecutive = function (nums) {
  let n = nums.length;
  if (n == 0) return 0;
  let longest = 1;
  let newSet = new Set(nums);
  for (const it of newSet) {
    if (!newSet.has(it - 1)) {
      let cnt = 1;
      let x = it;
      while (newSet.has(x + 1)) {
        x = x + 1;
        cnt = cnt + 1;
      }
      longest = Math.max(cnt, longest);
    }
  }
  return longest;
};
