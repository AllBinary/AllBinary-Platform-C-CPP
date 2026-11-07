
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_NULLREADER_H
        #define ORG_ALLBINARY_LOGIC_IO_NULLREADER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/io/IOException.h>
#include <java/io/Reader.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullReader: public Reader {

    private: static NullReader* NULL_READER_owner();
    public: static NullReader* NULL_READER;


            
    public: NullReader();
        
                //@Throws(IOException.constructor)
            
    public: int32_t read();

                //@Throws(IOException.constructor)
            
    public: int32_t read(std::vector<char> cbuf, int32_t off, int32_t len);

                //@Throws(IOException.constructor)
            
    public: bool ready();

                //@Throws(IOException.constructor)
            
    public: int64_t skip(int64_t n);

    public: void close();

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_NULLREADER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_NULLREADER_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_NULLREADER_H_COMPLETE
        #if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include(<java/io/Reader.h>)
#include <java/io/Reader.h>
#endif

        #endif
    
