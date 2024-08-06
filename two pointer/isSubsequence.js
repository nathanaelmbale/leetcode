/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isSubsequence = function (s, t) {
    let l = 0
    let r = 0

    while (l < s.length) {
        if (r >= t.length) {
            console.log(t[r - 1], s[l])
            return false
        }
        
        if (s[l] == t[r]) {
            l++
            r++
        } else {
            r++
        }


    }
    return true
};