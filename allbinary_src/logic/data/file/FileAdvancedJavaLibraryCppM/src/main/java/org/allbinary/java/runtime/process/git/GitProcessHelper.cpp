
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
        



            #include <vector>
        
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
        #include "ProcessBuilder.h"
#include "Process.h"
//Do not use this instead just skip target, build, Application paths.
class GitProcessHelper
            : public Object
         {

    private: static GitProcessHelper instance() { return GitProcessHelper(); }

    public: static GitProcessHelper getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GitProcessHelper::instance();
    
}


    private: const TrackedStrings trackedStrings = TrackedStrings::getInstance();

private: GitProcessHelper(){

    LogUtil logUtil = LogUtil::getInstance();;
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

    std::string THIS_IS_SLOW = "This is slow consider path exclusion instead";;
    
logUtil.putF(THIS_IS_SLOW, this, commonStrings.CONSTRUCTOR);
    
}


                //@Throws(IOException.constructor, InterruptedException.constructor)
            
    public: List<std::string> trackedFiles(std::string rootAsString, std::string pathspec){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->trackedFiles(rootAsString, pathspec, ".java");;
    
}


                //@Throws(IOException.constructor, InterruptedException.constructor)
            
    public: List<std::string> trackedFiles(std::string rootAsString, std::string pathspec, std::string suffix){

    Process process = ProcessBuilder(this->trackedStrings.GIT_COMMAND, this->trackedStrings.CHANGE_DIRECTORY_OPTION, rootAsString, this->trackedStrings.LIST_FILES_COMMAND, this->trackedStrings.SEP_BY_NULL_CHAR_INSTEAD_OF_NEW_LINE, this->trackedStrings.PATHSPEC_SEPARATOR, pathspec).redirectError(ProcessBuilder::Redirect.INHERIT).start();;
    

    std::vector<int8_t> output = process.getInputStream().readAllBytes();;
    

    int32_t exitCode = process.waitFor();;
    

                        if(exitCode != 0)
                        
                                    {
                                    


                            throw IllegalStateException(StringMaker().append("git ls-files failed for ").append(rootAsString).append(" with exit code ").appendint(exitCode).toString());
                    

                                    }
                                

    List<std::string> files = ArrayList<>();;
    

    int32_t start = 0;;
    

    std::string relativePath;;
    




                        for (
    int32_t index = 0;index < output.size(); index++)
        {

                        if(output[index] == 0)
                        
                                    {
                                    relativePath= String.fromCharCode(...output);
    

                        if(relativePath.endsWith(suffix))
                        
                                    {
                                    files.add(relativePath);
    

                                    }
                                
start= index +1;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return files;
    
}


    public: bool isTracked(AbFile file){

        try {
            
    File nativeFile = AbFileNativeUtil::get(file);;
    

    File parentFile = nativeFile.getParentFile();;
    

    Process process = ProcessBuilder(this->trackedStrings.GIT_COMMAND, this->trackedStrings.CHANGE_DIRECTORY_OPTION, parentFile.getPath(), this->trackedStrings.LIST_FILES_COMMAND, this->trackedStrings.ERROR_UNMATCH_OPTION, this->trackedStrings.PATHSPEC_SEPARATOR, nativeFile.getName()).redirectErrorStream(true).start();;
    
process.getInputStream().readAllBytes();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return process.waitFor() == 0;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


};

            

