
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2011 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *   
                *  Created By: Travis Berthelot    
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_CONFIGURATION_ADMINCONFIGURATION_H
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_CONFIGURATION_ADMINCONFIGURATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class HttpServletRequest;
class ContextConfiguration;
class ContextConfigurationData;
class ContextConfigurationDomDocumentMapping;
class ContextConfigurationInterface;
class ContextConfigurationInterfaceFactory;
class ContextConfigurationPathUtil;
class RequestParams;
class LogUtil;
class CryptFileWriter;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/modules/admin/configuration/AdminConfigurationInterface.h"
class AdminConfigurationData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdminConfiguration
            : public virtual Object
        , public virtual AdminConfigurationInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: ContextConfigurationInterface* contextConfigurationInterface;

public: AdminConfiguration();

public: AdminConfiguration(HttpServletRequest* request);

public: AdminConfiguration(HashMap<Object*, Object*>* storeHashMap);

                //@Throws(Exception.constructor)
            
    private: void getFormData(HashMap<Object*, Object*>* storeHashMap);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void write();

    public: ContextConfigurationInterface* getContextConfigurationInterface();

    public: void setContextConfigurationInterface(ContextConfigurationInterface* contextConfigurationInterface);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_CONFIGURATION_ADMINCONFIGURATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_CONFIGURATION_ADMINCONFIGURATION_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_CONFIGURATION_ADMINCONFIGURATION_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<org/allbinary/business/context/configuration/ContextConfiguration.h>)
#include <org/allbinary/business/context/configuration/ContextConfiguration.h>
#endif
#if __has_include(<org/allbinary/business/context/configuration/ContextConfigurationData.h>)
#include <org/allbinary/business/context/configuration/ContextConfigurationData.h>
#endif
#if __has_include(<org/allbinary/business/context/configuration/ContextConfigurationDomDocumentMapping.h>)
#include <org/allbinary/business/context/configuration/ContextConfigurationDomDocumentMapping.h>
#endif
#if __has_include(<org/allbinary/business/context/configuration/ContextConfigurationInterface.h>)
#include <org/allbinary/business/context/configuration/ContextConfigurationInterface.h>
#endif
#if __has_include(<org/allbinary/business/context/configuration/ContextConfigurationInterfaceFactory.h>)
#include <org/allbinary/business/context/configuration/ContextConfigurationInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/business/context/configuration/ContextConfigurationPathUtil.h>)
#include <org/allbinary/business/context/configuration/ContextConfigurationPathUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/RequestParams.h>)
#include <org/allbinary/logic/communication/http/request/RequestParams.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/crypt/file/CryptFileWriter.h>)
#include <org/allbinary/logic/control/crypt/file/CryptFileWriter.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/business/user/modules/admin/configuration/AdminConfigurationInterface.h")
#include "org/allbinary/business/user/modules/admin/configuration/AdminConfigurationInterface.h"
#endif
#if __has_include("org/allbinary/business/user/modules/admin/configuration/AdminConfigurationData.h")
#include "org/allbinary/business/user/modules/admin/configuration/AdminConfigurationData.h"
#endif

        #endif
    
