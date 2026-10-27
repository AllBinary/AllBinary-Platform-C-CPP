
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_BUFFEREDIOUTIL_H
        #define ORG_ALLBINARY_LOGIC_IO_BUFFEREDIOUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/BufferedReader.h>
#include <java/io/BufferedWriter.h>
#include <java/io/FileReader.h>
#include <java/io/FileWriter.h>
class AbFile;
class AbFileNativeUtil;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BufferedIOUtil
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: static void copy(AbFile* backupFile, AbFile* backupFileBak);


            
    public: BufferedIOUtil();
        
};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_BUFFEREDIOUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_BUFFEREDIOUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_BUFFEREDIOUTIL_H_COMPLETE
        #if __has_include(<java/io/BufferedReader.h>)
#include <java/io/BufferedReader.h>
#endif
#if __has_include(<java/io/BufferedWriter.h>)
#include <java/io/BufferedWriter.h>
#endif
#if __has_include(<java/io/FileReader.h>)
#include <java/io/FileReader.h>
#endif
#if __has_include(<java/io/FileWriter.h>)
#include <java/io/FileWriter.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFileNativeUtil.h>)
#include <org/allbinary/logic/io/file/AbFileNativeUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif

        #endif
    
