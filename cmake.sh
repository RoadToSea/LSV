#!/bin/bash

projectPath="/home/oliver/cpp_projects/LSV"

cd ${projectPath}
cmake -B build

cd ./build
cmake --build .

exec $SHELL