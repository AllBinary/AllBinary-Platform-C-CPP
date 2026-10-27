
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/IllegalStateException.h"
        
            #include "java/lang/InterruptedException.h"
        
#include <java/io/File.h>

      
#include <java/io/IOException.h>

      
#include <java/nio/charset/StandardCharsets.h>

      
#include <java/util/ArrayList.h>

      
#include <java/util/List.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/AbFileNativeUtil.h>

      
#include <org/allbinary/logic/io/file/directory/TrackedStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/java/runtime/process/git/ProcessBuilder.h"
#include "org/allbinary/java/runtime/process/git/Process.h"
//Do not use this instead just skip target, build, Application paths.
class GitProcessHelper
            : public Object
         {

    private: static GitProcessHelper* instance() { static std::unique_ptr<GitProcessHelper> value(new GitProcessHelper()); return value.get(); }

    public: static GitProcessHelper* getInstance();

    private: TrackedStrings* trackedStrings = TrackedStrings::getInstance();

private: GitProcessHelper();

                //@Throws(IOException.constructor, InterruptedException.constructor)
            
    public: List<std::string>* trackedFiles(std::string rootAsString, std::string pathspec);

                //@Throws(IOException.constructor, InterruptedException.constructor)
            
    public: List<std::string>* trackedFiles(std::string rootAsString, std::string pathspec, std::string suffix);

    public: bool isTracked(AbFile* file);

};

            


        #endif //ORG_ALLBINARY_JAVA_RUNTIME_PROCESS_GIT_GITPROCESSHELPER_H
