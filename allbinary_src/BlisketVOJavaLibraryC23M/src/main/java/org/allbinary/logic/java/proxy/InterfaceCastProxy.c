/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
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
// package org.allbinary.logic.java.proxy

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/lang/reflect/Method.h"
// #include "java/lang/reflect/Proxy.h"
#include "org/allbinary/logic/java/proxy/InvocationHandler.h"

typedef struct InterfaceCastProxy InterfaceCastProxy;
struct InterfaceCastProxy {
    InvocationHandler InvocationHandler_interface;
    Any* anyType;
};


InterfaceCastProxy* InterfaceCastProxy_new(Any* anyType);

void InterfaceCastProxy_init(InterfaceCastProxy* this, Any* anyType);
Any* InterfaceCastProxy_newInstance(Any* anyType);
Any* InterfaceCastProxy_invoke(InterfaceCastProxy* this, Any* proxyObject, Method* proxyMethod, Any** proxyArgs);

static void InterfaceCastProxy_initFields(InterfaceCastProxy* this) {
    
}


void InterfaceCastProxy_init(InterfaceCastProxy* this, Any* anyType) {
    InterfaceCastProxy_initFields(this);
        this->anyType = anyType;
}

InterfaceCastProxy* InterfaceCastProxy_new(Any* anyType) {
    InterfaceCastProxy* this = calloc(1, sizeof(InterfaceCastProxy));
    InterfaceCastProxy_init(this, anyType);
    return this;
}


Any* InterfaceCastProxy_newInstance(Any* anyType) {
        return Proxy_newProxyInstance(JAVA_CALL(java_class_of(anyType), getClassLoader), JAVA_CALL(java_class_of(anyType), getInterfaces), InterfaceCastProxy_new(anyType));
}


// throws Throwable
Any* InterfaceCastProxy_invoke(InterfaceCastProxy* this, Any* proxyObject, Method* proxyMethod, Any** proxyArgs) {
        const char* methodName = Method_getName(proxyMethod);
        Method* realMethod = JAVA_CALL(java_class_of(this->anyType), getMethod, methodName, Method_getParameterTypes(proxyMethod));
        if (!Method_isAccessible(realMethod)) {
            Method_setAccessible(realMethod, true);
        }
        return Method_invoke(proxyMethod, this->anyType, proxyArgs);
}

