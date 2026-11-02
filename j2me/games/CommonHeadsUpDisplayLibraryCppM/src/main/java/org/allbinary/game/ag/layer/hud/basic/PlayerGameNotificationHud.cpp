
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_PLAYERGAMENOTIFICATIONHUD_CPP
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_PLAYERGAMENOTIFICATIONHUD_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/layer/hud/basic/PlayerGameNotificationHud.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        //#include "org/allbinary/game/ag/layer/hud/basic/SetAndRemoveProcessor.h"
//#include "org/allbinary/game/ag/layer/hud/basic/NextUnremoveableProcessor.h"


PlayerGameNotificationHud::SetAndRemoveProcessor::SetAndRemoveProcessor(PlayerGameNotificationHud* updateMeasurementProcessor){
this->updateMeasurementProcessor= updateMeasurementProcessor;
    
}


                //@Throws(Exception.constructor)
            
    auto PlayerGameNotificationHud::SetAndRemoveProcessor::process() -> void{
this->updateMeasurementProcessor->setAndRemoveProcess();
    
}


PlayerGameNotificationHud::NextUnremoveableProcessor::NextUnremoveableProcessor(PlayerGameNotificationHud* updateMeasurementProcessor){
this->updateMeasurementProcessor= updateMeasurementProcessor;
    
}


                //@Throws(Exception.constructor)
            
    auto PlayerGameNotificationHud::NextUnremoveableProcessor::process() -> void{
this->updateMeasurementProcessor->setNextUnremoveableProcess();
    
}


PlayerGameNotificationHud::PlayerGameNotificationHud(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) : GameNotificationHud(location, direction, bufferZone, basicColor), gameTickTimeDelayHelper(GameTickTimeDelayHelperFactory::getInstance()), EMPTY_STRING(StringUtil::getInstance()->EMPTY_STRING), displayInfo(DisplayInfoSingleton::getInstance()), timeDelayHelper(new TimeDelayHelper(0)), gameNotification(new GameNotification()), permanentGameNotification(new GameNotification()), setAndRemoveProcessor(javaInner(new SetAndRemoveProcessor(this), this)), nextUnremoveableProcessor(javaInner(new NextUnremoveableProcessor(this), this)), processor(Processor::getInstance()), lastString(StringUtil::getInstance()->EMPTY_STRING), string(this->EMPTY_STRING), point(CustomGPoint::NULL_CUSTOM_POINT){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->circularIndexUtil= CircularIndexUtil::createInstance(0);
    

    GameNotificationEventHandler* gameNotificationEventHandler = GameNotificationEventHandler::getInstance();;
    
gameNotificationEventHandler->removeAllListeners();
    
gameNotificationEventHandler->addListenerInterface(this);
    
}


    auto PlayerGameNotificationHud::updateMeasurement(Graphics* graphics) -> void{

        try {
            GameNotificationHud::updateMeasurement(graphics);
    

    Font* font = graphics->getFont();;
    
this->width= font->stringWidth(this->string);
    
this->processor->process();
    
this->processor= Processor::getInstance();
    

                //: 
} catch(Exception& e) 
            {

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->put(commonStrings->EXCEPTION, this, commonStrings->UPDATE, &e);
    
}

}


    auto PlayerGameNotificationHud::getPoint(int32_t x, int32_t y) -> GPoint*{
this->point= CustomGPoint::getInstance3(0, 0);
    
this->point->setX(x);
    
this->point->setY(y);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->point;
    
}


    auto PlayerGameNotificationHud::add(std::string string, int32_t seconds, BasicColor* basicColor, bool permanent) -> void{

                        if(permanent)
                        
                                    {
                                    
                        if(this->lastString != string)
                        
                                    {
                                    this->lastString= string;
    
this->logUtil->putF((new StringMaker())->append(this->PERMANENT_GAME_NOTIFICATION)->append(string)->toString(), this, this->commonStrings->ADD);
    

                                    }
                                
this->permanentGameNotification->add(string, seconds, basicColor);
    
this->circularIndexUtil->setSize(this->permanentGameNotification->getSize());
    

                                    }
                                
                        else {
                            this->gameNotification->add(string, seconds, basicColor);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto PlayerGameNotificationHud::processTick() -> void{

                        if(this->timeDelayHelper->isTime(this->gameTickTimeDelayHelper->startTime))
                        
                                    {
                                    
    GameAdState* gameAdState = GameAdStateFactory::getInstance()->getCurrentInstance();;
    

                        if(gameAdState->isShowingAtLocation(this->getLocation()))
                        
                                    {
                                    this->offsetY=  -54;
    

                                    }
                                
                        else {
                            this->offsetY= 0;
    

                        }
                            

                        if(this->gameNotification->getSize() > 0)
                        
                                    {
                                    this->setAndRemove();
    

                                    }
                                
                             else 
                        if(this->permanentGameNotification->getSize() > 0)
                        
                                    {
                                    this->setNextUnremoveable();
    

                                    }
                                
                        else {
                            this->string= this->EMPTY_STRING;
    

                        }
                            

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto PlayerGameNotificationHud::setAndRemove() -> void{
this->string= JavaBoxes::unbox<std::string>(this->gameNotification->stringList->removeAt(0));
    
this->processor= this->setAndRemoveProcessor;
    
}


                //@Throws(Exception.constructor)
            
    auto PlayerGameNotificationHud::setAndRemoveProcess() -> void{
this->setX((this->displayInfo->getLastWidth() -this->width)>>1);
    
this->point->setX(this->getX());
    
this->point->setY(this->getY());
    

    int32_t time = JavaBoxes::unbox<int32_t>(this->gameNotification->timeList->removeAt(0));;
    

    int32_t iTime = time *1000;;
    

                        if(iTime == 0)
                        
                                    {
                                    iTime= 500;
    

                                    }
                                
this->timeDelayHelper->delay= iTime;
    
this->setBasicColorP(dynamic_cast<BasicColor*>(this->gameNotification->colorList->removeAt(0)));
    
}


                //@Throws(Exception.constructor)
            
    auto PlayerGameNotificationHud::setNextUnremoveable() -> void{

    int32_t index = this->circularIndexUtil->getIndex();;
    
this->string= JavaBoxes::unbox<std::string>(this->permanentGameNotification->stringList->objectArray[index]);
    
this->processor= this->nextUnremoveableProcessor;
    
}


                //@Throws(Exception.constructor)
            
    auto PlayerGameNotificationHud::setNextUnremoveableProcess() -> void{

    int32_t index = this->circularIndexUtil->getIndex();;
    
this->setX((this->displayInfo->getLastWidth() -this->width)>>1);
    
this->point->setX(this->getX());
    
this->point->setY(this->getY());
    

    int32_t time = JavaBoxes::unbox<int32_t>(this->permanentGameNotification->timeList->objectArray[index]);;
    
this->timeDelayHelper->delay= time *1000;
    
this->setBasicColorP(dynamic_cast<BasicColor*>(this->permanentGameNotification->colorList->objectArray[index]));
    
this->circularIndexUtil->next();
    
}


    auto PlayerGameNotificationHud::clear() -> void{
this->gameNotification->clear();
    
this->permanentGameNotification->clear();
    
}


    auto PlayerGameNotificationHud::paint(Graphics* graphics) -> void{
this->myFontProcessor->process(graphics);
    
GameNotificationHud::paintString(graphics, this->string);
    
}




        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_PLAYERGAMENOTIFICATIONHUD_CPP
