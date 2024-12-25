#include<stdio.h>

int main(){
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size = 0;
    while (1)
    {
        printf("===============MENU================\n");
        printf("1. Enter number of element\n");
        printf("2. show array\n");
        printf("3. MAX value, MIN value");
        printf("4. Sum of all elements\n");
        printf("5. add to the end of array\n");
        printf("6. remove from array\n");
        printf("7. Descending arrangement\n");
        printf("8. find the value(Linear search)\n");
        printf("9. print out all PRIME value\n");
        printf("10. ascending arrangement\n");
        printf("11. exit\n");
        printf("===================================\n");

        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice < 1 || choice > 11)
        {
            printf("Invalid choice\n");
            continue;
        }

        switch (choice)
        {
        case 1:
            int n;
            printf("enter he number of elements: ");
            scanf("%d", &n);
            size = n;
            for (int i = 0; i < size; i++)
            {
                printf("enter element %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
            break;
        case 2:
            if (size == 0)
            {
                printf("array is empty\n");
            }else{
                for (int i = 0; i < size; i++)
                {
                    printf("arr[%d]: %d, ",i, arr[i]);
                }
            }
            printf("\n");
            break;
        case 3:
            int MAX, MIN;
            MAX = arr[0];
            MIN = arr[size - 1];
            for (int i = 0; i < size; i++)
            {
                if (arr[i] > MAX)
                {
                    MAX = arr[i];
                }
                if (arr[i] < MIN)
                {
                    MIN = arr[i];
                }
            }
            printf("max value: %d\n",MAX );
            printf("min value: %d\n", MIN);
            break;
        case 4:
            int sum = 0;
            for (int i = 0; i < size; i++)
            {
                sum += arr[i];
            }
            printf("sum of all elements: %d\n", sum);
            break;
        case 5:
            int addValue;
            printf("Enter the value to add: ");
            scanf("%d", &addValue);
            arr[size] = addValue;
            size++;
            printf(" added\n");
            printf("new array: ");
            for (int i = 0; i < size; i++)
            {
                printf("%d ", arr[i]);
            }printf("\n");
            break;
        case 6:
            int removeIndex;
            printf("enter the index to remove: ");
            scanf("%d", &removeIndex);
            if (removeIndex < 0 || removeIndex >= size)
            {
                printf("index out of range\n");
            }else{
                for (int i = removeIndex; i < size - 1; i++)
                {
                    arr[i] = arr[i+1];
                }size--;
                printf("removed\n");
                printf("new array: ");
                for (int i = 0; i < size; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
            break;
        case 7:
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size - 1 - i; j++)
                {
                    if (arr[j]< arr[j +1])
                    {
                        int temp = arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
                    
                }
                
            }
            printf("array afte sort: ");
            for (int i = 0; i < size; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
        case 8:
            int search;
            int found = 0;
            printf("enter the value to search: ");
            scanf("%d", &search);
            for (int i = 0; i < size; i++)
            {
                if (arr[i]==search)
                {
                    printf("value %d is at index %d\n", search, i);
                    found = 1;
                }
                
            }if (found == 0)
            {
                printf("value %d not found\n", search);
            } 
            break;
        case 9:
            
            int Found = 0;
            for (int i = 0; i < size; i++) {
                if (arr[i] >1 && arr[i] % 2 != 0) {
                    printf("%d ", arr[i]);
                    Found = 1;
                }
            }
            if (!Found) {
                printf("No prime numbers in the array\n");
            } else {
                printf("\n");
            }
            break; 
        case 10:
            for (int i = 0; i < size; i++)
            {
                int min = arr[i];
                for (int j = i + 1; j < size; j++)
                {
                    if (arr[j] < min)
                    {
                        min = arr[j];
                        arr[j] = arr[i];
                        arr[i] = min;
                    }
                }
            }
            printf("array after sort: ");
            for (int i = 0; i < size; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");   
        default:
            printf("goodbye\n");
            break;
        }
    }
    
}