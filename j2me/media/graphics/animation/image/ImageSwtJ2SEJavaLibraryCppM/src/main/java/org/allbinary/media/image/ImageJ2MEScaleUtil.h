
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2MESCALEUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2MESCALEUTIL_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageCopyUtil.h"

class ImageJ2MEScaleUtil
            : public Object
         {

    private: static ImageJ2MEScaleUtil* instance() { static std::unique_ptr<ImageJ2MEScaleUtil> value(new ImageJ2MEScaleUtil()); return value.get(); }

    public: static ImageJ2MEScaleUtil* getInstance();

private: ImageJ2MEScaleUtil();

                //@Throws(Exception.constructor)
            
    public: std::vector<Image*> scaleArray(std::vector<Image*> images, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public: Image* scale(Image* image, int32_t width, int32_t height);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2MESCALEUTIL_H
