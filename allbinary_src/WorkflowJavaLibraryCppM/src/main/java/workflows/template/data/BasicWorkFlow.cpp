
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
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <javax/servlet/jsp/tagext/TagSupport.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/control/workflow/WorkFlowData.h>

      
#include <org/allbinary/logic/control/workflow/WorkFlowInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
#include <org/allbinary/logic/visual/transform/TransformFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicWorkFlow
            : public Object
        , public WorkFlowInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: AbeClientInformationInterface* abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();

    private: ValidationComponentInterface* validationDomNodeInterface;

    private: HashMap<Object*, Object*>* propertiesHashMap;

    private: PageContext* pageContext;

public: BasicWorkFlow(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->WORKFLOW))
                        
                                    {
                                    this->logUtil->putF("Properties: " +propertiesHashMap->toString(), this, "BasicWorkFlow()");
    

                                    }
                                
this->propertiesHashMap= propertiesHashMap;
    
this->pageContext= pageContext;
    
this->validationDomNodeInterface= dynamic_cast<ValidationComponentInterface*>(TransformFactory::getInstance()->getInstance(this->abeClientInformation, propertiesHashMap, pageContext));
    
}


                //@Throws(Exception.constructor)
            
    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getPropertiesHashMap()->get(WorkFlowData::getInstance()->NAME);
    
}


    protected: HashMap<Object*, Object*>* getPropertiesHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->propertiesHashMap;
    
}


    protected: PageContext* getPageContext(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->pageContext;
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t process(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->WORKFLOW))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->PROCESS);
    

                                    }
                                

                        if(this->validationDomNodeInterface->isValid().valueOf())
                        
                                    {
                                    this->pageContext->getOut()->print(this->validationDomNodeInterface->view());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Integer.valueOf(TagSupport::EVAL_BODY_INCLUDE);;
    

                                    }
                                
                        else {
                            this->pageContext->getOut()->print(this->validationDomNodeInterface->validationInfo());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Integer.valueOf(TagSupport::SKIP_BODY);;
    

                        }
                            
}


};

            

