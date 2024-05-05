#include <stdio.h>

int main (void){
    int i, j , n;

    struct {
        int hh; int mm; int ss;
    }cron[10], maior;

    scanf("%d", &n);
    for (int i = 0; i < n ; i++) {
        scanf("%d %d %d", &cron[i].hh, &cron[i].mm, &cron[i].ss);
    }

    maior = cron[0];
    for (int j = 1; j < n; j++) {
        if (cron[j].hh > maior.hh) {
            maior = cron[j];
        } else {
            if (cron[j].mm == maior.mm)
                if (cron[j].ss > maior.ss)
                    maior = cron[j];
        }
    }
    printf("%02d:%02d:%02d\n", cron[i].hh, cron[i].mm, cron[i].ss);        
}