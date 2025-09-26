// console.log("hello");



// let num = arr.map(el => {
//     return el**2;
// });

// let arr_sum = arr.reduce((sum,el)=>(sum+el));

// let arr_avg = arr.reduce((avg,el)=>((avg+el)/2));

// let added = arr.map(el => el+5);

// let str = "lokesh";
// let str_arr = [...str];

// let upper = str_arr.map(el => el.toUpperCase());

let arr = [10,20,25,56,77,55]

let dandr_arg = (arr,...arg)=>([
    ...arr,
    ...arg.map(el => (2*el))
])

console.log(dandr_arg(arr,4,4,5,7))