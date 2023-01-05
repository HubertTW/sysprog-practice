#!/bin/sh

a=0

while [ $a -lt 1 ]
do
   ./a.out
   a=`expr $a + 1`
done