// ------------------ find the unique element in array without using biult-in methods --------------------

// let arr = [1,2,4,2,5,1,2,4,2,1,3,5,6,7,8,6,5];
// let uniquiearr = [];
// let isduplicate = false;

// for(let i=0; i<arr.length; i++){
//     isduplicate =false;
//     for(let j=0; j<uniquiearr.length; j++){
//         if(arr[i]===uniquiearr[j]){
//             isduplicate=true;
//             break;
//         }
//     }
//     if(!isduplicate){
//         uniquiearr[uniquiearr.length]=arr[i];
//     }
// }
// console.log(uniquiearr);


//------ sorting array without using built-in methods -----------

// let arr = [5,3,8,1,2,7,4,6];
// let temp = [];

// for(let i=0; i<arr.length-1; i++){
//     for(let j=0; j<arr.length-1-i; j++){
//         if(arr[j]>arr[j+1]){
//             temp=arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=temp;
//         }
//     }
// }
// console.log(arr);

// ---------- remove duplicate and sort array without using built-in methods ------------

// let arr = [5,3,8,1,2,7,4,6,3,2,5,1,4];
// let uniquiearr = [];
// let temp = [];
// let isduplicate = false;

// for(let i=0; i<arr.length; i++){
//     isduplicate = false;
//     for(let j=0; j<uniquiearr.length; j++){
//         if(arr[i]===uniquiearr[j]){
//             isduplicate=true;
//             break;
//         }
//     }
//     if(!isduplicate){
//         uniquiearr[uniquiearr.length]=arr[i];
//     }
// }

// for(let i=0; i<uniquiearr.length-1; i++){
//     for(let j=0; j<uniquiearr.length-1-i; j++){
//         if(uniquiearr[j]>uniquiearr[j+1]){
//             temp=uniquiearr[j];
//             uniquiearr[j]=uniquiearr[j+1];
//             uniquiearr[j+1]=temp;
//         }
//     }
// }
// console.log(uniquiearr);


//----------find the largest and smallest number in array without using built-in methods ------------
// let arr =  [34,78,2,95,46,73,82,56,12];
// let largest =arr[0];
// let smallest = arr[0];

// for(let i=0; i<arr.length; i++){
//     if(arr[i]>largest){
//         largest=arr[i];
//     }
//     if(arr[i]<smallest){
//         smallest=arr[i];
//     }
// }
// console.log(largest);
// console.log(smallest);



 
const arr = [54,32,1,69,23,87,12,45,99,4];
