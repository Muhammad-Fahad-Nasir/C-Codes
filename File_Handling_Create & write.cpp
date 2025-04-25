
#include <stdio.h>

int main() {
   
    FILE* file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open file\n");
        return 1;
    }
    
  
    char* data = "MUHAMMAD FAHAD ";
    fwrite(data, sizeof(char), 14, file);

    // Close the file
    fclose(file);

   
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file\n");
        return 1;
    }

  
    char buffer[15];
    fread(buffer, sizeof(char), 14, file);
    buffer[14] = '\0';
    printf("Read from file: %s\n", buffer);

   
    fclose(file);

    return 0;
}

