
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_PATH_ABPATH_H
        #define ORG_ALLBINARY_LOGIC_IO_PATH_ABPATH_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
class FilePathData;
class FilePathUtil;
class StringMaker;
class StringUtil;
class StringValidationUtil;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AbPathData;
class PathUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbPath
            : public virtual Object
         {

    public: static AbPath* createAbPath();

    private: static inline const std::string NETWORK_SEP = ":/";

    private: CommonSeps* commonSeps;

    private: AbPathData* abPathData;

    private: PathUtil* abPathUtil;

    private: const std::string EMPTY_STRING;

    /*protected*/ public: std::string schema;

    private: std::string path;

    /*protected*/ public: std::string nameP;

    private: bool hasSchemaP = false;

    private: int32_t numberOfSeps = 0;

public: AbPath(std::string aPath, std::string name);

    private: void init();

    /*protected*/ public: std::string getSchema(std::string aPath);

    public: bool hasSchema();

                //@Throws(Exception.constructor)
            
    public: std::string getPathFromPath(std::string aPath);

    public: void setName(std::string name);

    public: std::string getName();

    public: std::string toString();

    public: std::string toFileSystemString();

    public: std::string getPath();

    /*protected*/ public: void setPath(std::string path);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_PATH_ABPATH_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_PATH_ABPATH_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_PATH_ABPATH_H_COMPLETE
        #if __has_include(<org/allbinary/logic/io/file/FilePathData.h>)
#include <org/allbinary/logic/io/file/FilePathData.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/FilePathUtil.h>)
#include <org/allbinary/logic/io/file/FilePathUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/logic/io/path/AbPathData.h")
#include "org/allbinary/logic/io/path/AbPathData.h"
#endif
#if __has_include("org/allbinary/logic/io/path/PathUtil.h")
#include "org/allbinary/logic/io/path/PathUtil.h"
#endif

        #endif
    
