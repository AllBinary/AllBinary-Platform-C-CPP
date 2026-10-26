
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_GAMENOTIFICATIONHUD_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_GAMENOTIFICATIONHUD_H

            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/game/graphics/hud/BasicHudFactory.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEvent.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationListenerInterface.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameNotification.h"

class GameNotificationHud: public BasicHud, public GameNotificationListenerInterface {

    public: static const GameNotificationHud NULL_GAME_NOTIFICATION = GameNotificationHud(BasicHudFactory::getInstance().TOPCENTER, BasicHudFactory::getInstance().HORIZONTAL, 0, BasicColorFactory::getInstance().RED);

public: GameNotificationHud(int32_t location, int32_t direction, int32_t bufferZone, BasicColor basicColor);

    public: void onEvent(AllBinaryEventObject eventObject);

    private: const std::string METHOD_NAME = "onGameNotificationEvent";

    private: GameNotificationEvent lastGameNotificationEvent = GameNotification::NULL_GAME_NOTIFICATION_EVENT;

                //@Throws(Exception.constructor)
            
    public: void onGameNotificationEvent(GameNotificationEvent gameNotificationEvent);

    protected: void add(std::string string, Integer seconds, BasicColor basicColor, Boolean permanent);

                //@Throws(Exception.constructor)
            
    public: void processTick();

    public: void paint(Graphics graphics);

    public: void clear();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_GAMENOTIFICATIONHUD_H
