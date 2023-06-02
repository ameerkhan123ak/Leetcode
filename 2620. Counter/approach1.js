let counterFunction = function(n)
{
    let counter = n;
    return function()
    {
        counter++;
        return counter-1;
    }
};
let n = 10;
let solution = counterFunction(n);
for(let i=0;i<3;i++)
{
    console.log(solution());
}