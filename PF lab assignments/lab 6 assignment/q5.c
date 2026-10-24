#include <stdio.h>

void printSensorData(void *ptr, char type);
int main(){
    float temp =31.0;
    int motion_status = 0;
    char door_value = 'C';

    printSensorData(&temp, 'f');
    printSensorData(&motion_status, 'i');
    printSensorData(&door_value, 'c');
    printSensorData(&temp, 'x');

    return 0;
}

void printSensorData(void *ptr, char type){
    switch (type)
    {
    case 'f':
        float *temp = (float *)ptr; // pointer casting
        printf("Temperature in Celsius: %.2f\n", *temp);
        break;
    case 'i':
        int *motion = (int *)ptr;
        if (*motion) printf("Motion detected.\n");
        else printf("No motion detected\n");
        break;
    case 'c':
        char *door = (char *)ptr;
        if (*door == 'O') printf("Door Open\n");
        else if (*door == 'C')  printf("Door Closed\n");
        break;
    
    default:
        printf("Invalid type\n");
        break;
    }
}