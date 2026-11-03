
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGETOROTATIONIMAGEARRAYUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGETOROTATIONIMAGEARRAYUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageToRotationImageArrayUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageRotationUtil.h"

auto ImageToRotationImageArrayUtil::instance_owner() -> ImageToRotationImageArrayUtil* { static std::unique_ptr<ImageToRotationImageArrayUtil> value(new ImageToRotationImageArrayUtil()); return value.get(); }
ImageToRotationImageArrayUtil* ImageToRotationImageArrayUtil::instance = ImageToRotationImageArrayUtil::instance_owner();

    auto ImageToRotationImageArrayUtil::getInstance() -> ImageToRotationImageArrayUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ImageToRotationImageArrayUtil::instance;
    
}


ImageToRotationImageArrayUtil::ImageToRotationImageArrayUtil(){
}


                //@Throws(Exception.constructor)
            
    auto ImageToRotationImageArrayUtil::generate(Image* image, int32_t angleIncrement, int32_t totalAngle) -> std::vector<Image*>{

    ImageRotationUtil* imageRotationUtil = ImageRotationUtil::getInstance();;
    

    int32_t totalFrames = totalAngle /angleIncrement;;
    

    std::vector<Image*> imageArray = std::vector<Image*>(totalFrames);;
    
imageArray[0]= image;
    




                        for (
    int32_t index = 1;index < totalFrames; index++)
        {
imageArray[index]= imageRotationUtil->createRotatedImage(image, index *angleIncrement);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return imageArray;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGETOROTATIONIMAGEARRAYUTIL_CPP
