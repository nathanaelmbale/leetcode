/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function (s) {
    let res = ''

    for (let i = s.length - 1; i >= 0; i--) {
        if (s[i - 1] == ' ' && s[i] != ' ' || i == 0 && s[i] != ' ') {
            let l = i
            while (s[l] != ' ' && l < s.length) {
                res = res + s[l]
                l++  
            }

            if (i != 0  ) {
                res = res + ' '
            }
        }
    }
    
    if( res[res.length - 1] == ' ') {
        res = res.slice(0, -1)
    }
    return res
};