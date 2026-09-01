
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
        



            #include "../../../../java/lang/Object.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/media/image/ImageModifierUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ModifierBaseProcessor
            : public Object
         {

    private: static ModifierBaseProcessor instance() { return ModifierBaseProcessor(); }

    public: static ModifierBaseProcessor getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModifierBaseProcessor::instance();
    
}


    public: void updateColor(ImageModifierUtil imageModifierUtil, Image originalImage, Image imageToShow, int32_t index, BasicColor basicColor){
}


    public: void updateAlpha(ImageModifierUtil imageModifierUtil, Image originalImage, Image imageToShow, int32_t index, int32_t alpha){
}


};

            

