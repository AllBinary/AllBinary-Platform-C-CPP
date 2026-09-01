
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
        



            #include <vector>
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LeftToRightImageAnimation.h"

class AdjustedLeftToRightImageAnimation: public LeftToRightImageAnimation {

    private: int32_t dx= 0;

    private: int32_t dy= 0;

public: AdjustedLeftToRightImageAnimation(Image image, std::vector<int32_t> sequenceArray, int32_t dx, int32_t dy, AnimationBehavior animationBehavior){
            super(image, sequenceArray, animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->init(dx, dy);
    
}


                //@Throws(Exception.constructor)
            
    public: void init(int32_t dx, int32_t dy){
this->dx= dx;
    
this->dy= dy;
    
}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){
super.paintXY(graphics, x +this->dx, y +this->dy);
    
}


};

            

