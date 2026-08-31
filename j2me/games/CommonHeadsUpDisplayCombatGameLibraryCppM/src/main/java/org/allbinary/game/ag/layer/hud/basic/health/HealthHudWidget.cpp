
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
        



            #include "../../../../../../../../java/lang/Exception.h"
        
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
        
class HealthHudWidget: public BasicHud: public PaintableInterface, public HealthListenerInterface {
        

    private: healthScale: int32_t;

    animationInterface: Animation;

    healthInterface: Health;

    max: int32_t= 0;

    private: xArray: std::vector<int32_t>;

    private: const gameTickTimeDelayHelper: GameTickTimeDelayHelper = GameTickTimeDelayHelperFactory.getInstance()!;

public constructor (Animation animationInterface, Health healthInterface, int32_t location, int32_t direction){
            super(location, direction, 2, BasicColorFactory.getInstance()!.WHITE);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.animationInterface= animationInterface;
    
this.healthInterface= healthInterface;
    
this.healthInterface!.addListener(this);
    
this.healthScale= (this.healthInterface!.getMaxHealth() /6) +1;
    
this.onHealthChange();
    
this.updateMaxWidth= healthInterface!.getMaxHealth() *16;
    
this.updateMaxHeight= 16;
    
this.xArray= new Array(30);
    
this.update();
    
}


    update(){

                        if(this.xArray != 
                                    null
                                )
                        
                                    {
                                    



                        for (
    index: int32_t = 0;index < this.xArray!.length; index++)
        {
this.xArray[index]= this.getX() +(index *16);
    
}


                                    }
                                
}


    public setX(int32_t x){
super.setX(x);
    
this.update();
    
}


    private: timeDelayHelper: TimeDelayHelper = NoTimeDelayHelper.SINGLETON;

    private: const slowBeatTimeDelayHelper: TimeDelayHelper = new TimeDelayHelper(1280);

    private: const mediumBeatTimeDelayHelper: TimeDelayHelper = new TimeDelayHelper(640);

    private: const fastBeatTimeDelayHelper: TimeDelayHelper = new TimeDelayHelper(320);

    public onHealthChange(){
this.max= (this.healthInterface!.getHealth() /this.healthScale);
    
this.timeDelayHelper= NoTimeDelayHelper.SINGLETON;
    

                        if(this.max <= 1 && this.healthInterface!.isAlive())
                        
                                    {
                                    this.max= 1;
    

                        if(this.healthScale -this.healthInterface!.getHealth() > (this.healthScale *2) /3)
                        
                                    {
                                    this.timeDelayHelper= this.slowBeatTimeDelayHelper;
    

                                    }
                                
                             else 
                        if(this.healthScale -this.healthInterface!.getHealth() > this.healthScale /3)
                        
                                    {
                                    this.timeDelayHelper= this.mediumBeatTimeDelayHelper;
    

                                    }
                                
                        else {
                            this.timeDelayHelper= this.fastBeatTimeDelayHelper;
    

                        }
                            

                                    }
                                
}


    public paint(Graphics graphics){
this.myFontProcessor!.process(graphics);
    




                        for (
    index: int32_t = 0;index < this.max; index++)
        {

                        if(this.timeDelayHelper!.isTime(this.gameTickTimeDelayHelper!.startTime))
                        
                                    {
                                    this.animationInterface!.paintXY(graphics, this.xArray[index]!, this.getY());
    

                                    }
                                
}

}


    public paintThreed(Graphics graphics){
}


};

            

