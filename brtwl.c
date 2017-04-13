/*
Format:
./brtwl word1 word2 word3 ...
*/


#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int num = argc-1, mod, holder;
    int array[num];	// use dynamic memory
    int pow_num = pow(num, num);
    holder = num;
    int i,j;
    for(j=0; j<pow_num; j++){
    printf("%d:\t", j);
    holder = j;
        for(i=0; i<num; i++){
            mod = holder % num;
            holder -= mod;
            array[i] = mod;
            holder = holder / num;
        }
        for(i=0; i<num; i++){
            printf("%s", argv[array[i]+1]);
        }
    printf("\n");
    }
    return 0;
}

/*
Change: dyn mem
Add: all possibilities
Add: File stream, create a file including all possibilities
*/
