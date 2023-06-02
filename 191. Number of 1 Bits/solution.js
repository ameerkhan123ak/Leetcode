let hammingWeight = function(n)
{
    let count = 0;
    for(let i=1;i<=32;i++)
    {
        count += n&1;
        n = n>>1;
    }
    return count;
};

let n = 00000000000000000000000000001011;
console.log(hammingWeight(n));