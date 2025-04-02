const body = document.getElementsByTagName("body")[0]

function setColor(name) {
    body.style.backgroundColor = name;
}
function setRandomColor(){
    const R = getRandomNumber();
    const G = getRandomNumber();
    const B = getRandomNumber();
    setColor(`rgb(${R},${G},${B})`);
}
function getRandomNumber(start = 0,end = 256){
    return (start + Math.random() * 10000) % end;
}