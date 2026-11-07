
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGEANALYSIS_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGEANALYSIS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/analysis/ImageAnalysis.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/graphics/color/ColorCacheFactory.h>

      
#include <org/allbinary/graphics/color/ColorCacheable.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/analysis/ImageAnalysisResults.h"
#include "org/allbinary/media/image/analysis/ColorRangeInterface.h"
#include "org/allbinary/media/image/analysis/Color.h"
#include "org/allbinary/media/image/analysis/ColorAverage.h"
#include "org/allbinary/media/image/analysis/ImageColorResults.h"

auto ImageAnalysis::instance_owner() -> ImageAnalysis* { static std::unique_ptr<ImageAnalysis> value(new ImageAnalysis()); return value.get(); }
ImageAnalysis* ImageAnalysis::instance = ImageAnalysis::instance_owner();

    auto ImageAnalysis::getInstance() -> ImageAnalysis*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ImageAnalysis::instance;
    
}


ImageAnalysis::ImageAnalysis() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto ImageAnalysis::process(std::vector<BufferedImage*> bufferedImageArray, ColorRangeInterface* colorRangeInterface) -> std::vector<ImageAnalysisResults*>{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(CommonLabels::getInstance()->START +JavaString::valueOf(colorRangeInterface), this, commonStrings->PROCESS);
    

    std::vector<ImageAnalysisResults*> imageAnalysisResultsArray = std::vector<ImageAnalysisResults*>(bufferedImageArray.size());;
    




                        for (
    int32_t index = 0;index < bufferedImageArray.size(); index++)
        {
imageAnalysisResultsArray[index]= ImageAnalysis::process(bufferedImageArray[index], colorRangeInterface);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return imageAnalysisResultsArray;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageAnalysis::process(BufferedImage* bufferedImage, ColorRangeInterface* colorRangeInterface) -> ImageAnalysisResults*{

    ImageAnalysisResults* imageAnalysisResults = new ImageAnalysisResults();;
    

    int64_t redTotal = 0;;
    

    int64_t greenTotal = 0;;
    

    int64_t blueTotal = 0;;
    




                        for (
    int32_t indexY = 0;indexY < bufferedImage->getHeight(); indexY++)
        {




                        for (
    int32_t indexX = 0;indexX < bufferedImage->getWidth(); indexX++)
        {

    int32_t keyInteger = Integer.valueOf(bufferedImage->getRGB(indexX, indexY));;
    

    ColorCacheable* colorCacheable = dynamic_cast<ColorCacheable*>(ColorCacheFactory::getInstance()->get(keyInteger));;
    

    Color* color = colorCacheable->getColor();;
    
ImageAnalysis::processColorRangeResults(imageAnalysisResults, colorRangeInterface, color);
    
ImageAnalysis::processImageColorResults(imageAnalysisResults->getImageColorResults(), colorRangeInterface, color);
    
redTotal += color->getRed();
    
greenTotal += color->getGreen();
    
blueTotal += color->getBlue();
    
}

}


    int64_t totalPixels = imageAnalysisResults->getImageColorRangeResults()->getTotalPixelsChecked();;
    

    ColorAverage* colorAverage = imageAnalysisResults->getImageColorResults()->getColorAverage();;
    
colorAverage->setAvgRed(redTotal /totalPixels);
    
colorAverage->setAvgGreen(greenTotal /totalPixels);
    
colorAverage->setAvgBlue(blueTotal /totalPixels);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return imageAnalysisResults;
    
}


    auto ImageAnalysis::processColorRangeResults(ImageAnalysisResults* imageAnalysisResults, ColorRangeInterface* colorRangeInterface, Color* color) -> void{

                        if(colorRangeInterface->isInRange(color))
                        
                                    {
                                    imageAnalysisResults->getImageColorRangeResults()->addMatchingPixelsChecked();
    

                                    }
                                
                        else {
                            
                        }
                            
imageAnalysisResults->getImageColorRangeResults()->addTotalPixelsChecked();
    
}


    auto ImageAnalysis::processImageColorResults(ImageColorResults* imageColorResults, ColorRangeInterface* colorRangeInterface, Color* color) -> void{

                        if(color->getRed() < imageColorResults->getColorRange()->getMinRed())
                        
                                    {
                                    imageColorResults->getColorRange()->setMinRed(color->getRed());
    

                                    }
                                

                        if(color->getGreen() < imageColorResults->getColorRange()->getMinGreen())
                        
                                    {
                                    imageColorResults->getColorRange()->setMinGreen(color->getGreen());
    

                                    }
                                

                        if(color->getBlue() < imageColorResults->getColorRange()->getMinBlue())
                        
                                    {
                                    imageColorResults->getColorRange()->setMinBlue(color->getBlue());
    

                                    }
                                

                        if(color->getRed() > imageColorResults->getColorRange()->getMaxRed())
                        
                                    {
                                    imageColorResults->getColorRange()->setMaxRed(color->getRed());
    

                                    }
                                

                        if(color->getGreen() > imageColorResults->getColorRange()->getMaxGreen())
                        
                                    {
                                    imageColorResults->getColorRange()->setMaxGreen(color->getGreen());
    

                                    }
                                

                        if(color->getBlue() > imageColorResults->getColorRange()->getMaxBlue())
                        
                                    {
                                    imageColorResults->getColorRange()->setMaxBlue(color->getBlue());
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGEANALYSIS_CPP
