# include <stdio.h>
# include <string.h>
int main()
{
    // copy two string

    // char a[100], b[100];
    // scanf("%s %s", a,b);
    // for(int i=0; i<=strlen(b); i++)
    // {
    //     a[i] = b[i];
    // }

    // strcpy(a,b);
    // printf("%s %s", a,b);


    // char a[100], b[100];
    // scanf("%s %s", a,b);
    // int value = strcmp(a,b);
    // printf("%d", value);

    // if(value>0)
    // {
    //     printf("A is boro\n");
    // }
    // else if(value<0)
    // {
    //     printf("B is boro\n");
    // }
    // else
    // {
    //     printf("same\n");
    // }

    // int i=0;
    // while(1)
    // {
    //     if(a[i]=='\0' && b[i]=='\0')
    //     {
    //         printf("same");
    //         break;
    //     }
    //     else if(a[i]=='\0')
    //     {
    //         printf("a choto\n");
    //         break;
    //     }
    //     else if(b[i]=='\0')
    //     {
    //         printf("b choto\n");
    //         break;
    //     }
    //     if(a[i]==b[i])
    //     {
    //         i++;
    //     }
    //     else if(a[i]<b[i])
    //     {
    //         printf("a choto\n");
    //         break;
    //     }
    //     else{
    //         printf("b choto\n");
    //         break;
    //     }
    // }

    // string concat

    // char a[200], b[100];
    // scanf("%s %s", a,b);
    // strcat(a,b);
    // int k = strlen(a);
    // for(int i=0; i<strlen(b); i++)
    // {
    //     // printf("%d ", i);
    //     a[k] = b[i];
    //     k++;
    // }
    // printf("%s %s", a,b);s

    // array counting

    // int n;
    // scanf("%d", &n);
    // int a[n];
    // for(int i=0; i<n; i++)
    // {
    //     scanf("%d", &a[i]);
    // }

    // int zero=0, one=0;
    // for(int i=0; i<n; i++)
    // {
    //     if(a[i]==0)
    //     {
    //         zero++;
    //     }
    //     if(a[i]==1){
    //         one++;
    //     }
    //     // printf("%d", a[i]);
    // }
    // printf("0- %d\n", zero);
    // printf("1- %d\n", one);

    // int n;
    // scanf("%d", &n);
    // int a[n];
    // for(int i=0; i<n; i++)
    // {
    //     scanf("%d", &a[i]);
    // }

    // int count[4]={0};
    // for(int i=0; i<n; i++)
    // {
    //    int value = a[i];
    //    count[value]++;
    // }

    // printf("0- %d\n", count[0]);
    // printf("1- %d\n", count[1]);
    // printf("2- %d\n", count[2]);

    // for(int i=0; i<=3; i++)
    // {
    //     printf("%d - %d\n", i, count[i]);
    // }


    // char s[100];
    // scanf("%s", s);
    // int cnt[26]={0}; 
    // for(int i=0; i < strlen(s); i++)
    // {
    //     // printf("%c-\n", s[i]);
    //     int value = s[i]-'a';
    //     cnt[value]++;
    // }
    // printf("%d", cnt[0]);
    // for(int i=0; i<26; i++)
    // {
    //     if(cnt[i] !=0){
    //         printf("%c - %d\n", i+'a', cnt[i]);
    //     }
    // }

    // for(int i=0; i<strlen(s); i++)
    // {
    //     int value = s[i]-97;
    //     if(cnt[value] !=0){
    //         printf("%c- %d\n", value +'a', cnt[value]);
    //     }
    //     cnt[value] = 0;
    // }
    return 0;
}

// 9
// 1 2 1 3 0 9 0 5 0 