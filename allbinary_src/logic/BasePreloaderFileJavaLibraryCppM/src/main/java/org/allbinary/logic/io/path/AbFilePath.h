
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_PATH_ABFILEPATH_H
        #define ORG_ALLBINARY_LOGIC_IO_PATH_ABFILEPATH_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/path/AbPath.h"
class AbPathData;
class PathUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbFilePath: public AbPath {

public: AbFilePath(std::string aPath);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_PATH_ABFILEPATH_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_PATH_ABFILEPATH_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_PATH_ABFILEPATH_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/logic/io/path/AbPath.h")
#include "org/allbinary/logic/io/path/AbPath.h"
#endif
#if __has_include("org/allbinary/logic/io/path/AbPathData.h")
#include "org/allbinary/logic/io/path/AbPathData.h"
#endif
#if __has_include("org/allbinary/logic/io/path/PathUtil.h")
#include "org/allbinary/logic/io/path/PathUtil.h"
#endif

        #endif
    
