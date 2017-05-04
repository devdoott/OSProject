# OSProject
In this project we have modified the basic char driver for reading and writing to memory.
The basic char driver used the block size pre determined by the operaing system.
Our driver gives option to the user to change block size for writing data to the device.
Our diver also provides synchronization between processes/threads writing to the device.
For testing, paste all the folders and files in the home directory.
Finally execute the following command with home as the pwd.
~$sudo sh testcase.sh [block size in KB]
w1 are writes performed by the first thread
w2 are writes performed by the second thread
On running testcase.sh the output to the device is shown.
Also for speed testing, 10MB of zeros are written to the device and the speed of the operation is shown using dd command.
For block size =4000KB the output will be:

w1 1 android-studio-ide-143.2915827-linux.zip
w1 2 android-studio-ide-162.3764568-linux.zip
w1 3 bcmwl-kernel-source_6.30.223.248+bdcom-0ubuntu8_amd64.deb
w1 4 create_ap
w1 5 default.pa.bak
w1 6 Desktop
w1 7 dkms_2.2.0.3-2ubuntu11.1_all.deb
w1 8 Documents
w1 9 Downloads
w1 10 Dropbox
w1 11 examples.desktop
w1 12 <invalid path>
w1 13 <invalid path>.layout
w1 14 Makefile
w1 15 modules.order
w1 16 Module.symvers
w1 17 Music
w1 18 net.sh
w1 19 nothing.c
w1 20 nothing.ko
w1 21 nothing.mod.c
w1 22 nothing.mod.o
w1 23 nothing.o
w1 24 onedrive-d-old-future
w1 25 onedrive-d-old-future.zip
w1 26 Pictures
w1 27 Playlists
w1 28 Projects
w1 29 Public
w1 30 queries.txt
w1 31 scull
w1 32 Templates
w1 33 test.cpp
w1 34 tree_Formulas
w1 35 utserver.tar.gz
w1 36 Videos

w2 access.c
w2 access.o
w2 main.c
w2 main.o
w2 Makefile
w2 modules.order
w2 Module.symvers
w2 pipe.c
w2 pipe.o
w2 scull
w2 scull.h
w2 scull.init
w2 scull.ko
w2 scull_load
w2 scull.mod.c
w2 scull.mod.o
w2 scull.o
w2 scull_unload
w2 test.txt
Speed checking.....................
Speed checking.....................
Speed checking.....................
Speed checking.....................
1+0 records in
1+0 records out
10485760 bytes (10 MB, 10 MiB) copied, 0.00530897 s, 2.0 GB/s

