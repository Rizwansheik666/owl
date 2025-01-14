/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    var toBe = function(value){
        if(value===val){
            return true
        }
        else{
            throw new Error("Not Equal")
        }
    }
    var notToBe = function(value){
        if(value!==val){
            return true
        }
        else{
            throw new Error("Equal")
        }
    }
    return {
        toBe: toBe,
        notToBe: notToBe,
    };
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */