
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_UPGRADABLERTSLAYERHUDPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_LAYER_UPGRADABLERTSLAYERHUDPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/UpgradableRTSLayerHudPaintable.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/logic/java/character/CharArrayFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/input/motion/button/CommonButtons.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/SelectionHudPaintable.h"
#include "org/allbinary/game/layer/RTSLayerCompositePaintable.h"
#include "org/allbinary/game/layer/UpgradableWideRTSLayerPaintable.h"
#include "org/allbinary/game/layer/RTSLayer.h"

auto UpgradableRTSLayerHudPaintable::instance_owner() -> UpgradableRTSLayerHudPaintable* { static std::unique_ptr<UpgradableRTSLayerHudPaintable> value(new UpgradableRTSLayerHudPaintable()); return value.get(); }
UpgradableRTSLayerHudPaintable* UpgradableRTSLayerHudPaintable::instance = UpgradableRTSLayerHudPaintable::instance_owner();

    auto UpgradableRTSLayerHudPaintable::getInstance() -> UpgradableRTSLayerHudPaintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return UpgradableRTSLayerHudPaintable::instance;
    
}


UpgradableRTSLayerHudPaintable::UpgradableRTSLayerHudPaintable() : rtsLayer(CollidableDestroyableDamageableLayer::getNullInstance()), percentCompleteArray(CharArrayFactory::getInstance()->getZeroCharArray()){
}


    auto UpgradableRTSLayerHudPaintable::updateMeasurement(Graphics* graphics) -> void{
SelectionHudPaintable::updateMeasurement(graphics);
    

    Font* font = graphics->getFont();;
    
this->charHeight= font->getHeight();
    
this->charWidth= MyFontProcessor::defaultCharWidth(font);
    
}


    auto UpgradableRTSLayerHudPaintable::update() -> void{
SelectionHudPaintable::update();
    

    CommonButtons* commonButtons = CommonButtons::getInstance();;
    
this->costY= (this->y +commonButtons->STANDARD_BUTTON_SIZE);
    
this->costY1= (this->y +commonButtons->STANDARD_BUTTON_SIZE -this->charHeight);
    
this->percentCompleteX2= this->imageX +commonButtons->STANDARD_BUTTON_SIZE -this->charWidth;
    

    DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton::getInstance();;
    

                        if(displayInfoSingleton->getLastWidth() > 320)
                        
                                    {
                                    this->rtsLayerCompositePaintableLateInit= new UpgradableWideRTSLayerPaintable(this);
    

                                    }
                                
                        else {
                            this->rtsLayerCompositePaintableLateInit= new RTSLayerCompositePaintable(this);
    

                        }
                            
}


    auto UpgradableRTSLayerHudPaintable::updateSelectionInfo() -> void{

    RTSLayer* rtsLayer = dynamic_cast<RTSLayer*>(this->getRtsLayer());;
    
this->rtsLayerCompositePaintableLateInit->update(rtsLayer);
    
this->setAnimationInterface(rtsLayer->getVerticleBuildAnimationInterface());
    
this->setName(rtsLayer->getName());
    
}


    auto UpgradableRTSLayerHudPaintable::updateInfo() -> void{

    RTSLayer* rtsLayer = dynamic_cast<RTSLayer*>(this->getRtsLayer());;
    
this->percentComplete= rtsLayer->getPercentComplete();
    

                        if(this->percentComplete < 10)
                        
                                    {
                                    this->percentCompleteX= 32;
    

                                    }
                                
                             else 
                        if(this->percentComplete < 100)
                        
                                    {
                                    this->percentCompleteX= 24;
    

                                    }
                                
                        else {
                            this->percentCompleteX= 16;
    

                        }
                            
this->percentCompleteArray= this->getPrimitiveLongUtil()->getCharArray(this->percentComplete);
    
this->currentTotalDigits= this->getPrimitiveLongUtil()->getCurrentTotalDigits();
    
}


    auto UpgradableRTSLayerHudPaintable::paint(Graphics* graphics) -> void{
SelectionHudPaintable::paint(graphics);
    
this->rtsLayerCompositePaintableLateInit->paint(graphics);
    
graphics->drawChars(this->percentCompleteArray, 0, this->currentTotalDigits, this->imageX +this->percentCompleteX, this->costY, 0);
    
graphics->drawString(this->PERCENT, this->percentCompleteX2, this->costY, 0);
    
this->getAnimationInterface()->paintXY(graphics, this->imageX, this->y);
    
}


    auto UpgradableRTSLayerHudPaintable::setRtsLayer(RTSLayer* rtsLayer) -> void{
this->rtsLayer= rtsLayer;
    
}


    auto UpgradableRTSLayerHudPaintable::getRtsLayer() -> CollidableDestroyableDamageableLayer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->rtsLayer;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_UPGRADABLERTSLAYERHUDPAINTABLE_CPP
