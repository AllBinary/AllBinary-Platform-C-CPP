
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_LINEREADER_H
        #define ORG_ALLBINARY_LOGIC_IO_LINEREADER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/DataInputStream.h>
class LogUtil;
class CommonSeps;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AbFileInputStream;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LineReader
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: std::string fileName;

    private: std::string string;

    private: int32_t index = 0;

    private: AbFileInputStream* idFile;

    private: DataInputStream* idData;

public: LineReader(std::string fileName);

    public: bool hasNext();

                //@Throws(Exception.constructor)
            
    public: std::string next();

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_LINEREADER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_LINEREADER_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_LINEREADER_H_COMPLETE
        #if __has_include(<java/io/DataInputStream.h>)
#include <java/io/DataInputStream.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/io/AbFileInputStream.h")
#include "org/allbinary/logic/io/AbFileInputStream.h"
#endif

        #endif
    
