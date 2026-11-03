
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
        



        #ifndef ADMIN_TAGHELPERS_HELPERFACTORY_CPP
        #define ADMIN_TAGHELPERS_HELPERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/taghelpers/HelperFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/loader/AbeFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

HelperFactory::HelperFactory() : logUtil(LogUtil::getInstance()){
}


                //@Throws(LicensingException.constructor)
            
    auto HelperFactory::getInstance(AbeClientInformationInterface* abeClientInformation, std::string factoryName, std::string className, HashMap<Object*, Object*>* hashMap, HttpServletRequest* httpServletRequest) -> Object*{

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            
    std::vector<Object*> params = std::vector<Object*>(2);;
    

    std::vector<Class*> classes = std::vector<Class*>(2);;
    

    AbeFactory* abeFactory = AbeFactory::getInstance();;
    
classes[0]= hashMap->getClass();
    
classes[1]= abeFactory->getClass();
    
params[0]= hashMap;
    
params[1]= httpServletRequest;
    

    Object* anyType = JavaBoxes::toObject(abeFactory->getInstance(abeClientInformation, className, classes, params));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(anyType);
    

                //: 
} catch(LicensingException& e) 
            {

    std::string error = JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Failed To Get Instance Args: HashMap=") +JavaString::valueOf(hashMap->toString())) +JavaString::valueOf(" HttpServletRequest=")) +JavaString::valueOf(httpServletRequest);;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    logUtil->put(error, JavaString::valueOf(factoryName) +JavaString::valueOf("->HelperFactory"), "getInstance(String, String, HashMap, PageContext)", &e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

    std::string error = "Failed To Get Instance";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    logUtil->put(error, JavaString::valueOf(factoryName) +JavaString::valueOf("->HelperFactory"), "getInstance(String, String, HashMap, PageContext)", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto HelperFactory::getInstance(AbeClientInformationInterface* abeClientInformation, std::string factoryName, std::string className, HashMap<Object*, Object*>* hashMap, PageContext* pageContext) -> Object*{

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            
    std::vector<Object*> params = std::vector<Object*>(2);;
    

    std::vector<Class*> classes = std::vector<Class*>(2);;
    

    AbeFactory* abeFactory = AbeFactory::getInstance();;
    
classes[0]= hashMap->getClass();
    
classes[1]= abeFactory->getClass();
    
params[0]= hashMap;
    
params[1]= pageContext;
    

    Object* anyType = JavaBoxes::toObject(abeFactory->getInstance(abeClientInformation, className, classes, params));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(anyType);
    

                //: 
} catch(LicensingException& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    std::string error = JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Failed To Get Instance Args: HashMap=") +JavaString::valueOf(hashMap->toString())) +JavaString::valueOf(" PageContext=")) +JavaString::valueOf(pageContext);;
    
logUtil->put(error, JavaString::valueOf(factoryName) +JavaString::valueOf("->HelperFactory"), "getInstance(String, String, HashMap, PageContext)", &e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->put(commonStrings->EXCEPTION, JavaString::valueOf(factoryName) +JavaString::valueOf("->HelperFactory"), "getInstance(String, String, HashMap, PageContext)", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto HelperFactory::getInstance(AbeClientInformationInterface* abeClientInformation, std::string factoryName, std::string className, HashMap<Object*, Object*>* hashMap, HashMap<Object*, Object*>* specialhashMap, PageContext* pageContext) -> Object*{

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            
    std::vector<Object*> params = std::vector<Object*>(3);;
    

    std::vector<Class*> classes = std::vector<Class*>(3);;
    

    AbeFactory* abeFactory = AbeFactory::getInstance();;
    
classes[0]= hashMap->getClass();
    
classes[1]= specialhashMap->getClass();
    
classes[2]= abeFactory->getClass();
    
params[0]= hashMap;
    
params[1]= specialhashMap;
    
params[2]= pageContext;
    

    Object* anyType = JavaBoxes::toObject(abeFactory->getInstance(abeClientInformation, className, classes, params));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(anyType);
    

                //: 
} catch(LicensingException& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    std::string error = JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Failed To Get Instance Args: HashMap=") +JavaString::valueOf(hashMap->toString())) +JavaString::valueOf(" PageContext=")) +JavaString::valueOf(pageContext);;
    
logUtil->put(error, JavaString::valueOf(factoryName) +JavaString::valueOf("->HelperFactory"), "getInstance(String, String, HashMap, PageContext)", &e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->put(commonStrings->EXCEPTION, JavaString::valueOf(factoryName) +JavaString::valueOf("->HelperFactory"), "getInstance(String, String, HashMap, PageContext)", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto HelperFactory::getInstance(AbeClientInformationInterface* abeClientInformation, std::string factoryName, std::string className) -> Object*{

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            
    Object* anyType = JavaBoxes::toObject(AbeFactory::getInstance()->getInstance(abeClientInformation, className));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(anyType);
    

                //: 
} catch(LicensingException& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->put(commonStrings->EXCEPTION, JavaString::valueOf(factoryName) +JavaString::valueOf("->HelperFactory"), "getInstance(String, String, HashMap, PageContext)", &e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->put(commonStrings->EXCEPTION, JavaString::valueOf(factoryName) +JavaString::valueOf("->HelperFactory"), "getInstance(String, String, HashMap, PageContext)", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}




        #endif //ADMIN_TAGHELPERS_HELPERFACTORY_CPP
