#include <stdio.h>

int main(){
    int choice = 0;
    int sub_choice = 0;
    char name[50] = "";

    printf("Select a conversation category\n1.Greeting\n2.Study\n3.Weather\n4.Help\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1: 
        printf("Enter your name: ");
        scanf("%s", name);
        printf("1.Hello\n2.How are you\n3.Goodbye\n");
        printf("Enter your choice: ");
        scanf("%d", &sub_choice);
        switch (sub_choice){
            case 1:
            printf("Hello, %s", name);
            // go on to chat
            break;

            case 2:
            printf("How are you %s?", name);
            // go on to chat
            break;

            case 3: 
            printf("Goodbye %s.", name);
            break;

            default:
            printf("Invalid choice\n");
        }
        break;

        case 2:
        printf("1.Programming\n2.Mathematics\n3.AI\n");
        printf("Enter your choice: ");
        scanf("%d", &sub_choice);

        switch (sub_choice){
            case 1:
            printf("What topic would u like to study in programming today?");
            // input choice and explain/help with the topic
            break;

            case 2:
            printf("What topic would u like to study in mathematics today?");
            // go on to chat
            break;

            case 3: 
            printf("What topic would u like to study in AI today?");
            break;

            default:
            printf("Invalid choice\n");
        }
        break;
        case 3: 
        printf("Would you like to know about:\n1.Today's weather\n2.Tomorrow's weather\n3.Weather forecast\n");
        printf("Enter your choice: ");
        scanf("%d", &sub_choice);

        switch (sub_choice){
            case 1:
            printf("Temp: 29C, partly cloudy");
            // use APIs to get the real time data on today's weather
            break;

            case 2:
            printf("Temp:30C, partly cloudy");
            // use APIs to get the real time data on tomorrow's weather
            break;

            case 3: 
           printf("Temp:29C\nHumidity:70%\nPrecipitation:20%\nWind: 19 km/h\n");
            // use APIs to get the real time data on today's weather forecast
            break;

            default:
            printf("Invalid choice\n");
        }
        break;

        case 4:
        printf("Would you like help about:\n1.About chatbot\n2.Command\n3.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &sub_choice);

        switch (sub_choice){
            case 1:
            printf("I am a simple rule based chatbot that responds to choices!");
            // details about the chatbot
            break;

            case 2:
            printf("which command would u like help with?");
            // process that command. Give output like if it is an error, give a fix.
            break;

            case 3: 
           printf("Program ended");
            // exit program
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