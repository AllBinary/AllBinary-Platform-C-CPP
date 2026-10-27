
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_LOG_FRAMELOG_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_LOG_FRAMELOG_H

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
        
class FrameLog
            : public Object
         {

    private: static inline std::vector<int8_t> frameBytes = ("Frame: ").getBytes();

    private: static inline std::vector<int8_t> info = ("Info: \n").getBytes();

    private: static inline std::vector<int8_t> actions = ("Actions: \n").getBytes();

    private: int64_t frame;

    private: StringMaker* infoStringBuffer = new StringMaker();

    private: StringMaker* actionsStringBuffer = new StringMaker();

public: FrameLog(int64_t frame);

    public: void addInfo(std::string infoString);

    public: void addActions(BasicArrayList* vectorOfStrings);

    public: void addAction(std::string action);

                //@Throws(Exception.constructor)
            
    public: void write();

    public: int64_t getFrame();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_LOG_FRAMELOG_H
