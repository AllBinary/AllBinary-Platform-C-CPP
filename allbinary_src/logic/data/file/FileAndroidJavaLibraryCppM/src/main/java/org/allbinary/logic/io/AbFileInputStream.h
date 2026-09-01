
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_ABFILEINPUTSTREAM_H
        #define ORG_ALLBINARY_LOGIC_IO_ABFILEINPUTSTREAM_H

            #include <vector>
        
#include <java/io/FileInputStream.h>

      
#include <java/io/FileNotFoundException.h>

      
#include <java/io/IOException.h>

      
#include <java/io/InputStream.h>

      
#include <java/nio/channels/FileChannel.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbFileInputStream: public InputStream {

    private: FileInputStream fileInputStream;

public: AbFileInputStream(FileInputStream fileInputStream);

    public: void mark(int32_t readlimit);

    public: bool markSupported();

                //@Throws(IOException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void reset();

                //@Throws(IOException.constructor)
            
    public: int32_t available();

    public: void close();

    public: FileChannel getChannel();

                //@Throws(IOException.constructor)
            
    public: int32_t read();

                //@Throws(IOException.constructor)
            
    public: int32_t read(std::vector<int8_t> b);

                //@Throws(IOException.constructor)
            
    public: int32_t read(std::vector<int8_t> buffer, int32_t offset, int32_t count);

                //@Throws(IOException.constructor)
            
    public: int64_t skip(int64_t n);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_ABFILEINPUTSTREAM_H
