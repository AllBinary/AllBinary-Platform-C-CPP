#ifndef ORG_APACHE_XMLRPC_XMLRPCCLIENT_H
#define ORG_APACHE_XMLRPC_XMLRPCCLIENT_H
// Generated Code Do Not Modify
// package org.apache.xmlrpc

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct XmlRpcHandler XmlRpcHandler;
typedef struct XmlRpcException XmlRpcException;
typedef struct BasicArrayList BasicArrayList;
typedef struct CryptInterface CryptInterface;
typedef struct NullUtil NullUtil;
#include "java/io/IOException.h"
#include "java/net/MalformedURLException.h"
#include "java/net/URL.h"
// #include "org/allbinary/util/BasicArrayListD.h"
#include "org/apache/xmlrpc/XmlRpcHandler.h"

typedef struct XmlRpcClient XmlRpcClient;
struct XmlRpcClient {
    XmlRpcHandler XmlRpcHandler_interface;
    URL* url;
};


XmlRpcClient* XmlRpcClient_new(const char* url);

void XmlRpcClient_init(XmlRpcClient* this, const char* url);

URL* XmlRpcClient_getURL(XmlRpcClient* this);

void XmlRpcClient_setBasicAuthentication(XmlRpcClient* this, const char* user, const char* password);

void* XmlRpcClient_execute(XmlRpcClient* this, const char* method, BasicArrayList* params);

void* XmlRpcClient_executeWithCrypt(XmlRpcClient* this, const char* method, BasicArrayList* params, CryptInterface* cryptInterface);
#define XmlRpcClient_new1 XmlRpcClient_new
#define XmlRpcClient_init1 XmlRpcClient_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void XmlRpcClient_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void XmlRpcClient_register(void);


#endif // ORG_APACHE_XMLRPC_XMLRPCCLIENT_H
