ifconfig | grep "ether " | sed 's/ether//' | tr -d '\t ' | sed s/txqueuelen1000\(Ethernet\)// | sed s/txqueuelen0\(Ethernet\)//