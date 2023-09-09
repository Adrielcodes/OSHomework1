void Collatz_Sequence (int n) {
    
    printf("From Child%d,pid=%d init: number=%d", n%2+1, getpid() , n);

    while(n != 1) {
        if(n%2 == 0) {
            n= n/2;
        } 
        else {
            n = 3*n + 1;
        }
        printf("From Child%d,number=%d", n%2+1, n);
    }

    printf("From Child%d,pid=%d Im done!", n%2+1, getpid());

    printf("All my Children Complete");

}

int main(int argc, char* argv[]){
    
    int number = scanf();
    Collatz_Sequence(number);
}