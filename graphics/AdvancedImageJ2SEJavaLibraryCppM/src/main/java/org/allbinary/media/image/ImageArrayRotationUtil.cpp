
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
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
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

    private: static ImageArrayRotationUtil instance() { return ImageArrayRotationUtil(); }

    public: static ImageArrayRotationUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageArrayRotationUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const std::string TOTAL_ANGLE = "totalAngle: ";

                //@Throws(IOException.constructor)
            
    public: void process(ImageProcessorInput imageProcessorInput, std::string input, ImageProcessedVisitor visitor){

    Integer totalAngle;;
    

                        if(input == this->commonStrings.UP)
                        
                                    {
                                    totalAngle= Integer::valueOf( -90);
    

                                    }
                                
                             else 
                        if(input == this->commonStrings.DOWN)
                        
                                    {
                                    totalAngle= Integer::valueOf(90);
    

                                    }
                                
                        else {
                            totalAngle= Integer::valueOf(input);
    

                        }
                            

    BufferedImage generatedBufferedImage;;
    

    std::vector<BufferedImage> bufferedImageArray = imageProcessorInput.getBufferedImageArray();;
    




                        for (
    int32_t index = 0;index < bufferedImageArray.size(); index++)
        {
this->logUtil.putF(this->TOTAL_ANGLE +totalAngle, this, this->commonStrings.RUN);
    
generatedBufferedImage= ImageJ2SERotationUtil::getInstance().getRotatedImage(bufferedImageArray[index], totalAngle.intValue());
    
visitor.visit(generatedBufferedImage, input, index);
    
}

}


};

            

