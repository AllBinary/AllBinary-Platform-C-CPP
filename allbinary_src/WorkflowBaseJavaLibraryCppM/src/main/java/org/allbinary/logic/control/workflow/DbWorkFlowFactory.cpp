
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_DBWORKFLOWFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_DBWORKFLOWFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/control/workflow/DbWorkFlowFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/DynamicObjectData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/loader/AbeFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/control/workflow/WorkFlowWrapper.h"
#include "org/allbinary/logic/control/workflow/WorkFlowInterface.h"

auto DbWorkFlowFactory::instance_owner() -> DbWorkFlowFactory* { static std::unique_ptr<DbWorkFlowFactory> value(new DbWorkFlowFactory()); return value.get(); }
DbWorkFlowFactory* DbWorkFlowFactory::instance = DbWorkFlowFactory::instance_owner();

    auto DbWorkFlowFactory::getInstance() -> DbWorkFlowFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DbWorkFlowFactory::instance;
    
}


DbWorkFlowFactory::DbWorkFlowFactory() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor, LicensingException.constructor)
            
    auto DbWorkFlowFactory::getInstance(AbeClientInformationInterface* abeClientInformation, HashMap<Object*, Object*>* hashMap) -> WorkFlowInterface*{

        try {
            
    std::string className = JavaBoxes::unbox<std::string>(hashMap->get(DynamicObjectData::NAME));;
    

    std::vector<Object*> params = std::vector<Object*>(1);;
    

    std::vector<Class*> classes = std::vector<Class*>(1);;
    
classes[0]= hashMap->getClass();
    
params[0]= hashMap;
    

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




        #endif //ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_DBWORKFLOWFACTORY_CPP
