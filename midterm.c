# include <stdio.h>
# include <string.h>

int main()
{
    // int n;
    // scanf("%d", &n);
    // int ar[n];
    // for(int i=0; i<n; i++)
    // {
    //     scanf("%d", &ar[i]);
    // }
    // int count_1=0, count_2=0;
    // for(int i=0; i<n; i++)
    // {
    //     if(ar[i] % 2==0){
    //         count_1++;
    //     }
    //     if(ar[i] % 3==0){
    //         count_2++;
    //     }
    //     if(ar[i]%2==0 && ar[i]%3==0){
    //         count_2--;
    //     }
    // }

    // printf("%d %d", count_1, count_2);

    // char a[100001];
    // scanf("%s", a);
    
    // int C_count = 0;
    // for(int i = 0; a[i] !='\0'; i++)
    // {
    //    if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u')
    //     {
    //        C_count ++;
    //     }
    // }
    // printf("%d", C_count);

    // int n;
    // scanf("%d", &n);

    // for (int i = 0; i < n; i++) {
    //     int M1, M2, D;
    //     scanf("%d %d %d", &M1, &M2, &D);
        
    //     int original_days = D;

    //     int new_days = (M1*D)/(M1+M2);

    //     int fewer_days = original_days - new_days;
        
    //     printf("%d\n", fewer_days);
    
    // }

    // int n, a;
    // scanf("%d %d", &n, &a);
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=1; j<=a; j++){
    //         printf("%d ", j);
    //     }
    //     printf("\n");
    // }
    
    // int n;
    // scanf("%d", &n);
    
    // while(n--)
    // {
    //     char c[10001];
    //     scanf("%s", c);

    //     int capital=0, small=0, digit=0;

    //     for(int i=0; c[i] !='\0'; i++)
    //     {
    //         if (c[i] >= 'A' && c[i] <= 'Z') {
    //             capital ++;
    //         } 
    //         else if (c[i] >= 'a' && c[i] <= 'z') {
    //             small ++;
    //         } 
    //         else if (c[i] >= '0' && c[i] <= '9') {
    //             digit ++;
    //         }
    //     }
    //     printf("%d %d %d\n", capital, small, digit);
    // }

    // char s[100];
    // scanf("%s", s);
    // int cnt[26]={0}; 
    // for(int i=0; i < strlen(s); i++)
    // {
    //     int value = s[i]-'a';
    //     cnt[value]++;
    // }
    // for(int i=0; i<26; i++)
    // {
    //     if(cnt[i] !=0){
    //         printf("%c - %d\n", i+'a', cnt[i]);
    //     }
    // }

    // int T;
    // scanf("%d", &T); 
    // while (T--) {
    //     int N, X;
    //     scanf("%d", &N);
        
    //     int A[N];
    //     for (int i = 0; i < N; i++) {
    //         scanf("%d", &A[i]);
    //     }
        
    //     scanf("%d", &X);
        
    //     int found = 0;
        
    //     for (int i = 0; i < N; i++) {
    //         if (A[i] == X) {
    //             found = 1;
    //             break;
    //         }
    //     }
        
    //     if (found) {
    //         printf("YES\n");
    //     } else {
    //         printf("NO\n");
    //     }
    // }

    return 0;
}

// 4
// 10 5 15
// 4 0 5
// 4 1 5
// 7 1000 1

// 2
// 6
// 1 2 3 4 5 6
// 35
// 10 20 30 40 50
// 70