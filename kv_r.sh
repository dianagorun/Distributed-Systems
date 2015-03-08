rpcgen kv.x
gcc -c kv_xdr.c
gcc -c kv_svc.c
gcc -c kv_clnt.c
gcc -c kv_clnt.o kv_xdr.o kv_proc_r.c -lpthread -lm
gcc -c rkv.c
gcc -o server kv_xdr.o kv_svc.o kv_proc_r.o kv_clnt.o
gcc -o client kv_xdr.o kv_clnt.o rkv.o
