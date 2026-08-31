
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
        



#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UpgradableRTSLayerHudPaintable.h"
#include "RTSLayer.h"

class RTSLayerCompositePaintable: public Paintable {
        

    private: upgradeCost: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: downGradeCost: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: const UPGRADE: string = "Up: $";

    private: const DOWNGRADE: string = "Down: $-";

    const upgradableRTSLayerHudPaintable: UpgradableRTSLayerHudPaintable;

public constructor (UpgradableRTSLayerHudPaintable upgradableRTSLayerHudPaintable){

            super();
        this.upgradableRTSLayerHudPaintable= upgradableRTSLayerHudPaintable;
    
}


    public update(RTSLayer rtsLayer){

                        if(rtsLayer!.isUpgradeable())
                        
                                    {
                                    this.setUpgradeCost(new StringMaker().append(this.UPGRADE)!.appendint(rtsLayer!.getUpgradeCost())!.toString());
    

                                    }
                                
                        else {
                            this.setUpgradeCost(StringUtil.getInstance()!.EMPTY_STRING);
    

                        }
                            

                        if(rtsLayer!.isDowngradeable())
                        
                                    {
                                    this.setDownGradeCost(new StringMaker().append(this.DOWNGRADE)!.appendint(rtsLayer!.getDowngradeCost())!.toString());
    

                                    }
                                
                        else {
                            this.setDownGradeCost(StringUtil.getInstance()!.EMPTY_STRING);
    

                        }
                            
}


    public paint(Graphics graphics){
graphics.drawString(this.getDownGradeCost(), this.upgradableRTSLayerHudPaintable!.textX, this.upgradableRTSLayerHudPaintable!.costY1, 0);
    
graphics.drawString(this.getUpgradeCost(), this.upgradableRTSLayerHudPaintable!.textX, this.upgradableRTSLayerHudPaintable!.costY, 0);
    
}


    setUpgradeCost(string upgradeCost){
this.upgradeCost= upgradeCost;
    
}


    string getUpgradeCost(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.upgradeCost;
    
}


    setDownGradeCost(string downGradeCost){
this.downGradeCost= downGradeCost;
    
}


    string getDownGradeCost(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.downGradeCost;
    
}


};

            

