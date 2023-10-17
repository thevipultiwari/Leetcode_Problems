/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
     
    // Remove leading and trailing spaces
    s = s.trim();

    // Initialize a variable to keep track of the last word's length
    let length = 0;

    // Iterate through the characters in the string
    for (let i = 0; i < s.length; i++) {
        // If the current character is not a space, increase the length
        if (s[i] !== ' ') {
            length++;
        }
        // If the current character is a space and the next character is not, reset the length
        else if (i < s.length - 1 && s[i + 1] !== ' ') {
            length = 0;
        }
    }

    // Return the length of the last word
    return length;
};
