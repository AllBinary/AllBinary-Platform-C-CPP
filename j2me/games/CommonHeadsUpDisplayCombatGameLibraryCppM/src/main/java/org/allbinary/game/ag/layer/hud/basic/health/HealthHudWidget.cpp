
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_HEALTH_HEALTHHUDWIDGET_CPP
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_HEALTH_HEALTHHUDWIDGET_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/layer/hud/basic/health/HealthHudWidget.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/game/health/Health.h>

      
#include <org/allbinary/game/health/HealthListenerInterface.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/NoTimeDelayHelper.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

HealthHudWidget::HealthHudWidget(Animation* animationInterface, Health* healthInterface, int32_t location, int32_t direction) : BasicHud(location, direction, 2, BasicColorFactory::getInstance()->WHITE), gameTickTimeDelayHelper(GameTickTimeDelayHelperFactory::getInstance()), timeDelayHelper(NoTimeDelayHelper::SINGLETON), slowBeatTimeDelayHelper(new TimeDelayHelper(1280)), mediumBeatTimeDelayHelper(new TimeDelayHelper(640)), fastBeatTimeDelayHelper(new TimeDelayHelper(320)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->animationInterface= animationInterface;
    
this->healthInterface= healthInterface;
    
this->healthInterface->addListener(this);
    
this->healthScale= (this->healthInterface->getMaxHealth() /6) +1;
    
this->onHealthChange();
    
this->updateMaxWidth= healthInterface->getMaxHealth() *16;
    
this->updateMaxHeight= 16;
    
this->xArray= std::vector<int32_t>(30);
    
this->update();
    
}


    auto HealthHudWidget::update() -> void{

                        if(!this->xArray.empty())
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < this->xArray.size(); index++)
        {
this->xArray[index]= this->getX() +(index *16);
    
}


                                    }
                                
}


    auto HealthHudWidget::setX(int32_t x) -> void{
BasicHud::setX(x);
    
this->update();
    
}


    auto HealthHudWidget::onHealthChange() -> void{
this->max= (this->healthInterface->getHealth() /this->healthScale);
    
this->timeDelayHelper= NoTimeDelayHelper::SINGLETON;
    

                        if(this->max <= 1 && this->healthInterface->isAlive())
                        
                                    {
                                    this->max= 1;
    

                        if(this->healthScale -this->healthInterface->getHealth() > (this->healthScale *2) /3)
                        
                                    {
                                    this->timeDelayHelper= this->slowBeatTimeDelayHelper;
    

                                    }
                                
                             else 
                        if(this->healthScale -this->healthInterface->getHealth() > this->healthScale /3)
                        
                                    {
                                    this->timeDelayHelper= this->mediumBeatTimeDelayHelper;
    

                                    }
                                
                        else {
                            this->timeDelayHelper= this->fastBeatTimeDelayHelper;
    

                        }
                            

                                    }
                                
}


    auto HealthHudWidget::paint(Graphics* graphics) -> void{
this->myFontProcessor->process(graphics);
    




                        for (
    int32_t index = 0;index < this->max; index++)
        {

                        if(this->timeDelayHelper->isTime(this->gameTickTimeDelayHelper->startTime))
                        
                                    {
                                    this->animationInterface->paintXY(graphics, this->xArray[index], this->getY());
    

                                    }
                                
}

}


    auto HealthHudWidget::paintThreed(Graphics* graphics) -> void{
}




        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_HEALTH_HEALTHHUDWIDGET_CPP
