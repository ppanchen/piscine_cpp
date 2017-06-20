#!/bin/bash 

if [ "$1" == "-d" ]; then
	{
		tmp=$(find . -type f -name ".*" -o -name "*.swp" -o -name "*.gch")
		for file in $tmp
		{
			echo $file "will be removed"
		}
		echo -n "Remove? (y, n) "
		while true; do
			{
				read -rsn1 ans 
				echo ""
				if [ "$ans" == "y" ]; then
					{
						rm -rf $tmp;
						echo "Files was removed";
						break ;
					}
				elif [ "$ans" == "n" ]; then
					{
						echo "File was not removed"
						break ;
					}
				fi
			}
		done
	}
fi
clang++ $(find . -type f -name "*.cpp")
./a.out > /dev/null & PIDS[0]=$!
/Applications/Xcode.app/Contents/Developer/usr/bin/leaks ${PIDS[0]} 
kill ${PIDS[0]}
