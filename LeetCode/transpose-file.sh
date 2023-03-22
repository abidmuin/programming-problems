# https://leetcode.com/problems/transpose-file/

# Read from the file file.txt and print its transposed content to stdout.

columns=`cat file.txt | head -1 | awk '{ print NF}'`
column=1
while [ $column -le $columns ]; do
    result=`cat file.txt | awk -v x=$column '{print $x}'`
    echo $result
	((column++))
done