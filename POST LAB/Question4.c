#include <stdio.h>
int main(){
    float student_marks[4][2], currentMark, highestMid, lowestMid, highestFinal, lowestFinal,
    highestTotal, lowestTotal, totalMid, totalFinal, highestOverall, lowestOverall;
    for (int i = 0; i<4; i++){
        for (int j = 0; j<2; j++){
            if (j == 0){
                printf("Enter Mid marks for Student %d: ", i+1);
                scanf("%f", &student_marks[i][j]);
            }
            else{
                printf("Enter Final marks for Student %d: ", i+1);
                scanf("%f", &student_marks[i][j]);                
            }
        }
    }
    highestMid = student_marks[0][0];
    lowestMid = highestMid;
    highestFinal = student_marks[0][1];
    lowestFinal = highestFinal;
    totalMid = highestMid;
    totalFinal = highestFinal;
    if (highestMid > highestFinal){
        highestOverall = highestMid;
        lowestOverall = highestFinal;
    }
    else{
        highestOverall = highestFinal;
        lowestOverall = highestMid;
    }

    printf("\nTotal Marks of Student 1: %.2f\n", highestMid + highestFinal);

    for (int i = 1; i<4; i++){
        printf("Total Marks of Student %d: %.2f\n", i+1, student_marks[i][0]+student_marks[i][1]);
        for (int j = 0; j<2; j++){
            currentMark = student_marks[i][j];
            if (currentMark > highestOverall)
                highestOverall =  currentMark;
            if (currentMark < lowestOverall)
                lowestOverall =  currentMark;
            if (j == 0){
                if (currentMark > highestMid)
                    highestMid =  currentMark;
                if (currentMark < lowestMid)
                    lowestMid = currentMark;
                totalMid +=  currentMark;
            }
            else{
                if (currentMark > highestFinal)
                    highestFinal =  currentMark;
                if (currentMark < lowestFinal)
                    lowestFinal = currentMark;
                totalFinal +=  currentMark;
        
            }
        }
    }

    printf("\nHighest:\nMid Marks: %.2f\tFinal Marks: %.2f\tOverall: %.2f\n\n", highestMid, highestFinal, highestOverall);
    printf("Lowest:\nMid Marks: %.2f\tFinal Marks: %.2f\tOverall: %.2f\n\n", lowestMid, lowestFinal, lowestOverall);
    printf("Average:\nMid Marks: %.2f\tFinal Marks: %.2f", totalMid/4, totalFinal/4);
}
