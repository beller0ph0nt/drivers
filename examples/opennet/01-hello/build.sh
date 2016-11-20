#!/bin/bash

KERN_SRC_DIR=~/kernel/linux-3.19.0

make -C $KERN_SRC_DIR SUBDIRS=$PWD modules