echo "lbase=13 ; ibase=5 ; $FT_NBR2+$FT_NBR1 " | tr \' '0'  | tr \" '2'  | sed 's/m/0/g; s/r/1/g ;s/d/2/g; s/o/3/g; s/c/4/g; s/\\/1/g; s/\?/3/g; s/\!/4/g; s/l/o/;' | bc | sed 's/0/g/g; s/1/t/g; s/2/a/g; s/3/i/g; s/4/o/g; s/5/ /g; s/6/l/g; s/7/u/g; s/8/S/g; s/9/n/g; s/A/e/g; s/B/m/g; s/C/f/g; '