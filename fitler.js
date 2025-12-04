const users = [
  { name: "Roshan", role: "Engineer", active: true },
  { name: "Dinesh", role: "Designer", active: false },
  { name: "Mahesh", role: "Engineer", active: false },
  { name: "Priya", role: "Engineer", active: true }
];
// const activeUsers = users.filter((user)=> user.role === "Engineer" && user.active ===  true).sort((a, b)=> a.name.localeCompare(b.name));
// console.log(activeUsers);

// const ordereduser = users.sort((a,b)=> a.name.localeCompare(b.name))
// console.log(ordereduser)

const searchtext = "ro"

// const notactiveusers= users.filter((user)=> user.role === "Engineer" && user.active === true).sort((a,b)=> b.name.localeCompare(a.name))
// console.log(notactiveusers);


const searchresult = users.filter((user)=> user.name.toLowerCase().includes(searchtext.toLowerCase()));
console.log(searchresult);




function dynamicfilters(searchtext){
    return users.filter((user)=> user.name.toLowerCase().includes(searchtext.toLowerCase()) )
}

// console.log(dynamicfilters("r"));
// console.log(dynamicfilters("ro"));
// console.log(dynamicfilters("ma"));
// console.log(dynamicfilters("pr"));
// console.log(dynamicfilters("na"));
