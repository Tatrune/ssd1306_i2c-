#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main() {
    int dev = open("/dev/dummydriver", O_RDWR);
    if (dev == -1) {
        perror("Opening was not possible");
        return -1;
    }
    printf("Opening was successful!\n");
    const char data[22];
    while(1)
    {
        printf("Nhap: "); fgets(data, sizeof(data), stdin);
        
        // Ghi d? li?u v�o thi?t b?
        ssize_t bytes_written = write(dev, data, strlen(data));
        if (bytes_written == -1) {
            perror("Writing to device failed");
            close(dev);
            return -1;
        }

        printf("Successfully written %ld bytes to the device.\n", bytes_written);
        printf("data = %s\n", data);
    }
    close(dev);
    return 0;
}
