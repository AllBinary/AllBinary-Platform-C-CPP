#ifndef ORG_APACHE_XMLRPC_XMLRPCHANDLER_H
#define ORG_APACHE_XMLRPC_XMLRPCHANDLER_H
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
typedef struct BasicArrayList BasicArrayList;
// #include "org/allbinary/util/BasicArrayListD.h"

typedef struct XmlRpcHandler XmlRpcHandler;
struct XmlRpcHandler {
    void* (*execute)(void* this, const char* method, BasicArrayList* params);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void XmlRpcHandler_staticInit(void);

static inline void* XmlRpcHandler_execute(void* this, const char* method, BasicArrayList* params) {
    return ((__typeof__(((XmlRpcHandler*) nullptr)->execute)) java_method_of(this, "execute"))(this, method, params);
}


#endif // ORG_APACHE_XMLRPC_XMLRPCHANDLER_H
