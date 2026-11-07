
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_STORETAGWORKFLOWFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_STORETAGWORKFLOWFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/control/workflow/StoreTagWorkFlowFactory.h"
        

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

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/loader/AbeFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/control/workflow/StoreWorkFlowInterface.h"

auto StoreTagWorkFlowFactory::instance_owner() -> StoreTagWorkFlowFactory* { static std::unique_ptr<StoreTagWorkFlowFactory> value(new StoreTagWorkFlowFactory()); return value.get(); }
StoreTagWorkFlowFactory* StoreTagWorkFlowFactory::instance = StoreTagWorkFlowFactory::instance_owner();

    auto StoreTagWorkFlowFactory::getInstance() -> StoreTagWorkFlowFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StoreTagWorkFlowFactory::instance;
    
}


StoreTagWorkFlowFactory::StoreTagWorkFlowFactory() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor, LicensingException.constructor)
            
    auto StoreTagWorkFlowFactory::getInstance(AbeClientInformationInterface* abeClientInformation, HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext) -> StoreWorkFlowInterface*{

        try {
            
    std::string workFlowClassName = JavaBoxes::unbox<std::string>(propertiesHashMap->get(DynamicObjectData::NAME));;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Creating WorkFlow: ");
    
stringBuffer->append(workFlowClassName);
    
stringBuffer->append("->");
    
stringBuffer->append(StoreTagWorkFlowFactory::instance->getClass()->getName());
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, commonStrings->GET_INSTANCE);
    

                                    }
                                

    std::vector<Object*> params = std::vector<Object*>(2);;
    

    std::vector<Class*> classes = std::vector<Class*>(2);;
    
classes[0]= propertiesHashMap->getClass();
    
classes[1]= AbeFactory::getInstance()->getClass();
    
params[0]= propertiesHashMap;
    
params[1]= pageContext;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<StoreWorkFlowInterface*>(AbeFactory::getInstance()->getInstance(abeClientInformation, workFlowClassName, classes, params));
    

                //: 
} catch(LicensingException& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    std::string workFlowClassName = JavaBoxes::unbox<std::string>(propertiesHashMap->get(DynamicObjectData::NAME));;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Error Creating WorkFlow: ");
    
stringBuffer->append(workFlowClassName);
    
stringBuffer->append("->");
    
stringBuffer->append(StoreTagWorkFlowFactory::instance->getClass()->getName());
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(JavaString::valueOf(stringBuffer), this, commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    std::string workFlowClassName = JavaBoxes::unbox<std::string>(propertiesHashMap->get(DynamicObjectData::NAME));;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Error Creating WorkFlow: ");
    
stringBuffer->append(workFlowClassName);
    
stringBuffer->append("->");
    
stringBuffer->append(StoreTagWorkFlowFactory::instance->getClass()->getName());
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(JavaString::valueOf(stringBuffer), this, commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_STORETAGWORKFLOWFACTORY_CPP
