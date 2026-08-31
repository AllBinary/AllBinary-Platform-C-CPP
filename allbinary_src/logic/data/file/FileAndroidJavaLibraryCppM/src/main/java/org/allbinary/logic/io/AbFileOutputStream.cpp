
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
            
    public static AbFileOutputStream createFromAbFile(AbFile file){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFileOutputStream(new FileOutputStream(AbFileNativeUtil.get(file)));
    
}


                //@Throws(FileNotFoundException.constructor)
            
    public static AbFileOutputStream createFromAbFileAppend(AbFile file, bool append){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFileOutputStream(new FileOutputStream(file.getPath()));
    
}


                //@Throws(FileNotFoundException.constructor)
            
    public static AbFileOutputStream createFromFilePath(string name){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFileOutputStream(new FileOutputStream(name));
    
}


                //@Throws(FileNotFoundException.constructor)
            
    public static AbFileOutputStream createFromFilePathAppend(string name, bool append){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFileOutputStream(new FileOutputStream(name));
    
}


    private: fileOutputStream: FileOutputStream;

public constructor (FileOutputStream fileOutputStream){

            super();
        this.fileOutputStream= fileOutputStream;
    
}


    public close(){
this.fileOutputStream!.close();
    
}


    public FileChannel getChannel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.fileOutputStream!.getChannel();;
    
}


                //@Throws(IOException.constructor)
            
    public write(std::vector<int8_t> buffer){
this.fileOutputStream!.write(buffer);
    
}


                //@Throws(IOException.constructor)
            
    public write(std::vector<int8_t> buffer, int32_t offset, int32_t count){
this.fileOutputStream!.write(buffer, offset, count);
    
}


                //@Throws(IOException.constructor)
            
    public write(int32_t b){
this.fileOutputStream!.write(b);
    
}


};

            

