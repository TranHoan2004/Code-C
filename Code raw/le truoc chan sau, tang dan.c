#include <string.h>
#include <stdio.h>
#include <ctype.h>
int main() {
    void sortArray(int arr[], int n) {
        int temp;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] > arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sortArray(arr, n);
    int odd[n], even[n], i, j = 0, k = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[j] = arr[i];
            j++;
        } else {
            odd[k] = arr[i];
            k++;
        }
    }
    printf("\nOUTPUT:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", odd[i]);
    }
    for (i = 0; i < j; i++) {
        printf("%d ", even[i]);
    }
    return 0;
}



