int main(void){
    int X = 0, N = 0, sum = 0;
    scanf("%d", &X);
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        int a= 0, b = 0;
        scanf("%d%d", &a, &b);
        sum += a * b;
    }
    if (X == sum){
        puts("Yes");
    }
    else{
        puts("No");
    }
}