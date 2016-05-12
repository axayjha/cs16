#!/bin/bash
clang-3.5 $1 -o $1.out
./$1.out
