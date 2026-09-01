
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
        



            #include "../../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../../../java/lang/Long.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/input/media/image/InputImageIOInterfaceFactory.h>

      
#include <org/allbinary/input/media/image/InputImageType.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/io/ImageIOInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageTypes.h"
#include "ImageActionScriptOutputInterface.h"

class ImageActionScriptOutputProcessor
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static void process(ImageActionScriptOutputInterface imageActionScriptOutputInterface, Long frame){

    LogUtil logUtil = LogUtil::getInstance();;
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
logUtil.putF("Start - Processing at: " +imageActionScriptOutputInterface.toString(), "ImageActionScriptOutputProcessor", commonStrings.PROCESS);
    

    ImageTypes imageTypes = imageActionScriptOutputInterface.getImageTypes();;
    

    Vector vector = imageTypes.getVector();;
    

    int32_t size = vector.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    InputImageType imageType = vector.get(index) as InputImageType;;
    

    ImageIOInterface imageIOInterface = InputImageIOInterfaceFactory::getInstance(imageType);;
    
imageIOInterface.save(frame);
    
}

}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: ImageActionScriptOutputProcessor(){
}


};

            

