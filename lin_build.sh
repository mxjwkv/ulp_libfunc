# lin_build.sh
#     Created: 02-AUG-2012
# Last Update: 02-SEP-2015
echo --- Release --------------------------------
g++ -Wall -O2 -c *.cpp
ar -rvs ../lib/libulp_libfunc.a *.o
echo --- Debug ----------------------------------
g++ -Wall -g -c *.cpp
ar -rvs ../lib/libulp_libfuncD.a *.o

