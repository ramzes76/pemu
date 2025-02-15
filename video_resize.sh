#!/bin/bash

dir=$1/*
width=$2

for video in $dir
do
        echo "resizing: $video ..."
        ffmpeg -i "$video" -filter:v scale="iw/2:ih/2" -sws_flags lanczos -c:a copy -t 20 output.mp4
        mv output.mp4 "$video"
done
