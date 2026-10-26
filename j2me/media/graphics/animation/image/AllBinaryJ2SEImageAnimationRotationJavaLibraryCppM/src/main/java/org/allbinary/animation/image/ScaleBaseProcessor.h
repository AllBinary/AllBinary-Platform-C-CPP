
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SCALEBASEPROCESSOR_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SCALEBASEPROCESSOR_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Image.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ScaleBaseProcessor
            : public Object
         {

    private: static ScaleBaseProcessor instance() { return ScaleBaseProcessor(); }

    public: static ScaleBaseProcessor getInstance();

    public: void update(Image originalImage, std::vector<Image> originalImageArray, std::vector<Image> imageToShowArray, int32_t index, float scaleX, float scaleY, float maxScaleX, float maxScaleY);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SCALEBASEPROCESSOR_H
