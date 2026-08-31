
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
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/io/IOException.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageJ2SERotationUtil.h"
#include "ImageProcessorInput.h"
#include "ImageProcessedVisitor.h"

class ImageArrayRotationUtil
            : public Object
         {
        

    private: static const instance: ImageArrayRotationUtil = new ImageArrayRotationUtil();

    public static ImageArrayRotationUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageArrayRotationUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const TOTAL_ANGLE: string = "totalAngle: ";

                //@Throws(IOException.constructor)
            
    public process(ImageProcessorInput imageProcessorInput, string input, ImageProcessedVisitor visitor){

    totalAngle: Integer;;
    

                        if(input == this.commonStrings!.UP)
                        
                                    {
                                    totalAngle= Integer.valueOf( -90);
    

                                    }
                                
                             else 
                        if(input == this.commonStrings!.DOWN)
                        
                                    {
                                    totalAngle= Integer.valueOf(90);
    

                                    }
                                
                        else {
                            totalAngle= Integer.valueOf(input);
    

                        }
                            

    generatedBufferedImage: BufferedImage;;
    

    bufferedImageArray: std::vector<BufferedImage> = imageProcessorInput!.getBufferedImageArray()!;;
    




                        for (
    index: int32_t = 0;index < bufferedImageArray!.length; index++)
        {
this.logUtil!.putF(this.TOTAL_ANGLE +totalAngle, this, this.commonStrings!.RUN);
    
generatedBufferedImage= ImageJ2SERotationUtil.getInstance()!.getRotatedImage(bufferedImageArray[index]!, totalAngle!.intValue());
    
visitor.visit(generatedBufferedImage, input, index);
    
}

}


};

            

