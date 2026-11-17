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
// #include "java/io/IOException.h"
// #include "java/net/MalformedURLException.h"
// #include "java/net/URL.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/init/crypt/jcehelper/CryptInterface.h"
#include "org/allbinary/logic/NullUtil.h"
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
Any* XmlRpcClient_execute(XmlRpcClient* this, const char* method, BasicArrayList* params);
Any* XmlRpcClient_executeWithCrypt(XmlRpcClient* this, const char* method, BasicArrayList* params, CryptInterface* cryptInterface);

static void XmlRpcClient_initFields(XmlRpcClient* this) {
    
}


void XmlRpcClient_init(XmlRpcClient* this, const char* url) {
    XmlRpcClient_initFields(this);
        this->url = URL_new(url);
}

XmlRpcClient* XmlRpcClient_new(const char* url) {
    XmlRpcClient* this = calloc(1, sizeof(XmlRpcClient));
    XmlRpcClient_init(this, url);
    return this;
}


URL* XmlRpcClient_getURL(XmlRpcClient* this) {
        return this->url;
}


void XmlRpcClient_setBasicAuthentication(XmlRpcClient* this, const char* user, const char* password) {
}


// throws XmlRpcException, IOException
Any* XmlRpcClient_execute(XmlRpcClient* this, const char* method, BasicArrayList* params) {
        return NullUtil_getInstance()->NULL_OBJECT;
}


// throws XmlRpcException, IOException
Any* XmlRpcClient_executeWithCrypt(XmlRpcClient* this, const char* method, BasicArrayList* params, CryptInterface* cryptInterface) {
        return NullUtil_getInstance()->NULL_OBJECT;
}

