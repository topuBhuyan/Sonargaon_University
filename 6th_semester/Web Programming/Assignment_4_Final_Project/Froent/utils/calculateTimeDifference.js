// // const post = new Date("2024-08-19T03:39:02.000Z hours ago");

// function timeDifference(dateTimeString) {
//     const now = new Date();
//     const past = new Date(dateTimeString);

//     console.log(timeDifference);

//     let timediff = Math.floor(now - past) / 1000;

//     const days = math.floor(timediff / (60 * 60 * 24));

//     timediff = timediff - days * 24 * 60 * 60;

//     const hours = Math.floor(timediff/(60 * 60));

//     timediff = timediff - hours*60*60;

//     const minutes = Math.floor(timediff/60);

//     const seconds = timediff - minutes*60;

//     let result = "";

//     // string concatenation 

//     if(days > 0) {
//         result = result + `${days} days`;
//     } else if (hours > 0) {
//         result = result + `${hours} hours`;
//     }else if (minutes > 0) {
//         result = result + `${minutes} minutes`;
//     } else {
//         result = result + `${seconds} seconds`;
//     }
//     return result;
// }

//  timeDifference();

function timeDifference(dateTimeString) {
    const now = new Date();
    const past = new Date(dateTimeString);
  
    let diffInSeconds = Math.floor((now - past) / 1000);
  
    const days = Math.floor(diffInSeconds / (24 * 3600));
    diffInSeconds -= days * 24 * 3600;
  
    const hours = Math.floor(diffInSeconds / 3600);
    diffInSeconds -= hours * 3600;
  
    const minutes = Math.floor(diffInSeconds / 60);
    const seconds = diffInSeconds % 60;
  
    let result = "";
    if (days > 0) {
      result += `${days} day${days !== 1 ? "s" : ""}`;
    } else if (hours > 0) {
      result += `${hours} hour${hours !== 1 ? "s" : ""}`;
    } else if (minutes > 0) {
      result += `${minutes} minute${minutes !== 1 ? "s" : ""}`;
    } else {
      result += `${seconds} second${seconds !== 1 ? "s" : ""}`;
    }
  
    return result;
  }