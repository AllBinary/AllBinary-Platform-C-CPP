
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_SMALLDELETE_H
        #define ORG_ALLBINARY_LOGIC_IO_SMALLDELETE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/DataOutputStream.h>
#include <java/io/FileOutputStream.h>
class LogUtil;
class AbFileSystem;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SmallDelete
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: std::string fileName;

    private: std::string string;

public: SmallDelete(std::string fileName);

    public: bool deleteAtStart(std::string start, std::string end);

    public: bool deleteBetween(std::string start, std::string end, std::string newText);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_SMALLDELETE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_SMALLDELETE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_SMALLDELETE_H_COMPLETE
        #if __has_include(<java/io/DataOutputStream.h>)
#include <java/io/DataOutputStream.h>
#endif
#if __has_include(<java/io/FileOutputStream.h>)
#include <java/io/FileOutputStream.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFileSystem.h>)
#include <org/allbinary/logic/io/file/AbFileSystem.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
