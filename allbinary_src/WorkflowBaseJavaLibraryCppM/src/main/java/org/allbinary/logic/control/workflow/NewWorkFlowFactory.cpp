
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_NEWWORKFLOWFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_NEWWORKFLOWFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/control/workflow/NewWorkFlowFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/DynamicObjectData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/loader/AbeFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/control/workflow/WorkFlowWrapper.h"
#include "org/allbinary/logic/control/workflow/WorkFlowInterface.h"

auto NewWorkFlowFactory::instance_owner() -> NewWorkFlowFactory* { static std::unique_ptr<NewWorkFlowFactory> value(new NewWorkFlowFactory()); return value.get(); }
NewWorkFlowFactory* NewWorkFlowFactory::instance = NewWorkFlowFactory::instance_owner();

    auto NewWorkFlowFactory::getInstance() -> NewWorkFlowFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NewWorkFlowFactory::instance;
    
}


NewWorkFlowFactory::NewWorkFlowFactory() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor, LicensingException.constructor)
            
    auto NewWorkFlowFactory::getInstance(AbeClientInformationInterface* abeClientInformation, HashMap<Object*, Object*>* hashMap, PageContext* pageContext) -> WorkFlowInterface*{

        try {
            
    std::string className = JavaBoxes::unbox<std::string>(hashMap->get(DynamicObjectData::NAME));;
    

    std::vector<Object*> params = std::vector<Object*>(2);;
    

    std::vector<Class*> classes = std::vector<Class*>(2);;
    
classes[0]= hashMap->getClass();
    
classes[1]= AbeFactory::getInstance()->getClass();
    
params[0]= hashMap;
    
params[1]= pageContext;
    

    Object* anyType = JavaBoxes::toObject(AbeFactory::getInstance()->getInstance(abeClientInformation, className, classes, params));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<WorkFlowInterface*>(new WorkFlowWrapper(anyType));
    

                //: 
} catch(LicensingException& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "getInstance(HashMap)", &e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "getInstance(HashMap)", &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor, LicensingException.constructor)
            
    auto NewWorkFlowFactory::getInstance(AbeClientInformationInterface* abeClientInformation, std::string className) -> WorkFlowInterface*{

        try {
            
    StringUtil* stringUtil = StringUtil::getInstance();;
    

                        if(true && className.compare(stringUtil->EMPTY_STRING) != 0)
                        
                                    {
                                    
    Object* anyType = JavaBoxes::toObject(AbeFactory::getInstance()->getInstance(abeClientInformation, className, 
                            nullptr, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<WorkFlowInterface*>(new WorkFlowWrapper(anyType));
    

                                    }
                                
                             else 
                        if()
                        

                //: 
} catch(LicensingException& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_NEWWORKFLOWFACTORY_CPP
