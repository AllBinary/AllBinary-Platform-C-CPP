
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
        
            #include "java/lang/Exception.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageUtil.h"
#include "org/allbinary/media/image/ImageProcessorInput.h"
#include "org/allbinary/media/image/ImageProcessedVisitor.h"

class CanvasExpandUtil
            : public Object
         {

    private: static CanvasExpandUtil* instance() { static std::unique_ptr<CanvasExpandUtil> value(new CanvasExpandUtil()); return value.get(); }

    public: static CanvasExpandUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CanvasExpandUtil::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: StringUtil* stringUtil = StringUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: void process(ImageProcessorInput* imageProcessorInput, int32_t increaseX, int32_t increaseY, ImageProcessedVisitor* visitor){

    ImageUtil* imageUtil = ImageUtil::getInstance();;
    

    std::vector<BufferedImage*> bufferedImageArray = imageProcessorInput->getBufferedImageArray();;
    

    std::vector<BufferedImage*> subBufferedImageArray = std::vector<BufferedImage*>(bufferedImageArray.length);;
    

    int32_t size = bufferedImageArray.size();;
    

    BufferedImage* bufferedImage;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
bufferedImage= bufferedImageArray[index];
    
subBufferedImageArray[index]= imageUtil->createBufferedImage(bufferedImage, bufferedImage->getWidth() +increaseX, bufferedImage->getHeight() +increaseY, false);
    
visitor->visit(subBufferedImageArray[index], this->stringUtil->EMPTY_STRING, index);
    
}

}


};

            

