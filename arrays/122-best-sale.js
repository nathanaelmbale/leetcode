/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let profit = 0;
    let l=0;
    let r=1;

    //loop over all values
    while(r<prices.length) {
        //we check if the next day will be a profit if w?-
        if( prices[r] > prices[l]) {
        //when true profit = profit + (right  - left) and move the right
            profit =  prices[r] - prices[l] + profit
        }
        //when not move right and left
        l++
        r++
    }
    return profit
};