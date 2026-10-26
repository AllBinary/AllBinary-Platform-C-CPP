
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/context/configuration/ContextConfiguration.h>

      
#include <org/allbinary/business/context/configuration/ContextConfigurationData.h>

      
#include <org/allbinary/business/context/configuration/ContextConfigurationDomDocumentMapping.h>

      
#include <org/allbinary/business/context/configuration/ContextConfigurationInterface.h>

      
#include <org/allbinary/business/context/configuration/ContextConfigurationInterfaceFactory.h>

      
#include <org/allbinary/business/context/configuration/ContextConfigurationPathUtil.h>

      
#include <org/allbinary/logic/communication/http/request/RequestParams.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileWriter.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AdminConfigurationInterface.h"
#include "AdminConfigurationData.h"

class AdminConfiguration
            : public Object
        : public AdminConfigurationInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: ContextConfigurationInterface contextConfigurationInterface;

public: AdminConfiguration();

public: AdminConfiguration(HttpServletRequest request);

public: AdminConfiguration(HashMap<Object*, Object*> storeHashMap);

                //@Throws(Exception.constructor)
            
    private: void getFormData(HashMap<Object*, Object*> storeHashMap);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void write();

    public: ContextConfigurationInterface getContextConfigurationInterface();

    public: void setContextConfigurationInterface(ContextConfigurationInterface contextConfigurationInterface);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_CONFIGURATION_ADMINCONFIGURATION_H
