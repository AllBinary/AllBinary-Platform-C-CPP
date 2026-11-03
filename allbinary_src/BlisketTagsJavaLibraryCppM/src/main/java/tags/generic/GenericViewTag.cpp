
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
        



        #ifndef TAGS_GENERIC_GENERICVIEWTAG_CPP
        #define TAGS_GENERIC_GENERICVIEWTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "tags/generic/GenericViewTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/InputOutputTypeData.h>

      
#include <tags/TransformTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GenericViewTag::GenericViewTag() : logUtil(LogUtil::getInstance()){

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


    auto GenericViewTag::setOutput(std::string value) -> void{
this->output= value;
    
this->getPropertiesHashMap()->put(InputOutputTypeData::getInstance()->NAME, this->output);
    
}


    auto GenericViewTag::setFile(std::string value) -> void{
this->file= value;
    
this->getPropertiesHashMap()->put(InputOutputTypeData::getInstance()->FILE, this->file);
    
}




        #endif //TAGS_GENERIC_GENERICVIEWTAG_CPP
