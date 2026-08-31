
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_PAINT_ANIMATIONCOMPOSITEPAINTABLE_H
        #define ORG_ALLBINARY_GRAPHICS_PAINT_ANIMATIONCOMPOSITEPAINTABLE_H

#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InitUpdatePaintable.h"

class AnimationCompositePaintable: public InitUpdatePaintable {
        

    private: const animationInterface: Animation;

public constructor (Animation animationInterface);

    public paint(Graphics graphics);

    public paintThreed(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_PAINT_ANIMATIONCOMPOSITEPAINTABLE_H
