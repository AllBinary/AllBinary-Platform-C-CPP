
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEARRAYROTATIONUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEARRAYROTATIONUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageArrayRotationUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/io/IOException.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageJ2SERotationUtil.h"
#include "org/allbinary/media/image/ImageProcessorInput.h"
#include "org/allbinary/media/image/ImageProcessedVisitor.h"


ImageArrayRotationUtil::ImageArrayRotationUtil() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()) {
        }
        auto ImageArrayRotationUtil::instance_owner() -> ImageArrayRotationUtil* { static std::unique_ptr<ImageArrayRotationUtil> value(new ImageArrayRotationUtil()); return value.get(); }
ImageArrayRotationUtil* ImageArrayRotationUtil::instance = ImageArrayRotationUtil::instance_owner();

    auto ImageArrayRotationUtil::getInstance() -> ImageArrayRotationUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ImageArrayRotationUtil::instance;
    
}


                //@Throws(IOException.constructor)
            
    auto ImageArrayRotationUtil::process(ImageProcessorInput* imageProcessorInput, std::string input, ImageProcessedVisitor* visitor) -> void{

    int32_t totalAngle;;
    

                        if(input == this->commonStrings->UP)
                        
                                    {
                                    totalAngle= Integer.valueOf( -90);
    

                                    }
                                
                             else 
                        if(input == this->commonStrings->DOWN)
                        
                                    {
                                    totalAngle= Integer.valueOf(90);
    

                                    }
                                
                        else {
                            totalAngle= Integer.valueOf(input);
    

                        }
                            

    BufferedImage* generatedBufferedImage;;
    

    std::vector<BufferedImage*> bufferedImageArray = imageProcessorInput->getBufferedImageArray();;
    




                        for (
    int32_t index = 0;index < bufferedImageArray.size(); index++)
        {
this->logUtil->putF(this->TOTAL_ANGLE +totalAngle, this, this->commonStrings->RUN);
    
generatedBufferedImage= ImageJ2SERotationUtil::getInstance()->getRotatedImage(bufferedImageArray[index], totalAngle);
    
visitor->visit(generatedBufferedImage, input, index);
    
}

}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEARRAYROTATIONUTIL_CPP
