
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageUtil.h"
#include "ImageProcessorInput.h"
#include "ImageProcessedVisitor.h"

class CanvasExpandUtil
            : public Object
         {
        

    private: static const instance: CanvasExpandUtil = new CanvasExpandUtil();

    public static CanvasExpandUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CanvasExpandUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const stringUtil: StringUtil = StringUtil.getInstance()!;

                //@Throws(Exception.constructor)
            
    public process(ImageProcessorInput imageProcessorInput, int32_t increaseX, int32_t increaseY, ImageProcessedVisitor visitor){

    imageUtil: ImageUtil = ImageUtil.getInstance()!;;
    

    bufferedImageArray: std::vector<BufferedImage> = imageProcessorInput!.getBufferedImageArray()!;;
    

    subBufferedImageArray: std::vector<BufferedImage> = new Array(bufferedImageArray!.length);;
    

    size: int32_t = bufferedImageArray!.length
                ;;
    

    bufferedImage: BufferedImage;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
bufferedImage= bufferedImageArray[index]!;
    
subBufferedImageArray[index]= imageUtil!.createBufferedImage(bufferedImage, bufferedImage!.getWidth() +increaseX, bufferedImage!.getHeight() +increaseY, false);
    
visitor.visit(subBufferedImageArray[index]!, this.stringUtil!.EMPTY_STRING, index);
    
}

}


};

            

