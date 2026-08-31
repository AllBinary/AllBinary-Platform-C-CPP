
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageCopyUtil.h"

class ImageJ2MEScaleUtil
            : public Object
         {
        

    private: static const instance: ImageJ2MEScaleUtil = new ImageJ2MEScaleUtil();

    public static ImageJ2MEScaleUtil getInstance();

private constructor ();

                //@Throws(Exception.constructor)
            
    public std::vector<Image> scaleArray(std::vector<Image> images, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public Image scale(Image image, int32_t width, int32_t height);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2MESCALEUTIL_H
