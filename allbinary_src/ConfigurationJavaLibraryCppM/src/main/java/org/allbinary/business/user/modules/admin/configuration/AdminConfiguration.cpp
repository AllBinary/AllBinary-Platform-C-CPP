
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: contextConfigurationInterface: ContextConfigurationInterface;

public constructor (){

            super();
        this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CONSTRUCTOR);
    
this.contextConfigurationInterface= ContextConfigurationInterfaceFactory.getInstance()!.getInstance(AdminConfigurationData.CONTEXTNAME);
    
}


public constructor (HttpServletRequest request){

            super();
        this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CONSTRUCTOR);
    
this.getFormData(new RequestParams(request).toHashMap());
    
}


public constructor (HashMap<any, any> storeHashMap){

            super();
        this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CONSTRUCTOR);
    
this.getFormData(storeHashMap);
    
}


                //@Throws(Exception.constructor)
            
    getFormData(HashMap<any, any> storeHashMap){
this.logUtil!.putF(this.commonStrings!.START, this, "getFormData");
    
this.setContextConfigurationInterface(new ContextConfiguration(storeHashMap) as ContextConfigurationInterface);
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public write(){

    contextConfigurationDomDocumentMapping: ContextConfigurationDomDocumentMapping = new ContextConfigurationDomDocumentMapping(this.getContextConfigurationInterface());;
    

    cryptFileWriter: CryptFileWriter = new CryptFileWriter(ContextConfigurationData.getInstance()!.UNCRYPTED_EXTENSION, ContextConfigurationData.getInstance()!.ENCRYPTED_EXTENSION);;
    
cryptFileWriter!.write(ContextConfigurationPathUtil.getAbPath(AdminConfigurationData.CONTEXTNAME), contextConfigurationDomDocumentMapping!.toXmlDoc());
    
}


    public ContextConfigurationInterface getContextConfigurationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.contextConfigurationInterface;
    
}


    public setContextConfigurationInterface(ContextConfigurationInterface contextConfigurationInterface){
this.contextConfigurationInterface= contextConfigurationInterface;
    
}


};

            

