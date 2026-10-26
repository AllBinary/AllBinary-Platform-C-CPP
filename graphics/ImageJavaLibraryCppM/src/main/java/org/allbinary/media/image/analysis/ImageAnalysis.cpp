
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
        



            #include <vector>
        
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
        #include "ImageAnalysisResults.h"
#include "ColorRangeInterface.h"
#include "Color.h"
#include "ColorAverage.h"
#include "ImageColorResults.h"

class ImageAnalysis
            : public Object
         {

    private: static ImageAnalysis instance() { return ImageAnalysis(); }

    public: static ImageAnalysis getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageAnalysis::instance();
    
}


                //@Throws(Exception.constructor)
            
    public: static ImageAnalysisResults process(BufferedImage bufferedImage, ColorRangeInterface colorRangeInterface){

    ImageAnalysisResults imageAnalysisResults = ImageAnalysisResults();;
    

    int64_t redTotal = 0;;
    

    int64_t greenTotal = 0;;
    

    int64_t blueTotal = 0;;
    




                        for (
    int32_t indexY = 0;indexY < bufferedImage.getHeight(); indexY++)
        {




                        for (
    int32_t indexX = 0;indexX < bufferedImage.getWidth(); indexX++)
        {

    Integer keyInteger = Integer::valueOf(bufferedImage.getRGB(indexX, indexY));;
    

    ColorCacheable colorCacheable = ColorCacheFactory::getInstance().get(keyInteger);;
    

    Color color = colorCacheable.getColor();;
    
ImageAnalysis::processColorRangeResults(imageAnalysisResults, colorRangeInterface, color);
    
ImageAnalysis::processImageColorResults(imageAnalysisResults.getImageColorResults(), colorRangeInterface, color);
    
redTotal += color.getRed();
    
greenTotal += color.getGreen();
    
blueTotal += color.getBlue();
    
}

}


    int64_t totalPixels = imageAnalysisResults.getImageColorRangeResults().getTotalPixelsChecked();;
    

    ColorAverage colorAverage = imageAnalysisResults.getImageColorResults().getColorAverage();;
    
colorAverage.setAvgRed(redTotal /totalPixels);
    
colorAverage.setAvgGreen(greenTotal /totalPixels);
    
colorAverage.setAvgBlue(blueTotal /totalPixels);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return imageAnalysisResults;
    
}


    private: static void processColorRangeResults(ImageAnalysisResults imageAnalysisResults, ColorRangeInterface colorRangeInterface, Color color){

                        if(colorRangeInterface.isInRange(color))
                        
                                    {
                                    imageAnalysisResults.getImageColorRangeResults().addMatchingPixelsChecked();
    

                                    }
                                
                        else {
                            
                        }
                            
imageAnalysisResults.getImageColorRangeResults().addTotalPixelsChecked();
    
}


    private: static void processImageColorResults(ImageColorResults imageColorResults, ColorRangeInterface colorRangeInterface, Color color){

                        if(color.getRed() < imageColorResults.getColorRange().getMinRed())
                        
                                    {
                                    imageColorResults.getColorRange().setMinRed(color.getRed());
    

                                    }
                                

                        if(color.getGreen() < imageColorResults.getColorRange().getMinGreen())
                        
                                    {
                                    imageColorResults.getColorRange().setMinGreen(color.getGreen());
    

                                    }
                                

                        if(color.getBlue() < imageColorResults.getColorRange().getMinBlue())
                        
                                    {
                                    imageColorResults.getColorRange().setMinBlue(color.getBlue());
    

                                    }
                                

                        if(color.getRed() > imageColorResults.getColorRange().getMaxRed())
                        
                                    {
                                    imageColorResults.getColorRange().setMaxRed(color.getRed());
    

                                    }
                                

                        if(color.getGreen() > imageColorResults.getColorRange().getMaxGreen())
                        
                                    {
                                    imageColorResults.getColorRange().setMaxGreen(color.getGreen());
    

                                    }
                                

                        if(color.getBlue() > imageColorResults.getColorRange().getMaxBlue())
                        
                                    {
                                    imageColorResults.getColorRange().setMaxBlue(color.getBlue());
    

                                    }
                                
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: ImageAnalysis(){
}


                //@Throws(Exception.constructor)
            
    public: std::vector<ImageAnalysisResults> process(std::vector<BufferedImage> bufferedImageArray, ColorRangeInterface colorRangeInterface){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.putF(CommonLabels::getInstance().START +colorRangeInterface.toString(), this, commonStrings.PROCESS);
    

    std::vector<ImageAnalysisResults> imageAnalysisResultsArray = std::vector<ImageAnalysisResults>(bufferedImageArray.length);;
    




                        for (
    int32_t index = 0;index < bufferedImageArray.size(); index++)
        {
imageAnalysisResultsArray[index]= ImageAnalysis::process(bufferedImageArray[index], colorRangeInterface);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return imageAnalysisResultsArray;
    
}


};

            

