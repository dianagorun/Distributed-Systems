rpcgen kv.x
cc -c kv_xdr.c
cc -c kv_svc.c
cc -c kv_clnt.c
cc -pthread -o kv_proc kv_proc_r.c -lm
cc -c rkv.c
cc -o server kv_xdr.o kv_svc.o kv_proc_r.o kv_clnt.o -lm
cc -o client kv_xdr.o kv_clnt.o rkv.o -lm
