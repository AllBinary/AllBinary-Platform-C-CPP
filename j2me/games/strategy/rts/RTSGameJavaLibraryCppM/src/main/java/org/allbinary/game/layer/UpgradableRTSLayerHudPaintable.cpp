
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
        



            #include <vector>
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/logic/java/character/CharArrayFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/input/motion/button/CommonButtons.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SelectionHudPaintable.h"
#include "RTSLayerCompositePaintable.h"
#include "UpgradableWideRTSLayerPaintable.h"
#include "RTSLayer.h"

class UpgradableRTSLayerHudPaintable: public SelectionHudPaintable {

    private: static UpgradableRTSLayerHudPaintable instance() { return UpgradableRTSLayerHudPaintable(); }

    public: static UpgradableRTSLayerHudPaintable getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UpgradableRTSLayerHudPaintable::instance();
    
}


    private: const std::string PERCENT = "%";

    private: CollidableDestroyableDamageableLayer rtsLayer = CollidableDestroyableDamageableLayer::getNullInstance();

    protected: int32_t costY= 0;

    protected: int32_t costY1= 0;

    private: int32_t percentCompleteX2= 0;

    private: RTSLayerCompositePaintable rtsLayerCompositePaintableLateInit;

    private: int32_t charHeight= 0;

    private: int32_t charWidth= 0;

private: UpgradableRTSLayerHudPaintable(){
}


    public: void updateMeasurement(Graphics graphics){
super.updateMeasurement(graphics);
    

    Font font = graphics.getFont();;
    
this->charHeight= font.getHeight();
    
this->charWidth= MyFontProcessor::defaultCharWidth(font);
    
}


    public: void update(){
super.update();
    

    CommonButtons commonButtons = CommonButtons::getInstance();;
    
this->costY= (this->y +commonButtons.STANDARD_BUTTON_SIZE);
    
this->costY1= (this->y +commonButtons.STANDARD_BUTTON_SIZE -this->charHeight);
    
this->percentCompleteX2= this->imageX +commonButtons.STANDARD_BUTTON_SIZE -this->charWidth;
    

    DisplayInfoSingleton displayInfoSingleton = DisplayInfoSingleton::getInstance();;
    

                        if(displayInfoSingleton.getLastWidth() > 320)
                        
                                    {
                                    this->rtsLayerCompositePaintableLateInit= UpgradableWideRTSLayerPaintable(this);
    

                                    }
                                
                        else {
                            this->rtsLayerCompositePaintableLateInit= RTSLayerCompositePaintable(this);
    

                        }
                            
}


    public: void updateSelectionInfo(){

    RTSLayer rtsLayer = this->getRtsLayer();;
    
this->rtsLayerCompositePaintableLateInit.update(rtsLayer);
    
this->setAnimationInterface(rtsLayer.getVerticleBuildAnimationInterface());
    
this->setName(rtsLayer.getName());
    
}


    private: int32_t percentComplete= 0;

    private: int32_t percentCompleteX= 0;

    private: std::vector<char> percentCompleteArray = CharArrayFactory::getInstance().getZeroCharArray();

    private: int32_t currentTotalDigits= 0;

    public: void updateInfo(){

    RTSLayer rtsLayer = this->getRtsLayer();;
    
this->percentComplete= rtsLayer.getPercentComplete();
    

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
                            
this->percentCompleteArray= this->getPrimitiveLongUtil().getCharArray(this->percentComplete);
    
this->currentTotalDigits= this->getPrimitiveLongUtil().getCurrentTotalDigits();
    
}


    public: void paint(Graphics graphics){
super.paint(graphics);
    
this->rtsLayerCompositePaintableLateInit.paint(graphics);
    
graphics.drawChars(this->percentCompleteArray, 0, this->currentTotalDigits, this->imageX +this->percentCompleteX, this->costY, 0);
    
graphics.drawString(this->PERCENT, this->percentCompleteX2, this->costY, 0);
    
this->getAnimationInterface().paintXY(graphics, this->imageX, this->y);
    
}


    public: void setRtsLayer(RTSLayer rtsLayer){
this->rtsLayer= rtsLayer;
    
}


    protected: CollidableDestroyableDamageableLayer getRtsLayer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rtsLayer;
    
}


};

            

