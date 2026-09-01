
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
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

public: AdminConfiguration(){
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    
this->contextConfigurationInterface= ContextConfigurationInterfaceFactory::getInstance().getInstance(AdminConfigurationData::CONTEXTNAME);
    
}


public: AdminConfiguration(HttpServletRequest request){
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    
this->getFormData(RequestParams(request).toHashMap());
    
}


public: AdminConfiguration(HashMap<any, any> storeHashMap){
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    
this->getFormData(storeHashMap);
    
}


                //@Throws(Exception.constructor)
            
    private: void getFormData(HashMap<any, any> storeHashMap){
this->logUtil.putF(this->commonStrings.START, this, "getFormData");
    
this->setContextConfigurationInterface(ContextConfiguration(storeHashMap) as ContextConfigurationInterface);
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void write(){

    ContextConfigurationDomDocumentMapping contextConfigurationDomDocumentMapping = ContextConfigurationDomDocumentMapping(this->getContextConfigurationInterface());;
    

    CryptFileWriter cryptFileWriter = CryptFileWriter(ContextConfigurationData::getInstance().UNCRYPTED_EXTENSION, ContextConfigurationData::getInstance().ENCRYPTED_EXTENSION);;
    
cryptFileWriter.write(ContextConfigurationPathUtil::getAbPath(AdminConfigurationData::CONTEXTNAME), contextConfigurationDomDocumentMapping.toXmlDoc());
    
}


    public: ContextConfigurationInterface getContextConfigurationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->contextConfigurationInterface;
    
}


    public: void setContextConfigurationInterface(ContextConfigurationInterface contextConfigurationInterface){
this->contextConfigurationInterface= contextConfigurationInterface;
    
}


};

            

