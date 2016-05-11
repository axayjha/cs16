#!/bin/bash

clang-3.5 $1 -lm -o $1.out
./$1.out $2 $3
