
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_LINEPATHANIMATION_H
        #define ORG_ALLBINARY_GAME_LAYER_LINEPATHANIMATION_H

            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/layer/Layer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LinePathAnimation
            : public Object
         {

    private: static LinePathAnimation instance() { return LinePathAnimation(); }

    public: static LinePathAnimation getInstance();

    public: void paint(Graphics graphics, GPoint point, GPoint nextPoint, Layer tiledLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_LINEPATHANIMATION_H
