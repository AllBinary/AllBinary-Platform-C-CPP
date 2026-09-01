
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HealthBarAnimation.h"

class HealthBarTwodAnimation: public HealthBarAnimation {

public: HealthBarTwodAnimation(AllBinaryLayer layerInterface, int32_t location){
            super(layerInterface, location);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){

    int32_t ax = this->allbinaryLayer.getViewPosition().getX();;
    
this->basicSetColorUtil.setBasicColorP3(graphics, this->basicColor, this->colorP);
    
graphics.fillRect(ax, this->getY() -1, this->x2, this->thickness);
    
}


};

            

