#ifndef ORG_APACHE_XMLRPC_NULLXMLRPCHANDLER_H
#define ORG_APACHE_XMLRPC_NULLXMLRPCHANDLER_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
 *  
 * By agreeing to this license you and any business entity you represent are 
 * legally bound to the AllBinary Open License Version 1 legal agreement. 
 *  
 * You may obtain the AllBinary Open License Version 1 legal agreement from 
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
 *  
 * Created By: Travis Berthelot 
 *   
 */
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
typedef struct BasicArrayList BasicArrayList;
typedef struct NullUtil NullUtil;
// #include "org/allbinary/util/BasicArrayListD.h"
#include "org/apache/xmlrpc/XmlRpcHandler.h"

typedef struct NullXmlRpcHandler NullXmlRpcHandler;
struct NullXmlRpcHandler {
    XmlRpcHandler XmlRpcHandler_interface;
};

extern NullXmlRpcHandler* NullXmlRpcHandler_NULL_XML_RPC_HANDLER;

NullXmlRpcHandler* NullXmlRpcHandler_new(void);
void NullXmlRpcHandler_init(NullXmlRpcHandler* this);

void* NullXmlRpcHandler_execute(NullXmlRpcHandler* this, const char* method, BasicArrayList* params);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullXmlRpcHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullXmlRpcHandler_register(void);


#endif // ORG_APACHE_XMLRPC_NULLXMLRPCHANDLER_H
