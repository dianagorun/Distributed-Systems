/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _KV_H_RPCGEN
#define _KV_H_RPCGEN

#define RPCGEN_VERSION	199506

#include <rpc/rpc.h>


typedef char *Key;
#ifdef __cplusplus
extern "C" bool_t xdr_Key(XDR *, Key*);
#elif __STDC__
extern  bool_t xdr_Key(XDR *, Key*);
#else /* Old Style C */
bool_t xdr_Key();
#endif /* Old Style C */


typedef char *Value;
#ifdef __cplusplus
extern "C" bool_t xdr_Value(XDR *, Value*);
#elif __STDC__
extern  bool_t xdr_Value(XDR *, Value*);
#else /* Old Style C */
bool_t xdr_Value();
#endif /* Old Style C */


struct KeyValue {
	Key key;
	Value value;
};
typedef struct KeyValue KeyValue;
#ifdef __cplusplus
extern "C" bool_t xdr_KeyValue(XDR *, KeyValue*);
#elif __STDC__
extern  bool_t xdr_KeyValue(XDR *, KeyValue*);
#else /* Old Style C */
bool_t xdr_KeyValue();
#endif /* Old Style C */


struct GetReply {
	int code;
	Value value;
};
typedef struct GetReply GetReply;
#ifdef __cplusplus
extern "C" bool_t xdr_GetReply(XDR *, GetReply*);
#elif __STDC__
extern  bool_t xdr_GetReply(XDR *, GetReply*);
#else /* Old Style C */
bool_t xdr_GetReply();
#endif /* Old Style C */


struct PrepReply {
	int vote;
	KeyValue kv;
	Key key;
	int n;
};
typedef struct PrepReply PrepReply;
#ifdef __cplusplus
extern "C" bool_t xdr_PrepReply(XDR *, PrepReply*);
#elif __STDC__
extern  bool_t xdr_PrepReply(XDR *, PrepReply*);
#else /* Old Style C */
bool_t xdr_PrepReply();
#endif /* Old Style C */


#define KVPROGRAM ((rpc_uint)123456)
#define KVVERSION ((rpc_uint)1)

#ifdef __cplusplus
#define PUT ((rpc_uint)1)
extern "C" int * put_1(KeyValue *, CLIENT *);
extern "C" int * put_1_svc(KeyValue *, struct svc_req *);
#define GET ((rpc_uint)2)
extern "C" GetReply * get_1(char **, CLIENT *);
extern "C" GetReply * get_1_svc(char **, struct svc_req *);
#define DEL ((rpc_uint)3)
extern "C" int * del_1(char **, CLIENT *);
extern "C" int * del_1_svc(char **, struct svc_req *);
#define RGET ((rpc_uint)4)
extern "C" GetReply * rget_1(char **, CLIENT *);
extern "C" GetReply * rget_1_svc(char **, struct svc_req *);
#define ACCEPT_PREPARE_DEL ((rpc_uint)5)
extern "C" PrepReply * accept_prepare_del_1(int *, CLIENT *);
extern "C" PrepReply * accept_prepare_del_1_svc(int *, struct svc_req *);
#define ACCEPT_PREPARE_PUT ((rpc_uint)6)
extern "C" PrepReply * accept_prepare_put_1(int *, CLIENT *);
extern "C" PrepReply * accept_prepare_put_1_svc(int *, struct svc_req *);
#define ACCEPT_EXECUTE_DEL ((rpc_uint)7)
extern "C" int * accept_execute_del_1(char *, CLIENT *);
extern "C" int * accept_execute_del_1_svc(char *, struct svc_req *);
#define ACCEPT_EXECUTE_PUT ((rpc_uint)8)
extern "C" int * accept_execute_put_1(KeyValue *, CLIENT *);
extern "C" int * accept_execute_put_1_svc(KeyValue *, struct svc_req *);

#elif __STDC__
#define PUT ((rpc_uint)1)
extern  int * put_1(KeyValue *, CLIENT *);
extern  int * put_1_svc(KeyValue *, struct svc_req *);
#define GET ((rpc_uint)2)
extern  GetReply * get_1(char **, CLIENT *);
extern  GetReply * get_1_svc(char **, struct svc_req *);
#define DEL ((rpc_uint)3)
extern  int * del_1(char **, CLIENT *);
extern  int * del_1_svc(char **, struct svc_req *);
#define RGET ((rpc_uint)4)
extern  GetReply * rget_1(char **, CLIENT *);
extern  GetReply * rget_1_svc(char **, struct svc_req *);
#define ACCEPT_PREPARE_DEL ((rpc_uint)5)
extern  PrepReply * accept_prepare_del_1(int *, CLIENT *);
extern  PrepReply * accept_prepare_del_1_svc(int *, struct svc_req *);
#define ACCEPT_PREPARE_PUT ((rpc_uint)6)
extern  PrepReply * accept_prepare_put_1(int *, CLIENT *);
extern  PrepReply * accept_prepare_put_1_svc(int *, struct svc_req *);
#define ACCEPT_EXECUTE_DEL ((rpc_uint)7)
extern  int * accept_execute_del_1(char *, CLIENT *);
extern  int * accept_execute_del_1_svc(char *, struct svc_req *);
#define ACCEPT_EXECUTE_PUT ((rpc_uint)8)
extern  int * accept_execute_put_1(KeyValue *, CLIENT *);
extern  int * accept_execute_put_1_svc(KeyValue *, struct svc_req *);

#else /* Old Style C */
#define PUT ((rpc_uint)1)
extern  int * put_1();
extern  int * put_1_svc();
#define GET ((rpc_uint)2)
extern  GetReply * get_1();
extern  GetReply * get_1_svc();
#define DEL ((rpc_uint)3)
extern  int * del_1();
extern  int * del_1_svc();
#define RGET ((rpc_uint)4)
extern  GetReply * rget_1();
extern  GetReply * rget_1_svc();
#define ACCEPT_PREPARE_DEL ((rpc_uint)5)
extern  PrepReply * accept_prepare_del_1();
extern  PrepReply * accept_prepare_del_1_svc();
#define ACCEPT_PREPARE_PUT ((rpc_uint)6)
extern  PrepReply * accept_prepare_put_1();
extern  PrepReply * accept_prepare_put_1_svc();
#define ACCEPT_EXECUTE_DEL ((rpc_uint)7)
extern  int * accept_execute_del_1();
extern  int * accept_execute_del_1_svc();
#define ACCEPT_EXECUTE_PUT ((rpc_uint)8)
extern  int * accept_execute_put_1();
extern  int * accept_execute_put_1_svc();
#endif /* Old Style C */

#endif /* !_KV_H_RPCGEN */
