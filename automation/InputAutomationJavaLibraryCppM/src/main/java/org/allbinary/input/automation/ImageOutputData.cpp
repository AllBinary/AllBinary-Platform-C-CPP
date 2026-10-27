
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_IMAGEOUTPUTDATA_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_IMAGEOUTPUTDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/ImageOutputData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ImageOutputData::ImageOutputData(){
}

const std::string ImageOutputData::SAVE_PATH = (new StringMaker())->append(System.getProperty("user.dir"))->appendchar(FilePathData::getInstance()->SEPARATORCHAR)->append("saves")->appendchar(FilePathData::getInstance()->SEPARATORCHAR)->toString();



        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_IMAGEOUTPUTDATA_CPP
