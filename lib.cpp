//
// Created by Enrico Muller on 29/11/2021.
//


int funzione (int n){
    for (int i = 2; i <= n; i++){
        int temp = n % i;
        if (temp == 0 && i != n){
            return 0;
        }
    }
    return 1;
}

int test (int n, int i){
    int temp = n % i;
    if (temp == 0 && i != n){
        return 0;
    }else if (temp == 0 && i == n){
        return 1;
    }
    else {
        test(n, i + 1);
    }
}
