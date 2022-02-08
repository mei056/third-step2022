#include <stdio.h>
#include <math.h>

double avg(double data[], int n) {
    int i;
    double sum = 0.0;
    for (i = 0; i < n; i++)
        sum += data[i];
    return sum / n;
}

double dev(double data[], int n) {
    int i;
    double m = avg(data, n);
    double var = 0.0;
    for (i = 0; i < n; i++)
        var += (data[i] - m) * (data[i] - m);
    return sqrt(var / n);
}

int sum(double data[], int n) {
    int i;
    int sum = 0;
    for (i = 0; i < n; i++)
        sum += data[i];
    return sum;
}


int main() {
    double data1[] = { 65,80,67,35,58,60,72,75,68,92,36,50,25,85,46,42,78,62,84,70 };
    double data2[] = { 44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84 };
    int n = sizeof(data1) / sizeof(double);
    int i = sizeof(data2) / sizeof(double);

    printf("理科:平均=%.3f, 標準偏差=%.3f, 合計点=%d\n", avg(data1, n), dev(data1, n), sum(data1, n));

    printf("英語:平均=%.3f, 標準偏差=%.3f, 合計点=%d\n", avg(data2, i), dev(data2, i), sum(data2, i));

    printf("\n");
    
    int a, b, c;
    int tmp, ex;
    float sum, sum2, sum3, sum4, ave, ave2, sigma, sigma2;

    sum = 0;
    sum2 = 0;
    sum3 = 0;
    sum4 = 0;

    for (a = 0; a < n; a++) {
        sum += data1[a];
        sum2 += data1[a] * data1[a];

        sum3 += data2[a];
        sum4 += data2[a] * data2[a];
    }

    ave = sum / n;
    sigma = sqrt((n * sum2 - (sum * sum)) / n / (n - 1));

    ave2 = sum3 / n;
    sigma2 = sqrt((n * sum4 - (sum3 * sum3)) / n / (n - 1));

    
    for (a = 0; a < n; a++) {
        
        printf("理科:%f\n", (data1[a] - ave) / sigma * 10 + 50);

        printf("英語:%f\n", (data2[a] - ave2) / sigma * 10 + 50);
    }

    printf("\n");

    for (b = 0; b < n - 1; b++) {
        ex = 0;
        for (c = 0; c < n - b - 1; c++) {
            if (data1[c] > data1[c+1]) {
                tmp = data1[c];
                data1[c] = data1[c+1];
                data1[c+1] = tmp;
            }
        }
    }
    for (b = 0; b < n; b++)
        printf("理科:%f\n", data1[b]);

    for (b = 0; b < i; ++b) {
        for (c = 0; c < i - b - 1; c++) {
            if (data2[c] > data2[c+1]) {
                tmp = data2[c];
                data2[c] = data2[c+1];
                data2[c+1] = tmp;
            }
        }
    }
    for (b = 0; b < i; b++)
        printf("英語:%f\n", data2[b]);


}         
