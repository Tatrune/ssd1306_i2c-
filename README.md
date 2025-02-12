# ssd1306_i2c-Beaglebone Black
Connecting the SSD1306 LCD to the BeagleBone Black Using a Device Driver

## 1. Build the driver module and insert it into the kernel  
```sh
make
sudo insmod ssd1306.ko
sudo chmod 777 /dev/ssd1306
```
## 2.	Run the test program
```sh
    ./test
```
