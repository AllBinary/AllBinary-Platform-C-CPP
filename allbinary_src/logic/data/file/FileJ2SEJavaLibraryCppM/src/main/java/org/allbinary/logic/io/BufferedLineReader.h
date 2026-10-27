
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_BUFFEREDLINEREADER_H
        #define ORG_ALLBINARY_LOGIC_IO_BUFFEREDLINEREADER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/BufferedReader.h>
#include <java/io/FileReader.h>
class AbFile;
class AbFileNativeUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BufferedLineReader
            : public virtual Object
         {

    private: BufferedReader* tmpIn;

public: BufferedLineReader(AbFile* file);

    public: void readUpToLines(int64_t readAheadIndex);

                //@Throws(Exception.constructor)
            
    public: std::string readLine();

    public: int64_t getSize();

    public: int32_t getCurrent();

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_BUFFEREDLINEREADER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_BUFFEREDLINEREADER_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_BUFFEREDLINEREADER_H_COMPLETE
        #if __has_include(<java/io/BufferedReader.h>)
#include <java/io/BufferedReader.h>
#endif
#if __has_include(<java/io/FileReader.h>)
#include <java/io/FileReader.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFileNativeUtil.h>)
#include <org/allbinary/logic/io/file/AbFileNativeUtil.h>
#endif

        #endif
    
