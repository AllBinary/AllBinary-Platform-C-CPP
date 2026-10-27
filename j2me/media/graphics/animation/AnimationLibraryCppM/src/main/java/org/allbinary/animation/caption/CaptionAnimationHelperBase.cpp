
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CaptionAnimationHelperBase: public Animation {

    public: static CaptionAnimationHelperBase* INSTANCE() { static std::unique_ptr<CaptionAnimationHelperBase> value(new CaptionAnimationHelperBase()); return value.get(); }

    public: bool isShowing(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: void tick(){
}


    public: void update(std::string message, BasicColor* basicColor){
}


    public: void paintXY(Graphics* graphics, int32_t x, int32_t y){
}


};

            

