#!/bin/sh
find . -type f -name "*.sh" | awk -F'.' '{print $1}'
