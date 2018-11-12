#!/bin/bash

idx=0
while read line
do
    arr[idx]=$line
    idx=`expr $idx + 1`
done

echo ${arr[@]:3:5}
