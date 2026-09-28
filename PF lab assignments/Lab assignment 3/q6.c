#include <stdio.h>

int main(){
    int problem_type = 0;
    int algorithm = 0;
    //problem types are Classification, Regression, Clustering, and Computer Vision, and each problem type
    //has several algorithms.
    printf("Enter problem type: (1 for Classification, 2 for Regression, 3 for Clustering, 4 for Computer Vision) ");
    scanf("%d", &problem_type);

    switch(problem_type){
        case 1:
        printf("choose algorithm: (1 for Logistic Regression, 2 for Decision Tree, 3 for KNN)");
        scanf("%d", &algorithm);
        switch(algorithm){
            case 1:
            printf("You have selected Logistic Regression\n");
            break;
            case 2:
            printf("You have selected Decision Tree\n");
            break;
            case 3:
            printf("You have selected KNN\n");
            break;
            default:
            printf("Invalid choice\n");
        }
        break;
        case 2:
        printf("choose algorithm: (1 for Linear Regression,2 for Polynomial Regression, 3 for SVR)");
        scanf("%d", &algorithm);
        switch(algorithm){
            case 1:
            printf("You have selected Linear Regression\n");
            break;
            case 2:
            printf("You have selected Polynomial Regression\n");
            break;
            case 3:
            printf("You have selected SVR\n");
            break;
            default:
            printf("Invalid choice\n");
        }
        break; 
        case 3: 
        printf("choose algorithm: (1 for K-Means, 2 for Hierarchical Clustering, 3 for DBSCAN)");
        scanf("%d", &algorithm);
        switch(algorithm){
            case 1:
            printf("You have selected K-Means\n");
            break;
            case 2:
            printf("You have selected Hierarchical Clustering\n");
            break;
            case 3:
            printf("You have selected DBSCAN\n");
            break;
            default:
            printf("Invalid choice\n");
        }
        break;
        case 4:
        printf("choose algorithm: (1 for CNN, 2 for YOLO, 3 for R-CNN)");
        scanf("%d", &algorithm);
        switch(algorithm){
            case 1:
            printf("You have selected CNN\n");
            break;
            case 2:
            printf("You have selected YOLO\n");
            break;
            case 3:
            printf("You have selected R-CNN\n");
            break;
            default:
            printf("Invalid choice\n");
        }
        break;
        default:
        printf("Invalid choice\n");

    }
    return 0;
}