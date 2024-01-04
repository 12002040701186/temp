function swap(arr,i,j)
{
  let t=arr[i];
  arr[i]=arr[j];
  arr[j]=t;
}
function sorted(arr)
{
  for(let i=1;i<arr.length;i++)
  {
    if(arr[i]<arr[i-1])
    return false;
     
  }
  return true;

}
function func(arr,c,idx,c1)
{
  
if(c==10)
return 100000;
  if(sorted(arr))
      return c1;
   let left=(idx - arr[idx] + arr.length)%arr.length;
     swap(arr,left,idx);
   let a =func(arr,c+1,idx,c1+1);
    swap(arr,left,idx);
   let right=(idx + arr[idx] + arr.length)%arr.length;ls
  swap(arr,right,idx);
   let b =func(arr,c+1,idx,c1+1);
swap(arr,right,idx);
  let d=func(arr,c+1,idx+1,c1);
  return Math.min({a,b,d});

}


function ArrayChallenge(arr) { 

return func(arr,0,0,0);
 
  // return arr; 

}
   
// keep this function call here 
console.log(ArrayChallenge(readline()));