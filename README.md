# ssd1306_i2c-Beaglebone Black
Connecting the SSD1306 LCD to the BeagleBone Black Using a Device Driver

## 1. Build device file   
```sh
dtc -O dtb -o oled.dtbo -b 0 -@ oled.dts
sudo cp oled.dtbo /lib/firmware/
sudo nano "uboot_overlay_addr4=/lib/firmware/oled.dtbo" >> /boot/uEnv.txt
reboot
```

## 2. Build the driver module and insert it into the kernel  
```sh
make
sudo insmod ssd1306.ko
sudo chmod 777 /dev/ssd1306
```

## 3.	Run the test program
```sh
    ./test
```
