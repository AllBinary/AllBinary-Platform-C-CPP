
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_KEYFACTORYINITIALIZER_CPP
        #define ORG_ALLBINARY_GAME_INPUT_KEYFACTORYINITIALIZER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/KeyFactoryInitializer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/init/Init.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

KeyFactoryInitializer::KeyFactoryInitializer() : logUtil(LogUtil::getInstance()) {
        }
        
    auto KeyFactoryInitializer::init() -> void{
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->INIT);
    
SmallIntegerSingletonFactory::getInstance()->initWithRange(0x2D0, 6);
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_KEYFACTORYINITIALIZER_CPP
