
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_GAMEKEYMAPPINGFACTORY_CPP
        #define ORG_ALLBINARY_GAME_INPUT_GAMEKEYMAPPINGFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/GameKeyMappingFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/GameKeyFactory.h"

Object* GameKeyMappingFactory::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto GameKeyMappingFactory::getInstance() -> GameKeyMappingFactory*{

                        if(GameKeyMappingFactory::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    GameKeyMappingFactory::instance= new GameKeyMappingFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<GameKeyMappingFactory*>(GameKeyMappingFactory::instance);
    
}


GameKeyMappingFactory::GameKeyMappingFactory() : intKeyToGameKey(std::vector<GameKey*>(InputFactory::getInstance()->MAX)){

    GameKeyFactory* gameKeyFactory = GameKeyFactory::getInstance();;
    
this->setGameKey(gameKeyFactory->NONE);
    
this->setGameKey(gameKeyFactory->UP);
    
this->setGameKey(gameKeyFactory->DOWN);
    
this->setGameKey(gameKeyFactory->LEFT);
    
this->setGameKey(gameKeyFactory->RIGHT);
    
this->setGameKey(gameKeyFactory->KEY_POUND);
    
this->setGameKey(gameKeyFactory->KEY_STAR);
    
this->setGameKey(gameKeyFactory->KEY_NUM0);
    
this->setGameKey(gameKeyFactory->KEY_NUM1);
    
this->setGameKey(gameKeyFactory->KEY_NUM2);
    
this->setGameKey(gameKeyFactory->KEY_NUM3);
    
this->setGameKey(gameKeyFactory->KEY_NUM4);
    
this->setGameKey(gameKeyFactory->KEY_NUM5);
    
this->setGameKey(gameKeyFactory->KEY_NUM6);
    
this->setGameKey(gameKeyFactory->KEY_NUM7);
    
this->setGameKey(gameKeyFactory->KEY_NUM8);
    
this->setGameKey(gameKeyFactory->KEY_NUM9);
    
this->setGameKey(gameKeyFactory->GAME_A);
    
this->setGameKey(gameKeyFactory->GAME_B);
    
this->setGameKey(gameKeyFactory->GAME_C);
    
this->setGameKey(gameKeyFactory->GAME_D);
    
this->setGameKey(gameKeyFactory->FIRE);
    
this->setGameKey(gameKeyFactory->LEVEL_DOWN);
    
this->setGameKey(gameKeyFactory->LEVEL_UP);
    
}


    auto GameKeyMappingFactory::getGameKey(int32_t key) -> GameKey*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->intKeyToGameKey[key];
    
}


    auto GameKeyMappingFactory::setGameKey(GameKey* gameKey) -> void{
this->intKeyToGameKey[gameKey->getId()]= gameKey;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_GAMEKEYMAPPINGFACTORY_CPP
