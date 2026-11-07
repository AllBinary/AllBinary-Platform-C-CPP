
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_NULLOUTPUTSTREAM_H
        #define ORG_ALLBINARY_LOGIC_IO_NULLOUTPUTSTREAM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullOutputStream: public OutputStream {

    private: static NullOutputStream* NULL_OUTPUT_STREAM_owner();
    public: static NullOutputStream* NULL_OUTPUT_STREAM;


            
    public: NullOutputStream();
        
                //@Throws(IOException.constructor)
            
    public: void write(int32_t b);

                //@Throws(IOException.constructor)
            
    public: void write(std::vector<int8_t> b, int32_t off, int32_t len);

    public: void close();

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_NULLOUTPUTSTREAM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_NULLOUTPUTSTREAM_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_NULLOUTPUTSTREAM_H_COMPLETE
        #if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include(<java/io/OutputStream.h>)
#include <java/io/OutputStream.h>
#endif

        #endif
    
