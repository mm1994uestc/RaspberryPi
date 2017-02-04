for N in $(seq 1 10)
do 
	echo "${N}"
done
python /home/pi/WorkSpace/Python/python.py > /home/pi/WorkSpace/Linux\ Server/test.txt
pwd >> /home/pi/WorkSpace/Linux\ Server/test.txt
cd /home/pi/WorkSpace/Linux\ Server
cat test.txt
echo "Hello bash Shell!"
echo "Using all the command of the bash etc!Crazy!"
ls -al >> test.txt
nslookup www.baidu.com >> test.txt
mv B.txt A.txt
#shell script!
sudo traceroute -w 1 -T www.yahoo.com >> test.txt
host www.baidu.com
iwlist
iwconfig
ifconfig eth0
ip address show
ip route show
ip link show
netstat -tunlp
ping -c 3 -w 1 www.baidu.com
route -n | grep eth0
sudo tcpdump -i -c 3 eth0 -nn
#nc -lp 1024
netstat -tunlp
mv A.txt B.txt
cp B.txt C.txt
g++ /home/pi/WorkSpace/C++/main.c -o main
/home/pi/WorkSpace/C++/main
