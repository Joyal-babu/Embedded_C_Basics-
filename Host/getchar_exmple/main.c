#include <stdio.h>

int main() {
    int ch;

    printf("Enter text (press Enter to stop):\n");
    fflush(stdout);

    while ((ch = getchar()) != '\n' && ch != EOF) {
        printf("You entered: %c\n", ch);
    }

    printf("\"press ENTER to exit the application\"\n");
    	while(getchar() != '\n')
    	{

    	}

    return 0;
}
