
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

      
#include <org/allbinary/game/ag/life/Life.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LivesHudWidget: public BasicHud: public PaintableInterface {
        

    private: const lifeInterface: Life;

    private: const xArray: std::vector<int32_t>;

    private: const animationInterface: Animation;

public constructor (Animation animationInterface, Life lifeInterface, int32_t location, int32_t direction){
            super(location, direction, 2, BasicColorFactory.getInstance()!.WHITE);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.lifeInterface= lifeInterface;
    

    size: int32_t = static_cast<int32_t>(this.getLifeInterface()!.getMaxlives());;
    
this.xArray= new Array(size);
    
this.animationInterface= animationInterface;
    
this.updateMaxWidth= this.lifeInterface!.getMaxlives() *16;
    
this.updateMaxHeight= 16;
    
}


    public updateMeasurement(Graphics graphics){
super.updateMeasurement(graphics);
    

    maxLives: int32_t = static_cast<int32_t>(this.getLifeInterface()!.getMaxlives());;
    




                        for (
    index: int32_t = 0;index < maxLives; index++)
        {
this.xArray[index]= this.getX() +(index *16);
    
}

}


    public onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent){
super.onDisplayChangeEvent(displayChangeEvent);
    
this.myFontProcessor= this.updateMyFontProcessor;
    
}


    public setX(int32_t x){
super.setX(x);
    
this.myFontProcessor= this.updateMyFontProcessor;
    
}


    public paint(Graphics graphics){
this.myFontProcessor!.process(graphics);
    




                        for (
    index: int32_t = static_cast<int32_t>(this.getLifeInterface()!.get());--index >= 0; )
        {
this.animationInterface!.paintXY(graphics, this.xArray[index]!, this.getY());
    
}

}


    public paintThreed(Graphics graphics){
}


    public Life getLifeInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.lifeInterface;
    
}


};

            

