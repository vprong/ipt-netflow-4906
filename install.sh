#!/bin/bash

iptables -D INPUT -j NETFLOW
iptables -D OUTPUT -j NETFLOW
iptables -D FORWARD -j NETFLOW

rmmod ipt_NETFLOW; 
./configure --enable-natevents; 
make all install; 
depmod; 
modprobe ipt_NETFLOW destination=192.168.3.1:9995 protocol=9 natevents=1; 
for i in `echo "INPUT OUTPUT FORWARD"`; do
  iptables -I $i -j NETFLOW
done
