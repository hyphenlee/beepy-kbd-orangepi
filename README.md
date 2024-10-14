# keyboard driver for orangepi 
support Beepy,ColorBerry with monochrome Sharp screen or 8 color JDI screen.  
fork from https://github.com/ardangelo/beepberry-keyboard-driver.git

# install


```shell
sudo dpkg -i /opt/linux-headers-next-sun50iw9_1.0.0_arm64.deb
sudo orangepi-add-overlay beepy-kbd.dts  
make all  
sudo cp beepy-kbd.ko /lib/modules/6.1.31-sun50iw9/  
sudo depmod -a
echo "beepy-kbd"  | sudo tee -a /etc/modules
sudo mkdir -p /usr/share/kbd/keymaps/
sudo cp beepy-kbd.map /usr/share/kbd/keymaps/
sudo rm -f /etc/console-setup/cached_setup_keyboard.sh
echo "KMAP=/usr/share/kbd/keymaps/beepy-kbd.map"  | sudo tee -a /etc/default/keyboard

```
