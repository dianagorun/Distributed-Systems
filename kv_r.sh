rpcgen kv.x
gcc -c kv_xdr.c
gcc -c kv_svc.c
gcc -c kv_clnt.c
gcc -c kv_clnt.o kv_xdr.o kv_proc_r.c -lpthread -lm