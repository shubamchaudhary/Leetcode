/**
 * @param {number} millis
 */
async function sleep(millis) {
   let p=new Promise(Reject=>setTimeout(Reject,millis));
        return p;
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */