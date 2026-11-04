
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_PLAYERGAMENOTIFICATIONHUD_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_PLAYERGAMENOTIFICATIONHUD_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Boolean.h"
        
class Font;
class Graphics;
class GameAdStateFactory;
#include <org/allbinary/canvas/Processor.h>
class GameAdState;
class GameNotification;
#include <org/allbinary/game/ag/layer/hud/basic/notification/GameNotificationHud.h>
class GameNotificationEventHandler;
class CustomGPoint;
class GPoint;
class BasicColor;
class DisplayInfoSingleton;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
class LogUtil;
class StringMaker;
class StringUtil;
class CommonStrings;
class GameTickTimeDelayHelper;
class GameTickTimeDelayHelperFactory;
class TimeDelayHelper;
class CircularIndexUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //class SetAndRemoveProcessor;
//class NextUnremoveableProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PlayerGameNotificationHud: public GameNotificationHud, public virtual UpdateMyFontInterface {
private: class SetAndRemoveProcessor;
private: class NextUnremoveableProcessor;

    private: GameTickTimeDelayHelper* gameTickTimeDelayHelper;

    private: const std::string EMPTY_STRING;

    private: DisplayInfoSingleton* displayInfo;

    private: TimeDelayHelper* timeDelayHelper;

    private: CircularIndexUtil* circularIndexUtil;

    private: GameNotification* gameNotification;

    private: GameNotification* permanentGameNotification;

//inner= member=true isStatic=
private: class SetAndRemoveProcessor: public Processor {

    public: PlayerGameNotificationHud* outer = nullptr;

    private: PlayerGameNotificationHud* updateMeasurementProcessor;

public: SetAndRemoveProcessor(PlayerGameNotificationHud* updateMeasurementProcessor);

                //@Throws(Exception.constructor)
            
    public: void process();

};

            
//inner= member=true isStatic=
private: class NextUnremoveableProcessor: public Processor {

    public: PlayerGameNotificationHud* outer = nullptr;

    private: PlayerGameNotificationHud* updateMeasurementProcessor;

public: NextUnremoveableProcessor(PlayerGameNotificationHud* updateMeasurementProcessor);

                //@Throws(Exception.constructor)
            
    public: void process();

};

            
    private: Processor* setAndRemoveProcessor;

    private: Processor* nextUnremoveableProcessor;

    private: Processor* processor;

    private: const std::string PERMANENT_GAME_NOTIFICATION = "Permanent Game Notification: ";

    private: std::string lastString;

    private: std::string string;

    private: CustomGPoint* point;

    private: int32_t width= 0;

public: PlayerGameNotificationHud(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);

    public: void updateMeasurement(Graphics* graphics);

    /*protected*/ public: GPoint* getPoint(int32_t x, int32_t y);

    /*protected*/ public: void add(std::string string, int32_t seconds, BasicColor* basicColor, bool permanent);

                //@Throws(Exception.constructor)
            
    public: void processTick();

                //@Throws(Exception.constructor)
            
    private: void setAndRemove();

                //@Throws(Exception.constructor)
            
    private: void setAndRemoveProcess();

                //@Throws(Exception.constructor)
            
    private: void setNextUnremoveable();

                //@Throws(Exception.constructor)
            
    private: void setNextUnremoveableProcess();

    public: void clear();

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_PLAYERGAMENOTIFICATIONHUD_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_PLAYERGAMENOTIFICATIONHUD_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_PLAYERGAMENOTIFICATIONHUD_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/business/advertisement/GameAdStateFactory.h>)
#include <org/allbinary/business/advertisement/GameAdStateFactory.h>
#endif
#if __has_include(<org/allbinary/canvas/Processor.h>)
#include <org/allbinary/canvas/Processor.h>
#endif
#if __has_include(<org/allbinary/game/GameAdState.h>)
#include <org/allbinary/game/GameAdState.h>
#endif
#if __has_include(<org/allbinary/game/ag/layer/hud/basic/notification/GameNotification.h>)
#include <org/allbinary/game/ag/layer/hud/basic/notification/GameNotification.h>
#endif
#if __has_include(<org/allbinary/game/ag/layer/hud/basic/notification/GameNotificationHud.h>)
#include <org/allbinary/game/ag/layer/hud/basic/notification/GameNotificationHud.h>
#endif
#if __has_include(<org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>)
#include <org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>
#endif
#if __has_include(<org/allbinary/graphics/CustomGPoint.h>)
#include <org/allbinary/graphics/CustomGPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontInterface.h>)
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/time/GameTickTimeDelayHelper.h>)
#include <org/allbinary/time/GameTickTimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/time/GameTickTimeDelayHelperFactory.h>)
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/util/CircularIndexUtil.h>)
#include <org/allbinary/util/CircularIndexUtil.h>
#endif

        #endif
    
