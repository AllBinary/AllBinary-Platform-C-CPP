
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

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/game/part/weapon/BasicWeaponPart.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SelectionHudPaintable.h"
#include "RTSLayer.h"

class RTSLayerHudPaintable: public SelectionHudPaintable: public UpdateMyFontInterface {
        

    private: static const instance: RTSLayerHudPaintable = new RTSLayerHudPaintable();

    public static RTSLayerHudPaintable getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RTSLayerHudPaintable.instance;
    
}


    private: weaponProperties: std::vector<string> = StringUtil.getInstance()!.getArrayInstance()!;

    private: rtsLayer: CollidableDestroyableDamageableLayer = CollidableDestroyableDamageableLayer.getNullInstance()!;

    costY: int32_t= 0;

    costY1: int32_t= 0;

    private: fontHeight: int32_t= 0;

private constructor (){

            super();
        }


    public updateMeasurement(Graphics graphics){
super.updateMeasurement(graphics);
    

    font: Font = graphics.getFont()!;;
    
this.fontHeight= font.getHeight();
    
this.costY1= (this.y +((this.weaponProperties!.length +1) *this.fontHeight));
    

                        if(!AndroidUtil.isAndroid())
                        
                                    {
                                    this.costY= this.costY1;
    

                                    }
                                
                        else {
                            this.costY= (this.y +((this.weaponProperties!.length +2) *this.fontHeight));
    

                        }
                            
}


    public updateSelectionInfo(){
this.setName(this.getRtsLayer()!.getName());
    

    partInterface: BasicWeaponPart = this.getRtsLayer()!.getPartInterfaceArray()[0]! as BasicWeaponPart;;
    
this.weaponProperties= partInterface!.getWeaponProperties()!.toStringArray();
    
this.myFontProcessor= this.updateMyFontProcessor;
    
}


    public paint(Graphics graphics){
super.paint(graphics);
    

    size: int32_t = this.weaponProperties!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
graphics.drawString(this.weaponProperties[index]!, this.textX, this.y +((index +1) *this.fontHeight), 0);
    
}

}


    public setRtsLayer(RTSLayer rtsLayer){
this.rtsLayer= rtsLayer;
    
}


    CollidableDestroyableDamageableLayer getRtsLayer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rtsLayer;
    
}


};

            

