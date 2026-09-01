
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTFACTORY_H

            #include <vector>
        
            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>

      
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameKeyEvent.h"

class GameKeyEventFactory
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static GameKeyEventFactory getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: const int32_t TOUCH_BUTTON_SOURCE_ID = 2;

    public: const int32_t MOTION_GESTURE_SOURCE_ID = 3;

    private: const int32_t MAX_SOURCES = 4;

    private: std::vector<std::vector<GameKeyEvent>> ARRAY = new Array(this->MAX_SOURCES).fill(null).map(() => new Array(InputFactory::getInstance().MAX).fill(0))
                                                            ;

private: GameKeyEventFactory();

    public: void init();

                //@Throws(Exception.constructor)
            
    public: GameKeyEvent getInstanceForKey(GameKeyEventSourceInterface anyType, int32_t key);

                //@Throws(Exception.constructor)
            
    public: GameKeyEvent getInstanceForInput(GameKeyEventSourceInterface anyType, Input input);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTFACTORY_H
