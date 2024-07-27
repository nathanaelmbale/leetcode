/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function (strs) {
    let r = 0
    let l = 0

    while (strs[1[l]] == strs[r[l]]) {
        r = 1
        for (r; r < strs.length; r++) {
            if (strs[1[l]]==  strs[r[l]]) {
                r++
            } else {
                exit;
            }
        }
        if (r >= strs.length) {
            l++
        } else {
            exit;
        }

    }
    return strs
}
