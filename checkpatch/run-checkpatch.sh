#!/bin/sh

PWD=`pwd`
#echo $PWD

$PWD/checkpatch/checkpatch.pl --no-tree --file --strict $PWD/*.c
$PWD/checkpatch/checkpatch.pl --no-tree --file --strict $PWD/*.h
