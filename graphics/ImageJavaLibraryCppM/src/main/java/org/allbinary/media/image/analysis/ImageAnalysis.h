
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

class ImageAnalysis
            : public Object
         {

    private: static ImageAnalysis* instance() { static std::unique_ptr<ImageAnalysis> value(new ImageAnalysis()); return value.get(); }

    public: static ImageAnalysis* getInstance();

                //@Throws(Exception.constructor)
            
    public: static ImageAnalysisResults* process(BufferedImage* bufferedImage, ColorRangeInterface* colorRangeInterface);

    private: static void processColorRangeResults(ImageAnalysisResults* imageAnalysisResults, ColorRangeInterface* colorRangeInterface, Color* color);

    private: static void processImageColorResults(ImageColorResults* imageColorResults, ColorRangeInterface* colorRangeInterface, Color* color);

    protected: LogUtil* logUtil = LogUtil::getInstance();

private: ImageAnalysis();

                //@Throws(Exception.constructor)
            
    public: std::vector<ImageAnalysisResults*> process(std::vector<BufferedImage*> bufferedImageArray, ColorRangeInterface* colorRangeInterface);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGEANALYSIS_H
