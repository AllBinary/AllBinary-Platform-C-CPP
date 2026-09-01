
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/Integer.h"
        
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
        : public WorkFlowInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const AbeClientInformationInterface abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();

    private: ValidationComponentInterface validationDomNodeInterface;

    private: HashMap<any, any> propertiesHashMap;

    private: PageContext pageContext;

public: BasicWorkFlow(HashMap<any, any> propertiesHashMap, PageContext pageContext){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().WORKFLOW))
                        
                                    {
                                    this->logUtil.putF("Properties: " +propertiesHashMap.toString(), this, "BasicWorkFlow()");
    

                                    }
                                
this->propertiesHashMap= propertiesHashMap;
    
this->pageContext= pageContext;
    
this->validationDomNodeInterface= TransformFactory::getInstance().getInstance(this->abeClientInformation, propertiesHashMap, pageContext) as ValidationComponentInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getPropertiesHashMap().get(WorkFlowData::getInstance().NAME) as string;
    
}


    protected: HashMap<any, any> getPropertiesHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->propertiesHashMap;
    
}


    protected: PageContext getPageContext(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->pageContext;
    
}


                //@Throws(Exception.constructor)
            
    public: Integer process(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().WORKFLOW))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.PROCESS);
    

                                    }
                                

                        if(this->validationDomNodeInterface.isValid().valueOf())
                        
                                    {
                                    this->pageContext.getOut().print(this->validationDomNodeInterface.view());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Integer::valueOf(TagSupport::EVAL_BODY_INCLUDE);;
    

                                    }
                                
                        else {
                            this->pageContext.getOut().print(this->validationDomNodeInterface.validationInfo());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Integer::valueOf(TagSupport::SKIP_BODY);;
    

                        }
                            
}


};

            

