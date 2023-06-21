#!/bin/bash

cd ~/tempdir && rm -rf *

cd ~/tempdir || { echo >&2 "cd ~/tempdir failed"; exit 1;}
