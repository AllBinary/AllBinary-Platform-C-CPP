
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
        



            #include <vector>
        
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
        
class FrameLog
            : public Object
         {

    private: static std::vector<int8_t> frameBytes = "Frame: ".getBytes();

    private: static std::vector<int8_t> info = "Info: \n".getBytes();

    private: static std::vector<int8_t> actions = "Actions: \n".getBytes();

    private: Long frame;

    private: StringMaker infoStringBuffer = StringMaker();

    private: StringMaker actionsStringBuffer = StringMaker();

public: FrameLog(Long frame){
this->frame= frame;
    
}


    public: void addInfo(std::string infoString){
this->infoStringBuffer.append(infoString);
    
}


    public: void addActions(BasicArrayList vectorOfStrings){

    int32_t size = vectorOfStrings.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->addAction(vectorOfStrings.get(index));
    
}

}


    public: void addAction(std::string action){
this->actionsStringBuffer.append(action);
    
this->actionsStringBuffer.append(CommonSeps::getInstance().NEW_LINE);
    
}


                //@Throws(Exception.constructor)
            
    public: void write(){

    StringMaker filePathStringBuffer = StringMaker();;
    
filePathStringBuffer.append(ImageOutputData::SAVE_PATH);
    
filePathStringBuffer.append(LongUtil::fillIn(this->frame.toString()));
    
filePathStringBuffer.append(".txt");
    

    std::string filePath = filePathStringBuffer.toString();;
    

    FileOutputStream fileOutputStream = FileOutputStream(File(filePath));;
    
fileOutputStream.write(FrameLog::frameBytes);
    
fileOutputStream.write(getFrame().toString().getBytes());
    
fileOutputStream.write('\n');
    
fileOutputStream.write(FrameLog::info);
    
fileOutputStream.write(this->infoStringBuffer.toString().getBytes());
    
fileOutputStream.write('\n');
    
fileOutputStream.write(FrameLog::actions);
    
fileOutputStream.write(this->actionsStringBuffer.toString().getBytes());
    
fileOutputStream.close();
    
}


    public: Long getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->frame;
    
}


};

            

