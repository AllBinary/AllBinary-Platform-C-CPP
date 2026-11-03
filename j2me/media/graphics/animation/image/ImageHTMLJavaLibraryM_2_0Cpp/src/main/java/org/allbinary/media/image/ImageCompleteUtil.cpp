
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOMPLETEUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOMPLETEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageCompleteUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/microemu/device/playn/PlaynImage.h>

      
#include <playn/core/CoreImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ImageCompleteUtil::ImageCompleteUtil() {
        }
        auto ImageCompleteUtil::instance_owner() -> ImageCompleteUtil* { static std::unique_ptr<ImageCompleteUtil> value(new ImageCompleteUtil()); return value.get(); }
ImageCompleteUtil* ImageCompleteUtil::instance = ImageCompleteUtil::instance_owner();

    auto ImageCompleteUtil::getInstance() -> ImageCompleteUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ImageCompleteUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageCompleteUtil::waitForImage(Image* image, std::string name) -> void{
}


                //@Throws(Exception.constructor)
            
    auto ImageCompleteUtil::isReady(Image* image, std::string name, TimeDelayHelper* timeDelayHelper) -> bool{

    PlaynImage* playnImage = dynamic_cast<PlaynImage*>(image);;
    

    CoreImage* playnCoreImage = dynamic_cast<CoreImage*>(playnImage->getImage());;
    

                        if(!playnCoreImage->isReady() || playnCoreImage->width() +playnCoreImage->height() <= 0)
                        
                                    {
                                    this->handleTimeout(name);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                                    }
                                

                        if(!image->isReady())
                        
                                    {
                                    image->init(image->getImage());
    

                        if(!image->isReady())
                        
                                    {
                                    PreLogUtil::put(JavaString::valueOf("Waiting for Not Ready Image: ") +JavaString::valueOf(image->getName()), this, this->ISREADY);
    

                                    }
                                

                                    }
                                

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::put(this->COMPLETE +image->getName(), this, commonStrings->SUCCESS);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageCompleteUtil::handleTimeout(std::string name) -> void{
}


                //@Throws(Exception.constructor)
            
    auto ImageCompleteUtil::waitForAll() -> void{
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOMPLETEUTIL_CPP
