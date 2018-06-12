ex:1003 1163 1157 1159 2033
delete=1003 1163 1157 1159 2033
$(ex):
%:%.cc
	g++ -g -Wall $^ -o $@
clean:
	rm -f *.o core $(delete)
