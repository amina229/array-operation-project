
#include <stdio.h>

#define Size 100

int main() {
    int arr[Size], n = 0, choice, i, value, pos,found;

    for(;;) {
        printf("1. Input Elements\n");
        printf("2. Display Elements\n");
        printf("3. Find Maximum\n");
        printf("4. Find Minimum\n");
        printf("5. Search Element\n");
        printf("6. Update Element at Position\n");
        printf("7. Delete Element from Position\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &n);
                printf("Enter %d elements:\n", n);
                for(i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                printf("Array elements:\n");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3: 
                int max = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] > max)
                        max = arr[i];
                }
                printf("Maximum: %d\n", max);
                break;
            

            case 4: 
                int min = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] < min)
                        min = arr[i];
                }
                printf("Minimum: %d\n", min);
                break;
            

            case 5:
                printf("Enter element to search: ");
                scanf("%d", &value);
                found=0;
                for(i = 0; i < n; i++) {
                    if(arr[i] == value){
                        found=1;
                        printf("Found at index %d\n", i);
                        break;
                    }
                }
                if(found==0) {
                    printf("Element not found\n");
                }
                break;

            case 6:
                printf("Enter position to update (0 to %d): ", n);
                scanf("%d", &pos);

                printf("Enter new value: ");
                scanf("%d", &value);
                arr[pos] = value;
                printf("Element updated.\n");
                break;

            case 7:

                printf("Enter position to delete (0 to %d): ", n - 1);
                scanf("%d", &pos);

                for(i = pos-1; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                printf("Element deleted.\n");
                break;

            case 8:
                printf("Exiting program.\n");
                return 0;
        }
    }

    return 0;
}
