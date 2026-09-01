
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ALPHABASEPROCESSOR_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALPHABASEPROCESSOR_H

            #include "../../../../java/lang/Object.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/media/image/ImageModifierUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AlphaBaseProcessor
            : public Object
         {

    private: static AlphaBaseProcessor instance() { return AlphaBaseProcessor(); }

    public: static AlphaBaseProcessor getInstance();

    public: void setAlpha(ImageModifierUtil imageModifierUtil, Image originalImage, Image imageToShow, int32_t alpha);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALPHABASEPROCESSOR_H
