Array.prototype.last = function() {
    let pos=this.length;
    if(pos==0){
            return -1;
    }
     return this[pos-1];
    
};

/**
 * const arr = [1, 2, 3];
 * arr.last(); // 3
 */