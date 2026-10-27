
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/io/IOException.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageProcessorInput.h"
#include "org/allbinary/media/image/ImageProcessedVisitor.h"

class CanvasTrimUtil
            : public Object
         {

    private: static CanvasTrimUtil* instance() { static std::unique_ptr<CanvasTrimUtil> value(new CanvasTrimUtil()); return value.get(); }

    public: static CanvasTrimUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CanvasTrimUtil::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: StringUtil* stringUtil = StringUtil::getInstance();

                //@Throws(IOException.constructor)
            
    public: void process(ImageProcessorInput* imageProcessorInput, int32_t cutCanvasFromLeftReduction, int32_t cutCanvasFromTopReduction, int32_t cutCanvasFromRightReduction, int32_t cutCanvasFromBottomReduction, ImageProcessedVisitor* visitor){

    std::vector<BufferedImage*> bufferedImageArray = imageProcessorInput->getBufferedImageArray();;
    

    std::vector<BufferedImage*> subBufferedImageArray = std::vector<BufferedImage*>(bufferedImageArray.length);;
    

    int32_t size = bufferedImageArray.size();;
    

    BufferedImage* bufferedImage;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
bufferedImage= bufferedImageArray[index];
    
subBufferedImageArray[index]= bufferedImage->getSubimage(cutCanvasFromLeftReduction, cutCanvasFromTopReduction, bufferedImage->getWidth() -cutCanvasFromLeftReduction -cutCanvasFromRightReduction, bufferedImage->getHeight() -cutCanvasFromTopReduction -cutCanvasFromBottomReduction);
    
visitor->visit(subBufferedImageArray[index], this->stringUtil->EMPTY_STRING, index);
    
}

}


};

            

