#include <bits/stdc++.h>

using namespace std;
int freq=0;
char ch[3];
void ask(int n)
{
    printf("%d\n", n);
    fflush(stdout);
    scanf("%s", ch);
    if (ch[0] == 'y')
    {
        printf("composite\n");
        fflush(stdout);
        exit(0);
    }
}

int main(){
	int primes[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
	ask(4);
	ask(9);
	ask(25);
	ask(49);
	for(int i=0;i<15;i++){
		printf("%d\n", primes[i]);
        fflush(stdout);
        scanf("%s", ch);
        if (ch[0] == 'y')
        {
            freq++;
        }
        if (freq > 1)
        {
            printf("composite\n");
            fflush(stdout);
            return 0;
        }
	}
	printf("prime\n");
    fflush(stdout);
    
	return 0;

}	