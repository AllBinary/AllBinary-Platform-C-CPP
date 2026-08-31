
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGEANALYSIS_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGEANALYSIS_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
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
        

    private: static const instance: ImageAnalysis = new ImageAnalysis();

    public static ImageAnalysis getInstance();

                //@Throws(Exception.constructor)
            
    public static ImageAnalysisResults process(BufferedImage bufferedImage, ColorRangeInterface colorRangeInterface);

    static processColorRangeResults(ImageAnalysisResults imageAnalysisResults, ColorRangeInterface colorRangeInterface, Color color);

    static processImageColorResults(ImageColorResults imageColorResults, ColorRangeInterface colorRangeInterface, Color color);

    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor ();

                //@Throws(Exception.constructor)
            
    public std::vector<ImageAnalysisResults> process(std::vector<BufferedImage> bufferedImageArray, ColorRangeInterface colorRangeInterface);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGEANALYSIS_H
