
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUTPROCESSOR_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUTPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/input/media/image/InputImageIOInterfaceFactory.h>

      
#include <org/allbinary/input/media/image/InputImageType.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/io/ImageIOInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageTypes.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputInterface.h"


ImageActionScriptOutputProcessor::ImageActionScriptOutputProcessor() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto ImageActionScriptOutputProcessor::process(ImageActionScriptOutputInterface* imageActionScriptOutputInterface, int64_t frame) -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->putF(JavaString::valueOf("Start - Processing at: ") +JavaString::valueOf(imageActionScriptOutputInterface->toString()), "ImageActionScriptOutputProcessor", commonStrings->PROCESS);
    

    ImageTypes* imageTypes = imageActionScriptOutputInterface->getImageTypes();;
    

    BasicArrayList* vector = imageTypes->getVector();;
    

    int32_t size = vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    InputImageType* imageType = dynamic_cast<InputImageType*>(vector->get(index));;
    

    ImageIOInterface* imageIOInterface = InputImageIOInterfaceFactory::getInstance(imageType);;
    
imageIOInterface->save(frame);
    
}

}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUTPROCESSOR_CPP
