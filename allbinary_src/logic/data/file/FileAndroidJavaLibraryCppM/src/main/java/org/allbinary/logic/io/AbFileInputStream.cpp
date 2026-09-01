
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
        



            #include <vector>
        
#include <java/io/FileInputStream.h>

      
#include <java/io/FileNotFoundException.h>

      
#include <java/io/IOException.h>

      
#include <java/io/InputStream.h>

      
#include <java/nio/channels/FileChannel.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbFileInputStream: public InputStream {

    private: FileInputStream fileInputStream;

public: AbFileInputStream(FileInputStream fileInputStream){
this->fileInputStream= fileInputStream;
    
}


    public: void mark(int32_t readlimit){
this->fileInputStream.mark(readlimit);
    
}


    public: bool markSupported(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->fileInputStream.markSupported();;
    
}


                //@Throws(IOException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void reset(){
this->fileInputStream.reset();
    
}


                //@Throws(IOException.constructor)
            
    public: int32_t available(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->fileInputStream.available();;
    
}


    public: void close(){
this->fileInputStream.close();
    
}


    public: FileChannel getChannel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->fileInputStream.getChannel();;
    
}


                //@Throws(IOException.constructor)
            
    public: int32_t read(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->fileInputStream.read();;
    
}


                //@Throws(IOException.constructor)
            
    public: int32_t read(std::vector<int8_t> b){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->fileInputStream.read(b);;
    
}


                //@Throws(IOException.constructor)
            
    public: int32_t read(std::vector<int8_t> buffer, int32_t offset, int32_t count){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->fileInputStream.read(buffer, offset, count);;
    
}


                //@Throws(IOException.constructor)
            
    public: int64_t skip(int64_t n){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->fileInputStream.skip(n);;
    
}


};

            

