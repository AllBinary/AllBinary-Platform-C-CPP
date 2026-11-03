
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_LIFE_LIVESHUDWIDGET_CPP
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_LIFE_LIVESHUDWIDGET_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/layer/hud/basic/life/LivesHudWidget.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/game/ag/life/Life.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

LivesHudWidget::LivesHudWidget(Animation* animationInterface, Life* lifeInterface, int32_t location, int32_t direction) : BasicHud(location, direction, 2, BasicColorFactory::getInstance()->WHITE){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->lifeInterface= lifeInterface;
    

    int32_t size = static_cast<int32_t>(this->getLifeInterface()->getMaxlives());;
    
this->xArray= std::vector<int32_t>(size);
    
this->animationInterface= animationInterface;
    
this->updateMaxWidth= this->lifeInterface->getMaxlives() *16;
    
this->updateMaxHeight= 16;
    
}


    auto LivesHudWidget::updateMeasurement(Graphics* graphics) -> void{
BasicHud::updateMeasurement(graphics);
    

    int32_t maxLives = static_cast<int32_t>(this->getLifeInterface()->getMaxlives());;
    




                        for (
    int32_t index = 0;index < maxLives; index++)
        {
this->xArray[index]= this->getX() +(index *16);
    
}

}


    auto LivesHudWidget::onDisplayChangeEvent(DisplayChangeEvent* displayChangeEvent) -> void{
BasicHud::onDisplayChangeEvent(displayChangeEvent);
    
this->myFontProcessor= this->updateMyFontProcessor;
    
}


    auto LivesHudWidget::setX(int32_t x) -> void{
BasicHud::setX(x);
    
this->myFontProcessor= this->updateMyFontProcessor;
    
}


    auto LivesHudWidget::paint(Graphics* graphics) -> void{
this->myFontProcessor->process(graphics);
    




                        for (
    int32_t index = static_cast<int32_t>(this->getLifeInterface()->get());--index >= 0; )
        {
this->animationInterface->paintXY(graphics, this->xArray[index], this->getY());
    
}

}


    auto LivesHudWidget::paintThreed(Graphics* graphics) -> void{
}


    auto LivesHudWidget::getLifeInterface() -> Life*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->lifeInterface;
    
}




        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_LIFE_LIVESHUDWIDGET_CPP
