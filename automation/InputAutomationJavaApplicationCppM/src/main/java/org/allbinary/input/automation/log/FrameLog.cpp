
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_LOG_FRAMELOG_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_LOG_FRAMELOG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/log/FrameLog.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/io/File.h>

      
#include <java/io/FileOutputStream.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/input/automation/ImageOutputData.h>

      
#include <org/allbinary/logic/java/number/LongUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
std::vector<int8_t> FrameLog::frameBytes = ("Frame: ").getBytes();
std::vector<int8_t> FrameLog::info = ("Info: \n").getBytes();
std::vector<int8_t> FrameLog::actions = ("Actions: \n").getBytes();

FrameLog::FrameLog(int64_t frame) : infoStringBuffer(new StringMaker()), actionsStringBuffer(new StringMaker()){
this->frame= frame;
    
}


    auto FrameLog::addInfo(std::string infoString) -> void{
this->infoStringBuffer->append(infoString);
    
}


    auto FrameLog::addActions(BasicArrayList* vectorOfStrings) -> void{

    int32_t size = vectorOfStrings->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->addAction(JavaBoxes::unbox<std::string>(vectorOfStrings->get(index)));
    
}

}


    auto FrameLog::addAction(std::string action) -> void{
this->actionsStringBuffer->append(action);
    
this->actionsStringBuffer->append(CommonSeps::getInstance()->NEW_LINE);
    
}


                //@Throws(Exception.constructor)
            
    auto FrameLog::write() -> void{

    StringMaker* filePathStringBuffer = new StringMaker();;
    
filePathStringBuffer->append(ImageOutputData::SAVE_PATH);
    
filePathStringBuffer->append(LongUtil::fillIn(JavaString::valueOf(this->frame)));
    
filePathStringBuffer->append(".txt");
    

    std::string filePath = filePathStringBuffer->toString();;
    

    FileOutputStream* fileOutputStream = new FileOutputStream(new File(filePath));;
    
fileOutputStream->write(FrameLog::frameBytes);
    
fileOutputStream->write(JavaString::getBytes(getFrame().toString()));
    
fileOutputStream->write('\n');
    
fileOutputStream->write(FrameLog::info);
    
fileOutputStream->write(JavaString::getBytes(this->infoStringBuffer->toString()));
    
fileOutputStream->write('\n');
    
fileOutputStream->write(FrameLog::actions);
    
fileOutputStream->write(JavaString::getBytes(this->actionsStringBuffer->toString()));
    
fileOutputStream->close();
    
}


    auto FrameLog::getFrame() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->frame;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_LOG_FRAMELOG_CPP
