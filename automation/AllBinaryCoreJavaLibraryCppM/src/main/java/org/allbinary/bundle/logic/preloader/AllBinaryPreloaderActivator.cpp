
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/osgi/framework/BundleActivator.h>

      
#include <org/osgi/framework/BundleContext.h>

      
#include <org/osgi/framework/ServiceReference.h>

      
#include <org/osgi/framework/ServiceRegistration.h>

      
#include <org/allbinary/bundle/logic/system/loader/CryptServiceFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AllBinaryPreloaderActivator
            : public Object
        , public BundleActivator {

    private: static inline BundleContext* context;

    private: static inline const std::string CRYPT_REGISTRY_NAME = "bundle.abcs.logic.system.loader.CryptService";

    public: static BundleContext* getBundleContext(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryPreloaderActivator::context;
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

public: AllBinaryPreloaderActivator(){
}


    private: CommonStrings* commonStrings = CommonStrings::getInstance();

                //@Throws(Exception.constructor)
            
    public: void start(BundleContext* context){

        try {
            this->logUtil->putF(this->commonStrings->START, this, "start");
    
AllBinaryPreloaderActivator::context= context;
    
this->registerAsService();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "start", &e);
    



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public: void registerAsService(){

    ABHashtable<Object*, Object*>* properties = StdUtil::getInstance()->createHashtable();;
    

    ServiceRegistration* serviceRegistration = AllBinaryPreloaderActivator::context->registerService(CRYPT_REGISTRY_NAME, new CryptServiceFactory(), properties);;
    

    ServiceReference* serviceReference = serviceRegistration->getReference();;
    
serviceReference= AllBinaryPreloaderActivator::context->getServiceReference(CRYPT_REGISTRY_NAME);
    

                        if(serviceReference == 
                                    nullptr
                                )
                        
                                    throw new Exception("No Such Service Reference");
                                
}


                //@Throws(Exception.constructor)
            
    public: void stop(BundleContext* context){
this->logUtil->putF(this->commonStrings->START, this, "stop");
    
}


};

            

