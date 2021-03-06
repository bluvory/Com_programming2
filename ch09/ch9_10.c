# include <stdio.h>
# include <string.h>
# pragma warning (disable:4996)

// 시, 분 초에 해당하는 정수값을 매개변수로 전달받아
// hh:mm:ss 형식의 문자열로 만들어 리턴

int time(int h, int m, int s, char*str) {

    if (h > 24 || h < 1 || m>59 || m < 1 || s>59 || s < 1)
        return -1;

    else {
        str[0] = h / 10 + '0';
        str[1] = h % 10 + '0';
        str[2] = ':';
        str[3] = m / 10 + '0';
        str[4] = m % 10 + '0';
        str[5] = ':';
        str[6] = s / 10 + '0';
        str[7] = s % 10 + '0';
        str[8] = '\0';

        int strlength = strlen(str);
        return strlength;
    }

}

int main(void) {

    int h, m, s;
    printf("시 분 초? ");
    scanf("%d %d %d", &h, &m, &s);

    char *strt[8];
    int timelen = time(h, m, s, strt);
    if (timelen == -1)
        printf("시간이 잘못 입력되었습니다.");
    else
        printf("%s", strt);

}