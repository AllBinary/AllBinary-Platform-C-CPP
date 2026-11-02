
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHDATA_H
        #define ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHDATA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class JsType;
class FilePathData;
class StringUtil;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //Used to correct user input for paths
class AbPathData
            : public virtual Object
         {

    private: static AbPathData* instance_owner();
    private: static AbPathData* instance;

    public: static AbPathData* getInstance();

    public: const std::string EXTENSION_SEP;

    public: const char SEPARATORCHAR = '/';

    public: const std::string SEPARATOR;

private: AbPathData();

    public: int32_t getExtensionIndex(std::string filePath);

    public: std::string getExtensionWithDot(std::string filePath);

    public: std::string getExtension(std::string filePath);

    public: std::string getNameFromPath(std::string path);

    public: std::string removeNameFromPath(std::string path);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHDATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHDATA_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHDATA_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/FilePathData.h>)
#include <org/allbinary/logic/io/file/FilePathData.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif

        #endif
    
