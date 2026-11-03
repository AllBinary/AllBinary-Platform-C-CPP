
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
        



        #ifndef WORKFLOWS_TEMPLATE_DATA_BASICWORKFLOW_CPP
        #define WORKFLOWS_TEMPLATE_DATA_BASICWORKFLOW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "workflows/template/data/BasicWorkFlow.h"
        

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
        

BasicWorkFlow::BasicWorkFlow(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), abeClientInformation(ServiceClientInformationInterfaceFactory::getInstance()){

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->WORKFLOW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Properties: ") +JavaString::valueOf(propertiesHashMap->toString()), this, "BasicWorkFlow()");
    

                                    }
                                
this->propertiesHashMap= propertiesHashMap;
    
this->pageContext= pageContext;
    
this->validationDomNodeInterface= dynamic_cast<ValidationComponentInterface*>(TransformFactory::getInstance()->getInstance(this->abeClientInformation, propertiesHashMap, pageContext));
    
}


                //@Throws(Exception.constructor)
            
    auto BasicWorkFlow::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->getPropertiesHashMap()->get(WorkFlowData::getInstance()->NAME));
    
}


    auto BasicWorkFlow::getPropertiesHashMap() -> HashMap<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->propertiesHashMap;
    
}


    auto BasicWorkFlow::getPageContext() -> PageContext*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->pageContext;
    
}


                //@Throws(Exception.constructor)
            
    auto BasicWorkFlow::process() -> int32_t{

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->WORKFLOW))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->PROCESS);
    

                                    }
                                

                        if(JavaBoxes::value<bool>(this->validationDomNodeInterface->isValid()))
                        
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




        #endif //WORKFLOWS_TEMPLATE_DATA_BASICWORKFLOW_CPP
