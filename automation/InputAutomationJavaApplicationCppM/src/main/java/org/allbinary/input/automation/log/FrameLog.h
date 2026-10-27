
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

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
class BasicArrayList;

class ImageOutputData;
class LongUtil;
class StringMaker;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FrameLog
            : public virtual Object
         {

    private: static std::vector<int8_t> frameBytes;

    private: static std::vector<int8_t> info;

    private: static std::vector<int8_t> actions;

    private: int64_t frame;

    private: StringMaker* infoStringBuffer;

    private: StringMaker* actionsStringBuffer;

public: FrameLog(int64_t frame);

    public: void addInfo(std::string infoString);

    public: void addActions(BasicArrayList* vectorOfStrings);

    public: void addAction(std::string action);

                //@Throws(Exception.constructor)
            
    public: void write();

    public: int64_t getFrame();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_LOG_FRAMELOG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_LOG_FRAMELOG_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_LOG_FRAMELOG_H_COMPLETE
        #if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif
#if __has_include(<java/io/FileOutputStream.h>)
#include <java/io/FileOutputStream.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/input/automation/ImageOutputData.h>)
#include <org/allbinary/input/automation/ImageOutputData.h>
#endif
#if __has_include(<org/allbinary/logic/java/number/LongUtil.h>)
#include <org/allbinary/logic/java/number/LongUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif

        #endif
    
