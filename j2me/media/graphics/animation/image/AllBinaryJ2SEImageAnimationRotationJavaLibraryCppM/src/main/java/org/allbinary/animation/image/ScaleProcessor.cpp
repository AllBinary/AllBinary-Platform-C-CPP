
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

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/ImageScaleUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ScaleBaseProcessor.h"

class ScaleProcessor: public ScaleBaseProcessor {

    private: static ScaleProcessor* instanceC() { static std::unique_ptr<ScaleProcessor> value(new ScaleProcessor()); return value.get(); }

    public: static ScaleBaseProcessor* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ScaleProcessor::instanceC();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: ImageScaleUtil* imageScaleUtil = ImageScaleUtil::getInstance();

    public: void update(Image* originalImage, std::vector<Image*> originalImageArray, std::vector<Image*> ximageToShowArray, int32_t unused, float scaleX, float scaleY, float maxScaleX, float maxScaleY){

        try {
            this->imageScaleUtil->scale2(originalImage, originalImageArray, ximageToShowArray, unused, scaleX, scaleY, maxScaleX, maxScaleY);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->UPDATE, &e);
    
}

}


};

            

