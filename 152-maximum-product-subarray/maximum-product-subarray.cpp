class Solution {
public:
    int maxProduct(vector<int>& nums) {
    if (nums.empty()) {
      return 0;
    }
    int maxProduct = nums[0];
    int minProduct = nums[0];
    int result = maxProduct;
    for (int i = 1; i < nums.size(); i++) {
      int tempMax = maxProduct;
      maxProduct = std::max({nums[i], nums[i] * maxProduct, nums[i] * minProduct});
      minProduct = std::min({nums[i], nums[i] * tempMax, nums[i] * minProduct});
      result = std::max(result, maxProduct);
    }
    return result;
    }
};