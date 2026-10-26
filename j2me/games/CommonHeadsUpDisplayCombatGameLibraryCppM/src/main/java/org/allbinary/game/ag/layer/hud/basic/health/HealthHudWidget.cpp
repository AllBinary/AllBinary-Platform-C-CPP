
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
        



            #include <vector>
        
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
        
class HealthHudWidget: public BasicHud, public PaintableInterface, public HealthListenerInterface {

    private: int32_t healthScale;

    protected: Animation animationInterface;

    protected: Health healthInterface;

    int32_t max= 0;

    private: std::vector<int32_t> xArray;

    private: const GameTickTimeDelayHelper gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory::getInstance();

public: HealthHudWidget(Animation animationInterface, Health healthInterface, int32_t location, int32_t direction) : BasicHud(location, direction, 2, BasicColorFactory::getInstance().WHITE){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->animationInterface= animationInterface;
    
this->healthInterface= healthInterface;
    
this->healthInterface.addListener(this);
    
this->healthScale= (this->healthInterface.getMaxHealth() /6) +1;
    
this->onHealthChange();
    
this->updateMaxWidth= healthInterface.getMaxHealth() *16;
    
this->updateMaxHeight= 16;
    
this->xArray= std::vector<int32_t>(30);
    
this->update();
    
}


    private: void update(){

                        if(this->xArray != 
                                    nullptr
                                )
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < this->xArray.size(); index++)
        {
this->xArray[index]= this->getX() +(index *16);
    
}


                                    }
                                
}


    public: void setX(int32_t x){
super.setX(x);
    
this->update();
    
}


    private: TimeDelayHelper timeDelayHelper = NoTimeDelayHelper::SINGLETON;

    private: const TimeDelayHelper slowBeatTimeDelayHelper = TimeDelayHelper(1280);

    private: const TimeDelayHelper mediumBeatTimeDelayHelper = TimeDelayHelper(640);

    private: const TimeDelayHelper fastBeatTimeDelayHelper = TimeDelayHelper(320);

    public: void onHealthChange(){
this->max= (this->healthInterface.getHealth() /this->healthScale);
    
this->timeDelayHelper= NoTimeDelayHelper::SINGLETON;
    

                        if(this->max <= 1 && this->healthInterface.isAlive())
                        
                                    {
                                    this->max= 1;
    

                        if(this->healthScale -this->healthInterface.getHealth() > (this->healthScale *2) /3)
                        
                                    {
                                    this->timeDelayHelper= this->slowBeatTimeDelayHelper;
    

                                    }
                                
                             else 
                        if(this->healthScale -this->healthInterface.getHealth() > this->healthScale /3)
                        
                                    {
                                    this->timeDelayHelper= this->mediumBeatTimeDelayHelper;
    

                                    }
                                
                        else {
                            this->timeDelayHelper= this->fastBeatTimeDelayHelper;
    

                        }
                            

                                    }
                                
}


    public: void paint(Graphics graphics){
this->myFontProcessor.process(graphics);
    




                        for (
    int32_t index = 0;index < this->max; index++)
        {

                        if(this->timeDelayHelper.isTime(this->gameTickTimeDelayHelper.startTime))
                        
                                    {
                                    this->animationInterface.paintXY(graphics, this->xArray[index], this->getY());
    

                                    }
                                
}

}


    public: void paintThreed(Graphics graphics){
}


};

            

