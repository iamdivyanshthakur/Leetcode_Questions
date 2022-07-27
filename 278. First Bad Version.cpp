// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

//  Brute Force by doing a linear search
// and traversing till the bad patch arises.
class Solution {
public:
    int firstBadVersion(int n) {
        for(int i = 1 ; i < n ; i++){
            if (isBadVersion(i)) return i;
       }
   return n;
    }
    
};
// time complexity O(n)



// using binary search 
//  and divison of half the list

class Solution {
public:
    int firstBadVersion(int n) {
    int left = 1;
    int right = n;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (isBadVersion(mid)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}
};