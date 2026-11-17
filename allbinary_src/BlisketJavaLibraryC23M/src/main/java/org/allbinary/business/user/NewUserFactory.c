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
// package org.allbinary.business.user

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/business/user/modules/User.h"
#include "org/allbinary/business/user/role/UserRoleData.h"
#include "org/allbinary/logic/communication/http/request/RequestParams.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"

typedef struct NewUserFactory NewUserFactory;
struct NewUserFactory {
    char unused;
};


NewUserFactory* NewUserFactory_new(void);

void NewUserFactory_init(NewUserFactory* this);
UserInterface* NewUserFactory_getInstance(void);
UserInterface* NewUserFactory_getInstance(TransformInfoInterface* transformInfoInterface);
UserInterface* NewUserFactory_getInstance(HttpServletRequest* httpServletRequest, HashMap* propertiesHashMap);


void NewUserFactory_init(NewUserFactory* this) {
}

NewUserFactory* NewUserFactory_new(void) {
    NewUserFactory* this = calloc(1, sizeof(NewUserFactory));
    NewUserFactory_init(this);
    return this;
}


// throws Exception
UserInterface* NewUserFactory_getInstance(void) {
        return User_new();
}


// throws Exception
// Java overloaded method: C needs a different name
UserInterface* NewUserFactory_getInstance(TransformInfoInterface* transformInfoInterface) {
        TransformInfoHttpInterface* httpTransformInfoInterface = ((TransformInfoHttpInterface*) transformInfoInterface);
        HttpServletRequest* httpServletRequest = ((HttpServletRequest*) JAVA_CALL(TransformInfoHttpInterface_getPageContext(httpTransformInfoInterface), getRequest));
        HashMap* hashMap = RequestParams_toHashMap(RequestParams_new(httpServletRequest));
        const char* role = ((const char*) JAVA_CALL(TransformInfoHttpInterface_getPropertiesHashMap(httpTransformInfoInterface), get, JAVA_CALL(UserRoleData_NAME, toString)));
        HashMap_put(hashMap, JAVA_CALL(UserRoleData_NAME, toString), role);
        return CreateUserFactory_getInstance(hashMap);
}


// throws Exception
// Java overloaded method: C needs a different name
UserInterface* NewUserFactory_getInstance(HttpServletRequest* httpServletRequest, HashMap* propertiesHashMap) {
        if (propertiesHashMap != nullptr) {
            HashMap* requestHashMap = RequestParams_toHashMap(RequestParams_new(httpServletRequest));
            const char* roleString = ((const char*) HashMap_get(propertiesHashMap, JAVA_CALL(UserRoleData_NAME, toString)));
            HashMap_put(requestHashMap, JAVA_CALL(UserRoleData_NAME, toString), roleString);
            return CreateUserFactory_getInstance(requestHashMap);
        } else {
            java_throw(java_exception_new("Exception", "Null HashMap"));
        }
}

