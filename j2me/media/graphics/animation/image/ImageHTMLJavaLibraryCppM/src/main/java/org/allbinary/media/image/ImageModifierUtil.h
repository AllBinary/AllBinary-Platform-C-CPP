
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Image;
class BasicColor;



















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageModifierUtil
            : public virtual Object
         {

    private: static ImageModifierUtil* instance_owner();
    private: static ImageModifierUtil* instance;

    public: static ImageModifierUtil* getInstanceOrCreate();


            
    public: ImageModifierUtil();
        
    public: void setColor(Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor);

    public: void changeColor(Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor);

    public: void setAlpha(Image* originalImage, Image* image, int32_t imageIndex, int32_t alphaInt);

    public: std::vector<Image*> getImageArray(std::vector<Image*> originalImageArray);

    public: void handleImage(std::vector<Image*> imageArray, int32_t index, Image* image);

    public: void reset();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif




        #endif
    
