/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersection = function(nums1, nums2) {
    
    // Create sets to store unique elements from nums1 and nums2
    const set1 = new Set(nums1);
    const set2 = new Set(nums2);
    
    const result = [];

    // Loop through the elements in set2 and check if they are in set1
    for (const num of set1) {
        if (set2.has(num)) {
            result.push(num);
        }
    }

    return result;
}
