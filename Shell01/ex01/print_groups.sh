#!/bin/sh
id -n -G $FT_USER | tr -s ' ' ',' | tr -d '\n'
