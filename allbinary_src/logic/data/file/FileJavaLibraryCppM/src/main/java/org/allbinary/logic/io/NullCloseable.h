
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_NULLCLOSEABLE_H
        #define ORG_ALLBINARY_LOGIC_IO_NULLCLOSEABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/io/Closeable.h>
#include <java/io/IOException.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullCloseable
            : public virtual Object
        , public virtual Closeable {

    private: static NullCloseable* NULL_CLOSEABLE_owner();
    public: static NullCloseable* NULL_CLOSEABLE;


            
    public: NullCloseable();
        
    public: void close();

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_NULLCLOSEABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_NULLCLOSEABLE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_NULLCLOSEABLE_H_COMPLETE
        #if __has_include(<java/io/Closeable.h>)
#include <java/io/Closeable.h>
#endif
#if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif

        #endif
    
