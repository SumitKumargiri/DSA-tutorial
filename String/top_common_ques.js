//---- reverse String --------

// let str = 'madam';
// let reverse = str.split(' ').reverse().join(' ');
// console.log(reverse);

// -------- check polindrome ------------

let str = "gog";
let pali = str.split('').reverse().join('');
if(str===pali){
    console.log("palindrome number");
}else{
    console.log("not palindrome number");
}
