
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_GENERATOR_TRANSFORMGENERATORUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_GENERATOR_TRANSFORMGENERATORUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/generator/TransformGeneratorUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/InputOutputTypeData.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/TransformFactory.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/generator/StoreFileGenerator.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto TransformGeneratorUtil::instance_owner() -> TransformGeneratorUtil* { static std::unique_ptr<TransformGeneratorUtil> value(new TransformGeneratorUtil()); return value.get(); }
TransformGeneratorUtil* TransformGeneratorUtil::instance = TransformGeneratorUtil::instance_owner();

    auto TransformGeneratorUtil::getInstance() -> TransformGeneratorUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformGeneratorUtil::instance;
    
}


TransformGeneratorUtil::TransformGeneratorUtil() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto TransformGeneratorUtil::generate(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, TransformInfoInterface* ownerTransformInfoInterface) -> void{

        try {
            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Generating View: ") +JavaString::valueOf(transformInfoInterface->getName()), this, "generate()");
    

                                    }
                                

    TransformInterface* componentInterface = TransformFactory::getInstance()->getInstance(abeClientInformation, transformInfoInterface->getName(), ownerTransformInfoInterface);;
    

    std::string result = componentInterface->view();;
    

    TransformInfoHttpInterface* httpTransformInfoInterface = dynamic_cast<TransformInfoHttpInterface*>(componentInterface->getTransformInfoInterface());;
    

    InputOutputTypeData* inputOutputTypeData = InputOutputTypeData::getInstance();;
    

                        if(JavaString::indexOf(result, "<HTML>") >= 0)
                        
                                    {
                                    httpTransformInfoInterface->getPropertiesHashMap()->put(inputOutputTypeData->NAME, inputOutputTypeData->DEFAULT);
    

                                    }
                                
                        else {
                            httpTransformInfoInterface->getPropertiesHashMap()->put(inputOutputTypeData->NAME, inputOutputTypeData->DEFAULT_FRAGMENT);
    

                        }
                            
(new StoreFileGenerator(componentInterface->getTransformInfoInterface()))->process(result);
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put("Failed to generate a view", this, "generate()", &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    auto TransformGeneratorUtil::generate(AbeClientInformationInterface* abeClientInformation, TransformInfoDomNode* transformInfoDomNode, TransformInfoInterface* ownerTransformInfoInterface) -> void{
this->generate(abeClientInformation, transformInfoDomNode->getTransformInfoInterface(), ownerTransformInfoInterface);
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_GENERATOR_TRANSFORMGENERATORUTIL_CPP
