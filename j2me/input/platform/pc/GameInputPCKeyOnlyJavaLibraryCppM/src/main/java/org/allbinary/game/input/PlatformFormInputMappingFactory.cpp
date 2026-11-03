
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_PLATFORMFORMINPUTMAPPINGFACTORY_CPP
        #define ORG_ALLBINARY_GAME_INPUT_PLATFORMFORMINPUTMAPPINGFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/PlatformFormInputMappingFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/PCKeyFactory.h"
#include "org/allbinary/game/input/GameKeyFactory.h"


PlatformFormInputMappingFactory::PlatformFormInputMappingFactory() : logUtil(LogUtil::getInstance()), inputToGameKeyMapping(InputToGameKeyMapping::getNullInstance()) {
        }
        Object* PlatformFormInputMappingFactory::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto PlatformFormInputMappingFactory::getInstance() -> PlatformFormInputMappingFactory*{

                        if(PlatformFormInputMappingFactory::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    PlatformFormInputMappingFactory::instance= new PlatformFormInputMappingFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<PlatformFormInputMappingFactory*>(PlatformFormInputMappingFactory::instance);
    
}


    auto PlatformFormInputMappingFactory::getOrCreate() -> InputToGameKeyMapping*{

        try {
            
                        if(this->inputToGameKeyMapping == InputToGameKeyMapping::getNullInstance())
                        
                                    {
                                    
    PCKeyFactory* pcKeyFactory = PCKeyFactory::getInstance();;
    

    InputToGameKeyMapping* inputToGameKeyMapping = new InputToGameKeyMapping();;
    

    GameKeyFactory* gameKeyFactory = GameKeyFactory::getInstance();;
    
inputToGameKeyMapping->add(gameKeyFactory->UP, pcKeyFactory->DPAD_UP);
    
inputToGameKeyMapping->add(gameKeyFactory->DOWN, pcKeyFactory->DPAD_DOWN);
    
inputToGameKeyMapping->add(gameKeyFactory->LEFT, pcKeyFactory->DPAD_LEFT);
    
inputToGameKeyMapping->add(gameKeyFactory->RIGHT, pcKeyFactory->DPAD_RIGHT);
    
inputToGameKeyMapping->add(gameKeyFactory->KEY_NUM1, pcKeyFactory->ENTER);
    
this->inputToGameKeyMapping= inputToGameKeyMapping;
    

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




        #endif //ORG_ALLBINARY_GAME_INPUT_PLATFORMFORMINPUTMAPPINGFACTORY_CPP
