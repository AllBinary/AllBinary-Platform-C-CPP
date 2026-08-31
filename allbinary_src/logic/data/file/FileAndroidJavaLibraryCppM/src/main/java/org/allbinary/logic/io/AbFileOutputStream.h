
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_ABFILEOUTPUTSTREAM_H
        #define ORG_ALLBINARY_LOGIC_IO_ABFILEOUTPUTSTREAM_H

#include <java/io/FileNotFoundException.h>

      
#include <java/io/FileOutputStream.h>

      
#include <java/io/IOException.h>

      
#include <java/io/OutputStream.h>

      
#include <java/nio/channels/FileChannel.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/AbFileNativeUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbFileOutputStream: public OutputStream {
        

                //@Throws(FileNotFoundException.constructor)
            
    public static AbFileOutputStream createFromAbFile(AbFile file);

                //@Throws(FileNotFoundException.constructor)
            
    public static AbFileOutputStream createFromAbFileAppend(AbFile file, bool append);

                //@Throws(FileNotFoundException.constructor)
            
    public static AbFileOutputStream createFromFilePath(string name);

                //@Throws(FileNotFoundException.constructor)
            
    public static AbFileOutputStream createFromFilePathAppend(string name, bool append);

    private: fileOutputStream: FileOutputStream;

public constructor (FileOutputStream fileOutputStream);

    public close();

    public FileChannel getChannel();

                //@Throws(IOException.constructor)
            
    public write(std::vector<int8_t> buffer);

                //@Throws(IOException.constructor)
            
    public write(std::vector<int8_t> buffer, int32_t offset, int32_t count);

                //@Throws(IOException.constructor)
            
    public write(int32_t b);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_ABFILEOUTPUTSTREAM_H
