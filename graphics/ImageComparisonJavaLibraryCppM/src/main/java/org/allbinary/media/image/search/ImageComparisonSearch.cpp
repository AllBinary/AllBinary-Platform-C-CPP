
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_SEARCH_IMAGECOMPARISONSEARCH_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_SEARCH_IMAGECOMPARISONSEARCH_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/search/ImageComparisonSearch.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/ImageUtil.h>

      
#include <org/allbinary/media/image/comparison/pixel/PixelDelta.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ImageComparisonSearch::ImageComparisonSearch(BufferedImage* bufferedImage, BufferedImage* bufferedImage2, int32_t tolerance) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->nonMatchingPixelVector= new BasicArrayListD();
    
this->setBufferedImages(std::vector<BufferedImage*>(2));
    
this->getBufferedImages()[0]= bufferedImage;
    
this->getBufferedImages()[1]= bufferedImage2;
    
this->imageHeight= bufferedImage->getHeight();
    
this->imageWidth= bufferedImage->getWidth();
    

                        if(bufferedImage->getHeight() != bufferedImage2->getHeight())
                        
                                    {
                                    this->isSameHeight= false;
    

                        if(this->imageHeight > bufferedImage2->getHeight())
                        
                                    {
                                    this->imageHeight= bufferedImage2->getHeight();
    

                                    }
                                

                                    }
                                
                        else {
                            this->isSameHeight= true;
    

                        }
                            

                        if(bufferedImage->getWidth() != bufferedImage2->getWidth())
                        
                                    {
                                    this->isSameWidth= false;
    

                        if(this->imageWidth > bufferedImage2->getWidth())
                        
                                    {
                                    this->imageWidth= bufferedImage2->getWidth();
    

                                    }
                                

                                    }
                                
                        else {
                            this->isSameWidth= true;
    

                        }
                            

                        if(!this->isSameWidth || !this->isSameHeight)
                        
                                    {
                                    
    ImageUtil* imageUtil = ImageUtil::getInstance();;
    
this->logUtil->putF("Images were not the same size? Most likely a resolution change.", this, this->commonStrings->CONSTRUCTOR);
    
this->logUtil->putF(JavaString::valueOf("1: ") +JavaString::valueOf(imageUtil->toString(bufferedImage)), this, this->commonStrings->CONSTRUCTOR);
    
this->logUtil->putF(JavaString::valueOf("2: ") +JavaString::valueOf(imageUtil->toString(bufferedImage2)), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


    auto ImageComparisonSearch::getMatchingPercent() -> float{

                        if(this->matchingPercent ==  -1)
                        
                                    {
                                    this->matchingPercent= this->pixelsThatMatch /(this->imageWidth *this->imageHeight);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->matchingPercent;
    
}


    auto ImageComparisonSearch::add(PixelDelta* pixel) -> void{
this->nonMatchingPixelVector->add(pixel);
    
}


    auto ImageComparisonSearch::getNonMatchingPixelVector() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->nonMatchingPixelVector;
    
}


    auto ImageComparisonSearch::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("ImageComparisonInfo: ") +JavaString::valueOf(" Number Of Matching Pixels: ")) +JavaString::valueOf(this->pixelsThatMatch)) +JavaString::valueOf("\nNumber Of Non-Matching Pixels: ")) +JavaString::valueOf(this->getNonMatchingPixelVector()->size())) +JavaString::valueOf("\nNumber Of Pixels Ignored: ")) +JavaString::valueOf(this->pixelsIgnored)) +JavaString::valueOf("\nMatching Percentage: ")) +JavaString::valueOf(this->getMatchingPercent());
    
}


    auto ImageComparisonSearch::getBufferedImages() -> std::vector<BufferedImage*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->bufferedImages;
    
}


    auto ImageComparisonSearch::setBufferedImages(std::vector<BufferedImage*> bufferedImages) -> void{
this->bufferedImages= bufferedImages;
    
}


    auto ImageComparisonSearch::getTolerance() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tolerance;
    
}


    auto ImageComparisonSearch::setTolerance(int32_t tolerance) -> void{
this->tolerance= tolerance;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_SEARCH_IMAGECOMPARISONSEARCH_CPP
