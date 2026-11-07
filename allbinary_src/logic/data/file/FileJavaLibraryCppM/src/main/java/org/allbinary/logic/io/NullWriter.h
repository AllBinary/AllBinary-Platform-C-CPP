
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_NULLWRITER_H
        #define ORG_ALLBINARY_LOGIC_IO_NULLWRITER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/io/IOException.h>
#include <java/io/Writer.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullWriter: public Writer {

    private: static NullWriter* NULL_WRITER_owner();
    public: static NullWriter* NULL_WRITER;


            
    public: NullWriter();
        
                //@Throws(IOException.constructor)
            
    public: void write(int32_t c);

                //@Throws(IOException.constructor)
            
    public: void write(std::vector<char> cbuf, int32_t off, int32_t len);

                //@Throws(IOException.constructor)
            
    public: void write(std::string str);

                //@Throws(IOException.constructor)
            
    public: void write(std::string str, int32_t off, int32_t len);

                //@Throws(IOException.constructor)
            
    public: void flush();

    public: void close();

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_NULLWRITER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_NULLWRITER_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_NULLWRITER_H_COMPLETE
        #if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include(<java/io/Writer.h>)
#include <java/io/Writer.h>
#endif

        #endif
    
