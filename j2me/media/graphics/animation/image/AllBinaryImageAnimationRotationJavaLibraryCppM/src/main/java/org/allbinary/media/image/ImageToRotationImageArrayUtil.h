
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGETOROTATIONIMAGEARRAYUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGETOROTATIONIMAGEARRAYUTIL_H

            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageRotationUtil.h"

class ImageToRotationImageArrayUtil
            : public Object
         {

    private: static ImageToRotationImageArrayUtil instance() { return ImageToRotationImageArrayUtil(); }

    public: static ImageToRotationImageArrayUtil getInstance();

private: ImageToRotationImageArrayUtil();

                //@Throws(Exception.constructor)
            
    public: std::vector<Image> generate(Image image, int32_t angleIncrement, int32_t totalAngle);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGETOROTATIONIMAGEARRAYUTIL_H
