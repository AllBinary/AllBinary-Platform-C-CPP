
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class Graphics;
#include <org/allbinary/game/graphics/hud/BasicHud.h>
class BasicHudFactory;
class GameNotificationEvent;
#include <org/allbinary/game/layer/hud/event/GameNotificationListenerInterface.h>
class BasicColor;
class BasicColorFactory;
class ForcedLogUtil;
class AllBinaryEventObject;
class EventStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameNotification;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameNotificationHud: public BasicHud, public GameNotificationListenerInterface {

    private: static GameNotificationHud* NULL_GAME_NOTIFICATION_owner();
    public: static GameNotificationHud* NULL_GAME_NOTIFICATION;

public: GameNotificationHud(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);

    public: void onEvent(AllBinaryEventObject* eventObject);

    private: const std::string METHOD_NAME = "onGameNotificationEvent";

    private: GameNotificationEvent* lastGameNotificationEvent;

                //@Throws(Exception.constructor)
            
    public: void onGameNotificationEvent(GameNotificationEvent* gameNotificationEvent);

    /*protected*/ public: void add(std::string string, int32_t seconds, BasicColor* basicColor, bool permanent);

                //@Throws(Exception.constructor)
            
    public: void processTick();

    public: void paint(Graphics* graphics);

    public: void clear();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_GAMENOTIFICATIONHUD_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_GAMENOTIFICATIONHUD_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_GAMENOTIFICATIONHUD_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/graphics/hud/BasicHud.h>)
#include <org/allbinary/game/graphics/hud/BasicHud.h>
#endif
#if __has_include(<org/allbinary/game/graphics/hud/BasicHudFactory.h>)
#include <org/allbinary/game/graphics/hud/BasicHudFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/hud/event/GameNotificationEvent.h>)
#include <org/allbinary/game/layer/hud/event/GameNotificationEvent.h>
#endif
#if __has_include(<org/allbinary/game/layer/hud/event/GameNotificationListenerInterface.h>)
#include <org/allbinary/game/layer/hud/event/GameNotificationListenerInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif
#if __has_include("org/allbinary/game/ag/layer/hud/basic/notification/GameNotification.h")
#include "org/allbinary/game/ag/layer/hud/basic/notification/GameNotification.h"
#endif

        #endif
    
