sum = () =>{
    if(n==0){
        return 0;
    }
    return n+sum(n-1)
}

let n = 10