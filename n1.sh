#!/bin/bash
read -p "Enter Name = " name
read -p "Enter Roll No. = " roll
echo $name $roll > abc.txt
cat abc.txt
