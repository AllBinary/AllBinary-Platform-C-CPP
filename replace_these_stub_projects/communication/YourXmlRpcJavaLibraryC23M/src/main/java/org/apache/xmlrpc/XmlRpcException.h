#ifndef ORG_APACHE_XMLRPC_XMLRPCEXCEPTION_H
#define ORG_APACHE_XMLRPC_XMLRPCEXCEPTION_H
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

typedef struct XmlRpcException XmlRpcException;
struct XmlRpcException {
    Exception base;
};


XmlRpcException* XmlRpcException_new(int32_t code, const char* message);

void XmlRpcException_init(XmlRpcException* this, int32_t code, const char* message);
#define XmlRpcException_new2 XmlRpcException_new
#define XmlRpcException_init2 XmlRpcException_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void XmlRpcException_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void XmlRpcException_register(void);


#endif // ORG_APACHE_XMLRPC_XMLRPCEXCEPTION_H
