/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {

    let five =[];

    for(i =0;i<arr.length;i++){
        five[i]= fn(arr[i],i);
    }
    return five;

    
};