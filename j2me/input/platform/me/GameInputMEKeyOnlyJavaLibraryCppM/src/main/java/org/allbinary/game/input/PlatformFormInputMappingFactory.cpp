
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
        
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/GameKeyFactory.h"

class PlatformFormInputMappingFactory
            : public Object
         {

    private: static inline Object* instance = NullUtil::getInstance()->NULL_OBJECT;

    public: static PlatformFormInputMappingFactory* getInstance(){

                        if(PlatformFormInputMappingFactory::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    PlatformFormInputMappingFactory::instance= new PlatformFormInputMappingFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<PlatformFormInputMappingFactory*>(PlatformFormInputMappingFactory::instance);
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: InputToGameKeyMapping* inputToGameKeyMapping = InputToGameKeyMapping::getNullInstance();

    public: InputToGameKeyMapping* getOrCreate(){

        try {
            
                        if(this->inputToGameKeyMapping == InputToGameKeyMapping::getNullInstance())
                        
                                    {
                                    
    InputToGameKeyMapping* inputToGameKeyMapping = new InputToGameKeyMapping();;
    

    GameKeyFactory* gameKeyFactory = GameKeyFactory::getInstance();;
    
inputToGameKeyMapping->add(gameKeyFactory->UP, gameKeyFactory->UP);
    
inputToGameKeyMapping->add(gameKeyFactory->DOWN, gameKeyFactory->DOWN);
    
inputToGameKeyMapping->add(gameKeyFactory->LEFT, gameKeyFactory->LEFT);
    
inputToGameKeyMapping->add(gameKeyFactory->RIGHT, gameKeyFactory->RIGHT);
    
inputToGameKeyMapping->add(gameKeyFactory->KEY_NUM1, gameKeyFactory->GAME_A);
    
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


};

            

