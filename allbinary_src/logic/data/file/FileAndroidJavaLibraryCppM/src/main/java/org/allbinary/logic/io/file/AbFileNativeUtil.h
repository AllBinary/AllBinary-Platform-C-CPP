
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_ABFILENATIVEUTIL_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_ABFILENATIVEUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/io/File.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AbFile;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbFileNativeUtil
            : public virtual Object
         {

    public: static File* get(AbFile* file);


            
    public: AbFileNativeUtil();
        
};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_ABFILENATIVEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_FILE_ABFILENATIVEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_FILE_ABFILENATIVEUTIL_H_COMPLETE
        #if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif
#if __has_include("org/allbinary/logic/io/file/AbFile.h")
#include "org/allbinary/logic/io/file/AbFile.h"
#endif

        #endif
    
