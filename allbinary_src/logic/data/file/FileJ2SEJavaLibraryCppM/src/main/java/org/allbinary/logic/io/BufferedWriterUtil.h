
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_BUFFEREDWRITERUTIL_H
        #define ORG_ALLBINARY_LOGIC_IO_BUFFEREDWRITERUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/BufferedWriter.h>
#include <java/io/FileWriter.h>
class LogUtil;
class AbFile;
class AbFileNativeUtil;
class AbPathData;
class StringMaker;
class CommonLabels;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BufferedWriterUtil
            : public virtual Object
         {

    private: static BufferedWriterUtil* instance_owner();
    private: static BufferedWriterUtil* instance;

    public: static BufferedWriterUtil* getInstance();


            
    public: BufferedWriterUtil();
        
    private: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: CommonLabels* commonLabels;

    private: const std::string REMOVING_OLD = "Remove old for overwriting: ";

                //@Throws(Exception.constructor)
            
    public: void overwrite(std::string path, std::string data);

                //@Throws(Exception.constructor)
            
    public: void overwrite(AbFile* abFile, std::string data);

                //@Throws(Exception.constructor)
            
    public: void write(AbFile* abFile, std::string data);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_BUFFEREDWRITERUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_BUFFEREDWRITERUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_BUFFEREDWRITERUTIL_H_COMPLETE
        #if __has_include(<java/io/BufferedWriter.h>)
#include <java/io/BufferedWriter.h>
#endif
#if __has_include(<java/io/FileWriter.h>)
#include <java/io/FileWriter.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFileNativeUtil.h>)
#include <org/allbinary/logic/io/file/AbFileNativeUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
