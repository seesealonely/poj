ex:1003 1080 1163 1157 1159 1458 1664 1836 1936 1953 2033 2385 2479 3176 3356
delete=1003 1080 1163 1157 1159 1458 1664 1836 1936 1953 2033 2385 2479 3176 3356
$(ex):
%:%.cc
	g++ -g -Wall $^ -o $@
clean:
	rm -f *.o core $(delete)
