
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

public: SetAndRemoveProcessor(PlayerGameNotificationHud updateMeasurementProcessor){
this->updateMeasurementProcessor= updateMeasurementProcessor;
    
}


                //@Throws(Exception.constructor)
            
    public: void process(){
this->updateMeasurementProcessor.setAndRemoveProcess();
    
}


};

            
//inner= member=true isStatic=
class NextUnremoveableProcessor: public Processor {

    private: PlayerGameNotificationHud updateMeasurementProcessor;

public: NextUnremoveableProcessor(PlayerGameNotificationHud updateMeasurementProcessor){
this->updateMeasurementProcessor= updateMeasurementProcessor;
    
}


                //@Throws(Exception.constructor)
            
    public: void process(){
this->updateMeasurementProcessor.setNextUnremoveableProcess();
    
}


};

            
    private: const Processor setAndRemoveProcessor = SetAndRemoveProcessor(this);

    private: const Processor nextUnremoveableProcessor = NextUnremoveableProcessor(this);

    private: Processor processor = Processor::getInstance();

    private: const std::string PERMANENT_GAME_NOTIFICATION = "Permanent Game Notification: ";

    private: std::string lastString = StringUtil::getInstance().EMPTY_STRING;

    private: std::string string = this->EMPTY_STRING;

    private: CustomGPoint point = CustomGPoint::NULL_CUSTOM_POINT;

    private: int32_t width= 0;

public: PlayerGameNotificationHud(int32_t location, int32_t direction, int32_t bufferZone, BasicColor basicColor){
            super(location, direction, bufferZone, basicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->circularIndexUtil= CircularIndexUtil::createInstance(0);
    

    GameNotificationEventHandler gameNotificationEventHandler = GameNotificationEventHandler::getInstance();;
    
gameNotificationEventHandler.removeAllListeners();
    
gameNotificationEventHandler.addListenerInterface(this);
    
}


    public: void updateMeasurement(Graphics graphics){

        try {
            super.updateMeasurement(graphics);
    

    Font font = graphics.getFont();;
    
this->width= font.stringWidth(this->string);
    
this->processor.process();
    
this->processor= Processor::getInstance();
    

                //: 
} catch(e) 
            {

    LogUtil logUtil = LogUtil::getInstance();;
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
logUtil.put(commonStrings.EXCEPTION, this, commonStrings.UPDATE, e);
    
}

}


    protected: GPoint getPoint(int32_t x, int32_t y){
this->point= CustomGPoint::getInstance3(0, 0);
    
this->point.setX(x);
    
this->point.setY(y);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->point;
    
}


    protected: void add(std::string string, Integer seconds, BasicColor basicColor, Boolean permanent){

                        if(permanent.valueOf())
                        
                                    {
                                    
                        if(this->lastString != string)
                        
                                    {
                                    this->lastString= string;
    
this->logUtil.putF(StringMaker().append(this->PERMANENT_GAME_NOTIFICATION).append(string).toString(), this, this->commonStrings.ADD);
    

                                    }
                                
this->permanentGameNotification.add(string, seconds, basicColor);
    
this->circularIndexUtil.setSize(this->permanentGameNotification.getSize());
    

                                    }
                                
                        else {
                            this->gameNotification.add(string, seconds, basicColor);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: void processTick(){

                        if(this->timeDelayHelper.isTime(this->gameTickTimeDelayHelper.startTime))
                        
                                    {
                                    
    GameAdState gameAdState = GameAdStateFactory::getInstance().getCurrentInstance();;
    

                        if(gameAdState.isShowingAtLocation(this->getLocation()))
                        
                                    {
                                    this->offsetY=  -54;
    

                                    }
                                
                        else {
                            this->offsetY= 0;
    

                        }
                            

                        if(this->gameNotification.getSize() > 0)
                        
                                    {
                                    this->setAndRemove();
    

                                    }
                                
                             else 
                        if(this->permanentGameNotification.getSize() > 0)
                        
                                    {
                                    this->setNextUnremoveable();
    

                                    }
                                
                        else {
                            this->string= this->EMPTY_STRING;
    

                        }
                            

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    private: void setAndRemove(){
this->string= this->gameNotification.stringList.removeAt(0) as string;
    
this->processor= this->setAndRemoveProcessor;
    
}


                //@Throws(Exception.constructor)
            
    private: void setAndRemoveProcess(){
this->setX((this->displayInfo.getLastWidth() -this->width)>>1);
    
this->point.setX(this->getX());
    
this->point.setY(this->getY());
    

    Integer time = this->gameNotification.timeList.removeAt(0) as Integer;;
    

    int32_t iTime = time.intValue() *1000;;
    

                        if(iTime == 0)
                        
                                    {
                                    iTime= 500;
    

                                    }
                                
this->timeDelayHelper.delay= iTime;
    
this->setBasicColorP(this->gameNotification.colorList.removeAt(0) as BasicColor);
    
}


                //@Throws(Exception.constructor)
            
    private: void setNextUnremoveable(){

    int32_t index = this->circularIndexUtil.getIndex();;
    
this->string= this->permanentGameNotification.stringList.objectArray[index]! as string;
    
this->processor= this->nextUnremoveableProcessor;
    
}


                //@Throws(Exception.constructor)
            
    private: void setNextUnremoveableProcess(){

    int32_t index = this->circularIndexUtil.getIndex();;
    
this->setX((this->displayInfo.getLastWidth() -this->width)>>1);
    
this->point.setX(this->getX());
    
this->point.setY(this->getY());
    

    Integer time = this->permanentGameNotification.timeList.objectArray[index]! as Integer;;
    
this->timeDelayHelper.delay= time.intValue() *1000;
    
this->setBasicColorP(this->permanentGameNotification.colorList.objectArray[index]! as BasicColor);
    
this->circularIndexUtil.next();
    
}


    public: void clear(){
this->gameNotification.clear();
    
this->permanentGameNotification.clear();
    
}


    public: void paint(Graphics graphics){
this->myFontProcessor.process(graphics);
    
super.paintString(graphics, this->string);
    
}


};

            

