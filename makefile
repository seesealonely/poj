ex:1003 1080 1163 1157 1159 1458 1664 1836 2033 2385 2479 3176
delete=1003 1080 1163 1157 1159 1458 1664 1836 2033 2385 2479 3176
$(ex):
%:%.cc
	g++ -g -Wall $^ -o $@
clean:
	rm -f *.o core $(delete)
