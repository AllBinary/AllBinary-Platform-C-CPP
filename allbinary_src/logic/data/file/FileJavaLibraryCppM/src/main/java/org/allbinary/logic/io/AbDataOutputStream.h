
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_ABDATAOUTPUTSTREAM_H
        #define ORG_ALLBINARY_LOGIC_IO_ABDATAOUTPUTSTREAM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/io/DataOutputStream.h>
#include <java/io/OutputStream.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbDataOutputStream: public DataOutputStream {

public: AbDataOutputStream(OutputStream* out);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_ABDATAOUTPUTSTREAM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_ABDATAOUTPUTSTREAM_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_ABDATAOUTPUTSTREAM_H_COMPLETE
        #if __has_include(<java/io/DataOutputStream.h>)
#include <java/io/DataOutputStream.h>
#endif
#if __has_include(<java/io/OutputStream.h>)
#include <java/io/OutputStream.h>
#endif

        #endif
    
