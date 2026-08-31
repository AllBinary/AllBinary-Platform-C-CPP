
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

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageBaseRotationAnimation.h"

class AdjustedImageBaseRotationAnimation: public ImageBaseRotationAnimation {
        

    private: dx: int32_t= 0;

    private: dy: int32_t= 0;

public constructor (Image image, AngleInfo angleInfo, int16_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior animationBehavior){
            super(image, angleInfo, totalAngle, animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.init(dx, dy);
    
}


                //@Throws(Exception.constructor)
            
    public init(int32_t dx, int32_t dy){
this.dx= dx;
    
this.dy= dy;
    
}


    public paintXY(Graphics graphics, int32_t x, int32_t y){
super.paintXY(graphics, x +this.dx, y +this.dy);
    
}


};

            

