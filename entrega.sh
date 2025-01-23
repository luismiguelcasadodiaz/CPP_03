#!/usr/bin/bash
#
#inside the folder where i cloned submission repository, make exercise folders
cd ~/Desktop/entrega
mkdir ex00 ex01 ex02 ex03
cd -
# clean for exercise folder compiled objects.
make -C ex00 clean
make -C ex01 clean
make -C ex02 clean
make -C ex03 clean
#
# copy submission files
#
cp ex00/Makefile ~/Desktop/entrega/ex00/Makefile
cp ex00/*.hpp ~/Desktop/entrega/ex00/
cp ex00/*.cpp ~/Desktop/entrega/ex00/
cp ex01/Makefile ~/Desktop/entrega/ex01/Makefile
cp ex01/*.hpp ~/Desktop/entrega/ex01/
cp ex01/*.cpp ~/Desktop/entrega/ex01/
cp ex02/Makefile ~/Desktop/entrega/ex02/Makefile
cp ex02/*.hpp ~/Desktop/entrega/ex02/
cp ex02/*.cpp ~/Desktop/entrega/ex02/
cp ex03/Makefile ~/Desktop/entrega/ex03/Makefile
cp ex03/*.hpp ~/Desktop/entrega/ex03/
cp ex03/*.cpp ~/Desktop/entrega/ex03/

# Inside submission repository check that every thinh works properly
cd ~/Desktop/entrega
# compile
make -C ex00
make -C ex01
make -C ex02
make -C ex03
# execute
./ex00/main
./ex01/main
./ex02/main
./ex03/main
# clean
make -C ex00 clean
make -C ex01 clean
make -C ex02 clean
make -C ex03 clean
