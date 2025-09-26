// let btn = document.createElement("button");
// btn.innerText="click me!";
// document.querySelector("body").append(btn);
// btn.id="btn";

// let input = document.createElement("input");
// input.placeholder="username";
// input.type="text";
// input.id="input";
// document.querySelector("body").prepend(input);

// btn.classList.add("style");

// let body = document.querySelector("body");
// window.addEventListener("scroll",function onScroll() {
//     console.log("page is scrolled");
// });

// window.addEventListener("load",function onScroll() {
//     console.log("page is loading");
// });

let heading = document.createElement("h1");
heading.innerText = "your_name";

let input = document.createElement("input");
input.placeholder = "enter your name";

document.querySelector("body").prepend(input);
document.querySelector("body").prepend(heading);

input.addEventListener("input", function display() {
  input.value = input.value.replace(/[^a-zA-Z\s]/g, "");
  heading.innerText = input.value;
});
// give me an object student with 4 students name class and roll number
