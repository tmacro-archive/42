#!/bin/sh

cat $1 | awk '$2 == "Nicolas" && $1 == "Bomber" {print $3}'
