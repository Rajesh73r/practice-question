/** for a given array with prices of 5 item -->> [244,200,765,893,900]
 * All item have an offer 10% OFF on item.Change the array store final price after applying offer.
 * 
 */

let item = [244, 200, 765, 893, 900];
function calculateOffer(price) {
    return price > 600;
}
// item = item.find(calculateOffer);
item = item.reduce((accumulatedValue, currentItem) => accumulatedValue * currentItem, 1);
// for(let i = 0;i<item.length;i++){
//     let offer = item[i] /10;
//     item[i] -= offer; 
// }
// console.log(`after offer ${item.join("\n")}`);
console.log(item);



// map reduce filter find