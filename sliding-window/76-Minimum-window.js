/**
 * @param {string} s
 * @param {string} t
 * @return {string}
 */
var minWindow = function(s, t) {
    let l = 0
    let r =0
    let res = s.length + 1
    let resArray = []
    
    for( l ;l <s.length; l++) {
        
        for(r ; r < t.length; r++) {
            console.log(s)
            if(s[l] === t[r]) {
                resArray.push(l)
            }
        }
        
        //we have an array of results 
        if(resArray.length === t.length) {
            //if the length of result-string  is greater than the length result - array
            let tempResultLength = Math.max(...resArray) - Math.min(...resArray)
            if( tempResultLength < res ) {
            //set the minimun result
            res = s.substr(Math.min(...resArray), Math.max(...resArray))
            console.log(res)
            }
        }
        
    }

    return res
};