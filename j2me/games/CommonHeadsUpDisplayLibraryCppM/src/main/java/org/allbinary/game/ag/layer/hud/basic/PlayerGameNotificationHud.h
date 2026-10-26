
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

            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/business/advertisement/GameAdStateFactory.h>

      
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/game/GameAdState.h>

      
#include <org/allbinary/game/ag/layer/hud/basic/notification/GameNotification.h>

      
#include <org/allbinary/game/ag/layer/hud/basic/notification/GameNotificationHud.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>

      
#include <org/allbinary/graphics/CustomGPoint.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //#include "SetAndRemoveProcessor.h"
//#include "NextUnremoveableProcessor.h"

class PlayerGameNotificationHud: public GameNotificationHud, public UpdateMyFontInterface {

    private: const GameTickTimeDelayHelper gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory::getInstance();

    private: const std::string EMPTY_STRING = StringUtil::getInstance().EMPTY_STRING;

    private: const DisplayInfoSingleton displayInfo = DisplayInfoSingleton::getInstance();

    private: const TimeDelayHelper timeDelayHelper = TimeDelayHelper(0);

    private: CircularIndexUtil circularIndexUtil;

    private: const GameNotification gameNotification = GameNotification();

    private: const GameNotification permanentGameNotification = GameNotification();

//inner= member=true isStatic=
class SetAndRemoveProcessor: public Processor {

    private: PlayerGameNotificationHud updateMeasurementProcessor;

public: SetAndRemoveProcessor(PlayerGameNotificationHud updateMeasurementProcessor);

                //@Throws(Exception.constructor)
            
    public: void process();

};

            
//inner= member=true isStatic=
class NextUnremoveableProcessor: public Processor {

    private: PlayerGameNotificationHud updateMeasurementProcessor;

public: NextUnremoveableProcessor(PlayerGameNotificationHud updateMeasurementProcessor);

                //@Throws(Exception.constructor)
            
    public: void process();

};

            
    private: const Processor setAndRemoveProcessor = SetAndRemoveProcessor(this);

    private: const Processor nextUnremoveableProcessor = NextUnremoveableProcessor(this);

    private: Processor processor = Processor::getInstance();

    private: const std::string PERMANENT_GAME_NOTIFICATION = "Permanent Game Notification: ";

    private: std::string lastString = StringUtil::getInstance().EMPTY_STRING;

    private: std::string string = this->EMPTY_STRING;

    private: CustomGPoint point = CustomGPoint::NULL_CUSTOM_POINT;

    private: int32_t width= 0;

public: PlayerGameNotificationHud(int32_t location, int32_t direction, int32_t bufferZone, BasicColor basicColor);

    public: void updateMeasurement(Graphics graphics);

    protected: GPoint getPoint(int32_t x, int32_t y);

    protected: void add(std::string string, Integer seconds, BasicColor basicColor, Boolean permanent);

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

    public: void paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_PLAYERGAMENOTIFICATIONHUD_H
