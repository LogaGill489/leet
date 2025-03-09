/**
 * @param {number[]} colors
 * @param {number} k
 * @return {number}
 */
var numberOfAlternatingGroups = function(colors, k) {
    let num = 0;
    let n = colors.length;

    for (let i = 0; i < n; i++) {
        let isValid = true;
        for (let j = 0; j < k - 1; j++) {
            let currIndex = (i + j) % n;
            let nextIndex = (i + j + 1) % n;
            if (colors[currIndex] === colors[nextIndex]) {
                isValid = false;
                break;
            }
        }
        if (isValid) num++;
    }
    
    return num;
}
console.log(poorIterNumberOfAlternatingGroups([1, 1, 2, 2, 1, 2, 1, 2], 2)); // 3
