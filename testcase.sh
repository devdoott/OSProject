quant=$1
if [ "$quant" -lt 10 ];then

quant=40
fi
if [ "$quant" -gt 40000 ];then
quant=40000
fi
echo $quant
sudo rmmod scull
cd ~/myDriver
make EXTRA_CFLAGS=-DSCULL_QUANTUM="$quant"
sudo sh scull_load
cd ~/testing
sudo ./a.out
sudo cat /dev/scull0
echo "Speed checking....................."
echo "Speed checking....................."
echo "Speed checking....................."
echo "Speed checking....................."
sudo dd if=/dev/zero of=/dev/scull bs=10M count=1

