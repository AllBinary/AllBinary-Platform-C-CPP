
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
        

    private: static const instance: UpgradableRTSLayerHudPaintable = new UpgradableRTSLayerHudPaintable();

    public static UpgradableRTSLayerHudPaintable getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UpgradableRTSLayerHudPaintable.instance;
    
}


    private: const PERCENT: string = "%";

    private: rtsLayer: CollidableDestroyableDamageableLayer = CollidableDestroyableDamageableLayer.getNullInstance()!;

    costY: int32_t= 0;

    costY1: int32_t= 0;

    private: percentCompleteX2: int32_t= 0;

    private: rtsLayerCompositePaintableLateInit: RTSLayerCompositePaintable;

    private: charHeight: int32_t= 0;

    private: charWidth: int32_t= 0;

private constructor (){

            super();
        }


    public updateMeasurement(Graphics graphics){
super.updateMeasurement(graphics);
    

    font: Font = graphics.getFont()!;;
    
this.charHeight= font.getHeight();
    
this.charWidth= MyFontProcessor.defaultCharWidth(font);
    
}


    public update(){
super.update();
    

    commonButtons: CommonButtons = CommonButtons.getInstance()!;;
    
this.costY= (this.y +commonButtons!.STANDARD_BUTTON_SIZE);
    
this.costY1= (this.y +commonButtons!.STANDARD_BUTTON_SIZE -this.charHeight);
    
this.percentCompleteX2= this.imageX +commonButtons!.STANDARD_BUTTON_SIZE -this.charWidth;
    

    displayInfoSingleton: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;;
    

                        if(displayInfoSingleton!.getLastWidth() > 320)
                        
                                    {
                                    this.rtsLayerCompositePaintableLateInit= new UpgradableWideRTSLayerPaintable(this);
    

                                    }
                                
                        else {
                            this.rtsLayerCompositePaintableLateInit= new RTSLayerCompositePaintable(this);
    

                        }
                            
}


    public updateSelectionInfo(){

    rtsLayer: RTSLayer = this.getRtsLayer() as RTSLayer;;
    
this.rtsLayerCompositePaintableLateInit!.update(rtsLayer);
    
this.setAnimationInterface(rtsLayer!.getVerticleBuildAnimationInterface());
    
this.setName(rtsLayer!.getName());
    
}


    private: percentComplete: int32_t= 0;

    private: percentCompleteX: int32_t= 0;

    private: percentCompleteArray: std::vector<char> = CharArrayFactory.getInstance()!.getZeroCharArray()!;

    private: currentTotalDigits: int32_t= 0;

    public updateInfo(){

    rtsLayer: RTSLayer = this.getRtsLayer() as RTSLayer;;
    
this.percentComplete= rtsLayer!.getPercentComplete();
    

                        if(this.percentComplete < 10)
                        
                                    {
                                    this.percentCompleteX= 32;
    

                                    }
                                
                             else 
                        if(this.percentComplete < 100)
                        
                                    {
                                    this.percentCompleteX= 24;
    

                                    }
                                
                        else {
                            this.percentCompleteX= 16;
    

                        }
                            
this.percentCompleteArray= this.getPrimitiveLongUtil()!.getCharArray(this.percentComplete);
    
this.currentTotalDigits= this.getPrimitiveLongUtil()!.getCurrentTotalDigits();
    
}


    public paint(Graphics graphics){
super.paint(graphics);
    
this.rtsLayerCompositePaintableLateInit!.paint(graphics);
    
graphics.drawChars(this.percentCompleteArray, 0, this.currentTotalDigits, this.imageX +this.percentCompleteX, this.costY, 0);
    
graphics.drawString(this.PERCENT, this.percentCompleteX2, this.costY, 0);
    
this.getAnimationInterface()!.paintXY(graphics, this.imageX, this.y);
    
}


    public setRtsLayer(RTSLayer rtsLayer){
this.rtsLayer= rtsLayer;
    
}


    CollidableDestroyableDamageableLayer getRtsLayer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rtsLayer;
    
}


};

            

