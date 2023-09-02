//Leet-8: String to Integer 

/**
 * @param {string} s
 * @return {number}
 */
var myAtoi = function(s) {
    if(isNaN(parseInt(s))){
        return 0;
    }
    else if(parseInt(s) >= 2147483647){
        return 2147483647;
    }
    else if(parseInt(s) <= -2147483648){
        return -2147483648;
    }
    return parseInt(s)%(2147483648);
};