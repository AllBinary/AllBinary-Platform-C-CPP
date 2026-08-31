
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

            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/Integer.h"
        
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

class PlayerGameNotificationHud: public GameNotificationHud: public UpdateMyFontInterface {
        

    private: const gameTickTimeDelayHelper: GameTickTimeDelayHelper = GameTickTimeDelayHelperFactory.getInstance()!;

    private: const EMPTY_STRING: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: const displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    private: const timeDelayHelper: TimeDelayHelper = new TimeDelayHelper(0);

    private: const circularIndexUtil: CircularIndexUtil;

    private: const gameNotification: GameNotification = new GameNotification();

    private: const permanentGameNotification: GameNotification = new GameNotification();

//inner= member=true isStatic=
class SetAndRemoveProcessor: public Processor {
        

    private: const updateMeasurementProcessor: PlayerGameNotificationHud;

public constructor (PlayerGameNotificationHud updateMeasurementProcessor);

                //@Throws(Exception.constructor)
            
    public process();

};

            
//inner= member=true isStatic=
class NextUnremoveableProcessor: public Processor {
        

    private: const updateMeasurementProcessor: PlayerGameNotificationHud;

public constructor (PlayerGameNotificationHud updateMeasurementProcessor);

                //@Throws(Exception.constructor)
            
    public process();

};

            
    private: const setAndRemoveProcessor: Processor = new this.SetAndRemoveProcessor(this);

    private: const nextUnremoveableProcessor: Processor = new this.NextUnremoveableProcessor(this);

    private: processor: Processor = Processor.getInstance()!;

    private: const PERMANENT_GAME_NOTIFICATION: string = "Permanent Game Notification: ";

    private: lastString: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: string: string = this.EMPTY_STRING;

    private: point: CustomGPoint = CustomGPoint.NULL_CUSTOM_POINT;

    private: width: int32_t= 0;

public constructor (int32_t location, int32_t direction, int32_t bufferZone, BasicColor basicColor);

    public updateMeasurement(Graphics graphics);

    GPoint getPoint(int32_t x, int32_t y);

    add(string string, Integer seconds, BasicColor basicColor, Boolean permanent);

                //@Throws(Exception.constructor)
            
    public processTick();

                //@Throws(Exception.constructor)
            
    setAndRemove();

                //@Throws(Exception.constructor)
            
    setAndRemoveProcess();

                //@Throws(Exception.constructor)
            
    setNextUnremoveable();

                //@Throws(Exception.constructor)
            
    setNextUnremoveableProcess();

    public clear();

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_PLAYERGAMENOTIFICATIONHUD_H
