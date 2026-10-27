
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULT_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/comparison/ImageComparisonResult.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/image/ImageUtil.h>

      
#include <org/allbinary/media/image/comparison/pixel/PixelDelta.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ImageComparisonResult::ImageComparisonResult(std::string name, BufferedImage* bufferedImage, BufferedImage* bufferedImage2, int64_t frameOne, int64_t frameTwo, int32_t tolerance) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), bufferedImages(std::vector<BufferedImage*>(2)){
this->name= name;
    
this->nonMatchingPixelVector= new BasicArrayListD();
    
this->bufferedImages[0]= bufferedImage;
    
this->bufferedImages[1]= bufferedImage2;
    
this->frameOne= frameOne;
    
this->frameTwo= frameTwo;
    
this->setTolerance(0);
    

    int32_t imageHeight = bufferedImage->getHeight();;
    

    int32_t imageWidth = bufferedImage->getWidth();;
    

                        if(bufferedImage->getHeight() != bufferedImage2->getHeight())
                        
                                    {
                                    this->isSameHeight= false;
    

                        if(imageHeight > bufferedImage2->getHeight())
                        
                                    {
                                    imageHeight= bufferedImage2->getHeight();
    

                                    }
                                

                                    }
                                
                        else {
                            this->isSameHeight= true;
    

                        }
                            

                        if(bufferedImage->getWidth() != bufferedImage2->getWidth())
                        
                                    {
                                    this->isSameWidth= false;
    

                        if(imageWidth > bufferedImage2->getWidth())
                        
                                    {
                                    imageWidth= bufferedImage2->getWidth();
    

                                    }
                                

                                    }
                                
                        else {
                            this->isSameWidth= true;
    

                        }
                            
this->imageWidth= imageWidth;
    
this->imageHeight= imageHeight;
    

                        if(!this->isSameWidth || !this->isSameHeight)
                        
                                    {
                                    
    ImageUtil* imageUtil = ImageUtil::getInstance();;
    
this->logUtil->putF("Images were not the same size? Most likely a resolution change.", this, this->commonStrings->CONSTRUCTOR);
    
this->logUtil->putF(JavaString::valueOf("1: ") +JavaString::valueOf(imageUtil->toString(bufferedImage)), this, this->commonStrings->CONSTRUCTOR);
    
this->logUtil->putF(JavaString::valueOf("2: ") +JavaString::valueOf(imageUtil->toString(bufferedImage2)), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


    auto ImageComparisonResult::getMatchingPercent() -> float{

                        if(this->matchingPercent ==  -1)
                        
                                    {
                                    this->matchingPercent= this->pixelsThatMatch /(this->imageWidth *this->imageHeight);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->matchingPercent;
    
}


    auto ImageComparisonResult::add(PixelDelta* pixel) -> void{
this->nonMatchingPixelVector->add(pixel);
    
}


    auto ImageComparisonResult::getNonMatchingPixelVector() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->nonMatchingPixelVector;
    
}


    auto ImageComparisonResult::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (new StringMaker())->append("ImageComparisonInfo: ")->append(this->name)->append(" Number Of Matching Pixels: ")->appendint(this->pixelsThatMatch)->append("\nNumber Of Non-Matching Pixels: ")->appendint(this->getNonMatchingPixelVector()->size())->append("\nNumber Of Pixels Ignored: ")->appendint(this->pixelsIgnored)->append("\nMatching Percentage: ")->appendfloat(this->getMatchingPercent())->toString();;
    
}


    auto ImageComparisonResult::getBufferedImages() -> std::vector<BufferedImage*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->bufferedImages;
    
}


    auto ImageComparisonResult::getTolerance() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tolerance;
    
}


    auto ImageComparisonResult::setTolerance(int32_t tolerance) -> void{
this->tolerance= tolerance;
    
}


    auto ImageComparisonResult::getFrameOne() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->frameOne;
    
}


    auto ImageComparisonResult::getFrameTwo() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->frameTwo;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULT_CPP
