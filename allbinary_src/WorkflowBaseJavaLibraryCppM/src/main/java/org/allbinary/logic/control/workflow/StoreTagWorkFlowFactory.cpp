
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/control/workflow/StoreWorkFlowInterface.h"

class StoreTagWorkFlowFactory
            : public Object
         {

    private: static StoreTagWorkFlowFactory* instance() { static std::unique_ptr<StoreTagWorkFlowFactory> value(new StoreTagWorkFlowFactory()); return value.get(); }

    public: static StoreTagWorkFlowFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreTagWorkFlowFactory::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

private: StoreTagWorkFlowFactory(){
}


                //@Throws(Exception.constructor, LicensingException.constructor)
            
    public: StoreWorkFlowInterface* getInstance(AbeClientInformationInterface* abeClientInformation, HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext){

        try {
            
    std::string workFlowClassName = propertiesHashMap->get(DynamicObjectData::NAME);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Creating WorkFlow: ");
    
stringBuffer->append(workFlowClassName);
    
stringBuffer->append("->");
    
stringBuffer->append(StoreTagWorkFlowFactory::instance()->getClass()->getName());
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(stringBuffer->toString(), this, commonStrings->GET_INSTANCE);
    

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

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    std::string workFlowClassName = propertiesHashMap->get(DynamicObjectData::NAME);;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Error Creating WorkFlow: ");
    
stringBuffer->append(workFlowClassName);
    
stringBuffer->append("->");
    
stringBuffer->append(StoreTagWorkFlowFactory::instance()->getClass()->getName());
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(stringBuffer->toString(), this, commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    std::string workFlowClassName = propertiesHashMap->get(DynamicObjectData::NAME);;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Error Creating WorkFlow: ");
    
stringBuffer->append(workFlowClassName);
    
stringBuffer->append("->");
    
stringBuffer->append(StoreTagWorkFlowFactory::instance()->getClass()->getName());
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(stringBuffer->toString(), this, commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

