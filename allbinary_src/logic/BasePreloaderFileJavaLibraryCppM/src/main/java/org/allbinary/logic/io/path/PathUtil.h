
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_PATH_PATHUTIL_H
        #define ORG_ALLBINARY_LOGIC_IO_PATH_PATHUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class FilePathData;
class StringUtil;
class StringValidationUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AbPathData;
class AbFilePath;
class AbPath;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //Used to correct user input for paths
class PathUtil
            : public virtual Object
         {

    private: static PathUtil* instance_owner();
    private: static PathUtil* instance;

    public: static PathUtil* getInstance();

    private: AbPathData* abPathData;

    private: FilePathData* filePathData;

private: PathUtil();

    public: std::string getExtensionWithAbFilePath(AbFilePath* abFilePath);

    public: std::string getExtensionWithAbPath(AbPath* abPath);

                //@Throws(Exception.constructor)
            
    public: std::string getWithoutExtensionWithAbFilePath(AbFilePath* abFilePath);

                //@Throws(Exception.constructor)
            
    public: std::string getWithoutExtensionWithAbPath(AbPath* abPath);

                //@Throws(Exception.constructor)
            
    public: std::string getWithoutExtension(std::string filePath);

    public: bool isValid(std::string path);

    private: bool isValidStart(std::string path);

    private: bool isValidEnd(std::string path);

    public: std::string adjustStart(std::string path);

    public: std::string adjustEnd(std::string path);

    public: std::string adjust(std::string path);

                //@Throws(Exception.constructor)
            
    public: AbPath* removeNameFromPath(std::string path);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_PATH_PATHUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_PATH_PATHUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_PATH_PATHUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/io/file/FilePathData.h>)
#include <org/allbinary/logic/io/file/FilePathData.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include("org/allbinary/logic/io/path/AbPathData.h")
#include "org/allbinary/logic/io/path/AbPathData.h"
#endif
#if __has_include("org/allbinary/logic/io/path/AbFilePath.h")
#include "org/allbinary/logic/io/path/AbFilePath.h"
#endif
#if __has_include("org/allbinary/logic/io/path/AbPath.h")
#include "org/allbinary/logic/io/path/AbPath.h"
#endif

        #endif
    
