
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_IMAGE_IMAGEFACTORY_CPP
        #define ORG_ALLBINARY_IMAGE_IMAGEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/ImageFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/InputStream.h>

      
#include <javax/microedition/lcdui/Image.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ImageCacheBaseAndroidJavaLibrary

ImageFactory::ImageFactory() {
        }
        auto ImageFactory::instance_owner() -> ImageFactory* { static std::unique_ptr<ImageFactory> value(new ImageFactory()); return value.get(); }
ImageFactory* ImageFactory::instance = ImageFactory::instance_owner();

    auto ImageFactory::getInstance() -> ImageFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageFactory::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageFactory::createImageUrl(std::string url) -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Image::createImage(url);;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageFactory::createImage(std::string caller, int32_t width, int32_t height) -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Image::createImageWH(width, height);;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageFactory::createImageFromInputStream(Object* key, InputStream* inputStream) -> Image*{

    Image* image = Image::createImageFromInputStream(inputStream);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageFactory::createImageFromInputStream(InputStream* inputStream) -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Image::createImageFromInputStream(inputStream);;
    
}




        #endif //ORG_ALLBINARY_IMAGE_IMAGEFACTORY_CPP
