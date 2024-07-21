struct Solution{int minOperations(vector<int>n,size_t k){for(auto i:n)k^=i;return popcount(k);}};
