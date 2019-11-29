#!/bin/bash

INPUTS=(	"3 + 3" 
		"3 - 2 \* 5" 
		"1.1 + 2"
		"4 / 2"
		"5 + 4 - 3 / 6 / 3"
		"!" 
)
		
OUTPUTS=(	"3.000000+3.000000=6" 
		"3.000000-2.000000*5.000000=5" 
		"1.100000+2.000000=3.1" "4.000000/2.000000=2" 
		"5.000000+4.000000-4.000000/6.000000/3.000000=2.777777"
		"not an operator or operand!"
)




for i in 0 1 2 3 
do 
	echo "Input: \"${INPUTS[i]}\""
	if [ "${OUTPUTS[i]}" = "$(./calculator ${INPUTS[i]})" ]
	then
		echo Test passed
	else
		echo Test failed
	fi
done

