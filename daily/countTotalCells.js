/**
 * @param {number} n
 * @return {number}
 */
var coloredCells = function(n) {
    return 2*Math.pow(n, 2) - 2*n + 1;
};

console.log(coloredCells(1)); // 1
console.log(coloredCells(2)); // 5
console.log(coloredCells(3)); // 13
console.log(coloredCells(4)); // 25