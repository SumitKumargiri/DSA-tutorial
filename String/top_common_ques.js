//---- reverse String --------

// let str = 'madam';
// let reverse = str.split(' ').reverse().join(' ');
// console.log(reverse);

// -------- check polindrome ------------

// let str = "gog";
// let pali = str.split('').reverse().join('');
// if(str===pali){
//     console.log("palindrome number");
// }else{
//     console.log("not palindrome number");
// }

// ------- count string ----------

let str = 'Sumit Kumar Giri';
// console.log(str.length);  // count character using space also
let count=0;
for(let char of str){
    if("aeiou".includes(char)){
        count++;
    }
}
console.log(count);







