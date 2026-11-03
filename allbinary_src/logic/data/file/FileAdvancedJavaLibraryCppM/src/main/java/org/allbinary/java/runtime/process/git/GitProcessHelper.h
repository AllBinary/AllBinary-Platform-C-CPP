
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2026 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_JAVA_RUNTIME_PROCESS_GIT_GITPROCESSHELPER_H
        #define ORG_ALLBINARY_JAVA_RUNTIME_PROCESS_GIT_GITPROCESSHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/ProcessBuilder.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/IllegalStateException.h"
        
            #include "java/lang/InterruptedException.h"
        
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
class LogUtil;
class AbFile;
class AbFileNativeUtil;
class TrackedStrings;
class StringMaker;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //Do not use this instead just skip target, build, Application paths.
class GitProcessHelper
            : public virtual Object
         {

    private: static GitProcessHelper* instance_owner();
    private: static GitProcessHelper* instance;

    public: static GitProcessHelper* getInstance();

    private: TrackedStrings* trackedStrings;

private: GitProcessHelper();

                //@Throws(IOException.constructor, InterruptedException.constructor)
            
    public: List<std::string>* trackedFiles(std::string rootAsString, std::string pathspec);

                //@Throws(IOException.constructor, InterruptedException.constructor)
            
    public: List<std::string>* trackedFiles(std::string rootAsString, std::string pathspec, std::string suffix);

    public: bool isTracked(AbFile* file);

};

            


        #endif //ORG_ALLBINARY_JAVA_RUNTIME_PROCESS_GIT_GITPROCESSHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_JAVA_RUNTIME_PROCESS_GIT_GITPROCESSHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_JAVA_RUNTIME_PROCESS_GIT_GITPROCESSHELPER_H_COMPLETE
        #if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif
#if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include(<java/nio/charset/StandardCharsets.h>)
#include <java/nio/charset/StandardCharsets.h>
#endif
#if __has_include(<java/util/ArrayList.h>)
#include <java/util/ArrayList.h>
#endif
#if __has_include(<java/util/List.h>)
#include <java/util/List.h>
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
#if __has_include(<org/allbinary/logic/io/file/directory/TrackedStrings.h>)
#include <org/allbinary/logic/io/file/directory/TrackedStrings.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
