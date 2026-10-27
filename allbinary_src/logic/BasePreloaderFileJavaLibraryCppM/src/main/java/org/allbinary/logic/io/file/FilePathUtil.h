
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHUTIL_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class AbPathData;
class StringValidationUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class FilePathData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //Used to correct user input for paths
class FilePathUtil
            : public virtual Object
         {

    public: static std::string adjust(std::string path);

private: FilePathUtil();

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include("org/allbinary/logic/io/file/FilePathData.h")
#include "org/allbinary/logic/io/file/FilePathData.h"
#endif

        #endif
    
