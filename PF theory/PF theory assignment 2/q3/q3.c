#include <stdio.h>

void temp_input(int r, int c, float temp[r][c]);
void sensor_analysis(int r, int c, float temp[r][c], float average[r]);
int find_highest_avg(int r, float average[r]);


int main(){
    int sensors = 0;
    int h_reading = 0;

    printf("Enter total sensors and total hourly readings taken from each: ");
    scanf("%d %d", &sensors, &h_reading);

    float temperature[sensors][h_reading];
    float average[sensors];
    // using dma 
    // flaot **temp = calloc(sensors, sizeof(flaot *));
    // for (int i = 0; i<sensors; i++){
    // temp[i] = calloc(h_readings, sizeof(float));
    // }

    temp_input(sensors, h_reading, temperature);
    sensor_analysis(sensors, h_reading, temperature, average);
    printf("Highest Average: Sensor %d (%.2f)", find_highest_avg(sensors, average)+1, average[find_highest_avg(sensors, average)]);

    return 0;
}

void temp_input(int r, int c, float temp[r][c]){ // void so returns nothing
    for (int i = 0; i < r; i++){
        for (int j =0; j<c; j++){
            printf("Enter temperature for sensor %d at %d", i+1, j+1);
            scanf("%f", &temp[i][j]);
        }
    }
}

void sensor_analysis(int r, int c, float temp[r][c], float average[r]){ 
    float highest = 0.0;
    float lowest = 0.0;
    float total =0;
    float avg = 0.0;
    int c_count = 0; // to count critical
    int w_count = 0;// to count warning
    int max_count = 0; // to find max consecutive
    for (int i =0; i<r; i++){
        highest = temp[i][0];
        lowest = temp[i][0];
        max_count = 0;
        total = 0.0;
        avg = 0.0;
        int c_count = 0;
        int w_count = 0;
        int max_count = 0;
        for (int j =0; j<c; j++){
            total += temp[i][j];
            if (temp[i][j] > highest){
                highest = temp[i][j];
            }
            else if (temp[i][j] <lowest){
                lowest = temp[i][j];
            }
            if (temp[i][j] >= 35){
                max_count +=1; // counts max consecutive, if not consecutive it resets it later
                if (temp[i][j] >= 40){
                c_count ++;
                }
                else if ((temp[i][j] >=35) && (temp[i][j]<=39)){
                w_count ++;
                }
            }
            else max_count = 0;
        }
        average[i] = avg = total/(float)c;
        printf("Sensor %d: Total = %.2 Average = %.2f Max = %.2f Min = %.2f\n", i+1, total, average[i], highest, lowest);
        printf("          Critical = %d Warning =%d  Longest hot streak=%d\n", c_count, w_count, max_count);
    }
}

int find_highest_avg(int r, float average[r]){ // now loops over the avg array to find max avg
    int highest_avg = 0;
    for (int i = 0; i<r; i++){
        if (average[i]>average[highest_avg]){
            highest_avg = i; // gets the index and we can use it in the avg array to find the temp at that index
        }
    }
    return highest_avg;
}