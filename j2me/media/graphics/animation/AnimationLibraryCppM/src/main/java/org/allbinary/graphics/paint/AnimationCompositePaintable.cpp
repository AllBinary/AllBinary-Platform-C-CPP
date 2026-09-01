
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
        



#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InitUpdatePaintable.h"

class AnimationCompositePaintable: public InitUpdatePaintable {

    private: Animation animationInterface;

public: AnimationCompositePaintable(Animation animationInterface){
this->animationInterface= animationInterface;
    
}


    public: void paint(Graphics graphics){
this->animationInterface.paintXY(graphics, 0, 0);
    
}


    public: void paintThreed(Graphics graphics){
this->animationInterface.paintThreedXYZ(graphics, 0, 0, 0);
    
}


};

            

