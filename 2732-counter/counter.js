/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    let cnt=n;
    return function() {
        cnt++;
        return cnt-1;
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */