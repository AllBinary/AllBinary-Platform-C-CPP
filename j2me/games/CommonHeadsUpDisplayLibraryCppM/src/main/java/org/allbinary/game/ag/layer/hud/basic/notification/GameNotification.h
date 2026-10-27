
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_GAMENOTIFICATION_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_GAMENOTIFICATION_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/game/layer/hud/event/GameNotificationEvent.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameNotification
            : public Object
         {

    public: static GameNotificationEvent* NULL_GAME_NOTIFICATION_EVENT() { static std::unique_ptr<GameNotificationEvent> value(new GameNotificationEvent(NullUtil::getInstance()->NULL_OBJECT, StringUtil::getInstance()->EMPTY_STRING, int32_t(0), BasicColorFactory::getInstance()->RED, BooleanFactory::getInstance()->FALSE)); return value.get(); }

    public: BasicArrayList* stringList = new BasicArrayListD();

    public: BasicArrayList* timeList = new BasicArrayListD();

    public: BasicArrayList* colorList = new BasicArrayListD();

    public: void add(std::string string, int32_t seconds, BasicColor* basicColor);

    public: void clear();

    public: int32_t getSize();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_GAMENOTIFICATION_H
