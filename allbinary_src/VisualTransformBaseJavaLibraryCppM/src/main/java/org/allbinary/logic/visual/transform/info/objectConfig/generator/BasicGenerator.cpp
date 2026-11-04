
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERATOR_BASICGENERATOR_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERATOR_BASICGENERATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/info/objectConfig/generator/BasicGenerator.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGenerator.h"


BasicGenerator::BasicGenerator() : logUtil(LogUtil::getInstance()){
}


    auto BasicGenerator::process(std::string input) -> std::string{

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Processing", this, this->commonStrings->PROCESS);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return input;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERATOR_BASICGENERATOR_CPP
