
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

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RTSLayerCompositePaintable.h"
#include "UpgradableRTSLayerHudPaintable.h"
#include "RTSLayer.h"

class UpgradableWideRTSLayerPaintable: public RTSLayerCompositePaintable {
        

    private: cost: string = StringUtil.getInstance()!.EMPTY_STRING;

public constructor (UpgradableRTSLayerHudPaintable upgradableRTSLayerHudPaintable){
            super(upgradableRTSLayerHudPaintable);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public update(RTSLayer rtsLayer){
super.update(rtsLayer);
    
this.setCost(new StringMaker().append(this.getUpgradeCost())!.append(CommonSeps.getInstance()!.SPACE)!.append(this.getDownGradeCost())!.toString());
    
}


    public paint(Graphics graphics){
graphics.drawString(this.getCost(), this.upgradableRTSLayerHudPaintable!.textX, this.upgradableRTSLayerHudPaintable!.costY, 0);
    
}


    setCost(string cost){
this.cost= cost;
    
}


    string getCost(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.cost;
    
}


};

            

