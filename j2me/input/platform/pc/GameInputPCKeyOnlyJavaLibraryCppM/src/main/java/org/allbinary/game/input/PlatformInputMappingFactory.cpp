
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_PLATFORMINPUTMAPPINGFACTORY_CPP
        #define ORG_ALLBINARY_GAME_INPUT_PLATFORMINPUTMAPPINGFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/PlatformInputMappingFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/mapping/PersistentInputMapping.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/LaptopGameInputMapping.h"


PlatformInputMappingFactory::PlatformInputMappingFactory() : logUtil(LogUtil::getInstance()), inputToGameKeyMapping(PersistentInputMapping::getNullInstance()) {
        }
        auto PlatformInputMappingFactory::instance_owner() -> PlatformInputMappingFactory* { static std::unique_ptr<PlatformInputMappingFactory> value(new PlatformInputMappingFactory()); return value.get(); }
PlatformInputMappingFactory* PlatformInputMappingFactory::instance = PlatformInputMappingFactory::instance_owner();

    auto PlatformInputMappingFactory::getInstance() -> PlatformInputMappingFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PlatformInputMappingFactory::instance;
    
}


    auto PlatformInputMappingFactory::getPersistentInputMappingInstance() -> PersistentInputMapping*{

        try {
            
                        if(this->inputToGameKeyMapping == PersistentInputMapping::getNullInstance())
                        
                                    {
                                    this->inputToGameKeyMapping= new LaptopGameInputMapping();
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, &e);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->inputToGameKeyMapping;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_PLATFORMINPUTMAPPINGFACTORY_CPP
