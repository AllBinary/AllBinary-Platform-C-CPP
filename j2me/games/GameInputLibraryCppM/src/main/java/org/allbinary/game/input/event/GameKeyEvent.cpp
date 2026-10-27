
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENT_CPP
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/event/GameKeyEvent.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

    auto GameKeyEvent::createEvent(Object* anyType, int32_t sourceId, int32_t key) -> GameKeyEvent*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new GameKeyEvent(anyType, sourceId, 0, 0, key, false);
    
}

auto GameKeyEvent::NONE_owner() -> GameKeyEvent* { static std::unique_ptr<GameKeyEvent> value(new GameKeyEvent(NullUtil::getInstance()->NULL_OBJECT,  -1,  -1,  -1,  -1, false)); return value.get(); }
GameKeyEvent* GameKeyEvent::NONE = GameKeyEvent::NONE_owner();

GameKeyEvent::GameKeyEvent(Object* anyType, int32_t sourceId, int32_t originalKey, int32_t gameActionKey, int32_t key, bool repeated) : AllBinaryEventObject(anyType){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->sourceId= sourceId;
    
this->setOriginalKey(originalKey);
    
this->key= key;
    
this->setGameActionKey(gameActionKey);
    
this->setRepeatEvents(repeated);
    
}


    auto GameKeyEvent::init(Object* anyType) -> void{
this->setSource(anyType);
    
}


    auto GameKeyEvent::setRepeatEvents(bool repeated) -> void{
this->repeated= repeated;
    
}


    auto GameKeyEvent::hasRepeatEvents() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->repeated;
    
}


    auto GameKeyEvent::getKey() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->key;
    
}


    auto GameKeyEvent::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("\nKey: ");
    
stringBuffer->appendint(this->getKey());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    auto GameKeyEvent::getOriginalKey() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->originalKey;
    
}


    auto GameKeyEvent::setOriginalKey(int32_t originalKey) -> void{
this->originalKey= originalKey;
    
}


    auto GameKeyEvent::getGameActionKey() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameActionKey;
    
}


    auto GameKeyEvent::setGameActionKey(int32_t gameActionKey) -> void{
this->gameActionKey= gameActionKey;
    
}


    auto GameKeyEvent::getSourceId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->sourceId;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENT_CPP
