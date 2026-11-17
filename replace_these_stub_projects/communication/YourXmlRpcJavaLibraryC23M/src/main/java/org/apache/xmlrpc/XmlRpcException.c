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
#include "org/apache/xmlrpc/Exception.h"

typedef struct XmlRpcException XmlRpcException;
struct XmlRpcException {
    Exception base;
};


XmlRpcException* XmlRpcException_new(int32_t code, const char* message);

void XmlRpcException_init(XmlRpcException* this, int32_t code, const char* message);


void XmlRpcException_init(XmlRpcException* this, int32_t code, const char* message) {
        Exception_init(&this->base, message);
}

XmlRpcException* XmlRpcException_new(int32_t code, const char* message) {
    XmlRpcException* this = calloc(1, sizeof(XmlRpcException));
    XmlRpcException_init(this, code, message);
    return this;
}

