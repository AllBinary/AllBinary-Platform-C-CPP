
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_CONFIGURATION_ADMINCONFIGURATION_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_CONFIGURATION_ADMINCONFIGURATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/modules/admin/configuration/AdminConfiguration.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/business/user/modules/admin/configuration/AdminConfigurationInterface.h"
#include "org/allbinary/business/user/modules/admin/configuration/AdminConfigurationData.h"


AdminConfiguration::AdminConfiguration() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    
this->contextConfigurationInterface= ContextConfigurationInterfaceFactory::getInstance()->getInstance(AdminConfigurationData::CONTEXTNAME);
    
}


AdminConfiguration::AdminConfiguration(HttpServletRequest* request) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    
this->getFormData((new RequestParams(request))->toHashMap());
    
}


AdminConfiguration::AdminConfiguration(HashMap<Object*, Object*>* storeHashMap) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    
this->getFormData(storeHashMap);
    
}


                //@Throws(Exception.constructor)
            
    auto AdminConfiguration::getFormData(HashMap<Object*, Object*>* storeHashMap) -> void{
this->logUtil->putF(this->commonStrings->START, this, "getFormData");
    
this->setContextConfigurationInterface(dynamic_cast<ContextConfigurationInterface*>(new ContextConfiguration(storeHashMap)));
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AdminConfiguration::write() -> void{

    ContextConfigurationDomDocumentMapping* contextConfigurationDomDocumentMapping = new ContextConfigurationDomDocumentMapping(this->getContextConfigurationInterface());;
    

    CryptFileWriter* cryptFileWriter = new CryptFileWriter(ContextConfigurationData::getInstance()->UNCRYPTED_EXTENSION, ContextConfigurationData::getInstance()->ENCRYPTED_EXTENSION);;
    
cryptFileWriter->write(ContextConfigurationPathUtil::getAbPath(AdminConfigurationData::CONTEXTNAME), contextConfigurationDomDocumentMapping->toXmlDoc());
    
}


    auto AdminConfiguration::getContextConfigurationInterface() -> ContextConfigurationInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->contextConfigurationInterface;
    
}


    auto AdminConfiguration::setContextConfigurationInterface(ContextConfigurationInterface* contextConfigurationInterface) -> void{
this->contextConfigurationInterface= contextConfigurationInterface;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_CONFIGURATION_ADMINCONFIGURATION_CPP
