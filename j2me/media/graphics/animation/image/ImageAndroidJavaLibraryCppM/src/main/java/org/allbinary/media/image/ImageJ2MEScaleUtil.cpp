
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2023 AllBinary
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2MESCALEUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2MESCALEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageJ2MEScaleUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/image/GameFeatureImageCacheFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageScaleUtil.h"

auto ImageJ2MEScaleUtil::instance_owner() -> ImageJ2MEScaleUtil* { static std::unique_ptr<ImageJ2MEScaleUtil> value(new ImageJ2MEScaleUtil()); return value.get(); }
ImageJ2MEScaleUtil* ImageJ2MEScaleUtil::instance = ImageJ2MEScaleUtil::instance_owner();

    auto ImageJ2MEScaleUtil::getInstance() -> ImageJ2MEScaleUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ImageJ2MEScaleUtil::instance;
    
}


ImageJ2MEScaleUtil::ImageJ2MEScaleUtil(){
}


                //@Throws(Exception.constructor)
            
    auto ImageJ2MEScaleUtil::scaleArray(std::vector<Image*> images, int32_t width, int32_t height) -> std::vector<Image*>{




                        for (
    int32_t index = 0;index < images.size(); index++)
        {

    Image* image = images[index];;
    
images[index]= ImageScaleUtil::getInstance()->createImage2(GameFeatureImageCacheFactory::getInstance(), image, width /2, image->getWidth(), height, image->getHeight(), false);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return images;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageJ2MEScaleUtil::scale(Image* image, int32_t width, int32_t height) -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ImageScaleUtil::getInstance()->createImage2(GameFeatureImageCacheFactory::getInstance(), image, width, image->getWidth(), height, image->getHeight(), false);;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2MESCALEUTIL_CPP
