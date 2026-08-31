
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2026 AllBinary 
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/System.h"
        
#include <java/io/File.h>

      
#include <java/io/FileInputStream.h>

      
#include <java/io/InputStream.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //J2SEForJ2ME
class AbFileSystem
            : public Object
         {
        

    private: static const instance: AbFileSystem = new AbFileSystem();

    public static AbFileSystem getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFileSystem.instance;
    
}


                //@Throws(Exception.constructor)
            
    public static main(std::vector<string> args){

    isDirectory: bool = AbFileSystem.getInstance()!.isDirectory("c:")!;;
    
console.log("isDirectory: " +isDirectory);
    
}


    private: const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    public bool isDirectoryOrFile(string path){

    file: File = new File(path);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return file.isDirectory() || file.isFile();
    
}


    public bool isDirectory(string path){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new File(path).isDirectory();;
    
}


    public std::vector<string> getFilesAsStringArrayForPath(string currentDirPath){

    file: File = new File(currentDirPath);;
    

                        if(file.exists())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return file.list();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil.getInstance()!.getArrayInstance();;
    

                        }
                            
}


    public string readAsString(string fileName){

    bytes: std::vector<int8_t> = new Array(1000000);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.readAsString(fileName, bytes);;
    
}


    public string readAsString(string fileName, std::vector<int8_t> bytes){

    closeable: any = NullUtil.getInstance()!.NULL_OBJECT;;
    

        try {
            
    idFile: InputStream = new FileInputStream(fileName);;
    
closeable= idFile;
    

    size: int32_t = idFile!.read(bytes)!;;
    

                        if(size > 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return String.fromCharCode(...bytes);
    

                                    }
                                

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "readAsString", e);
    
}

         finally {
            this.close(closeable);
    

         }
        



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil.getInstance()!.EMPTY_STRING;
    
}


    public bool close(any = {} closeable){

        try {
            
                        if(closeable != 
                                    null
                                )
                        
                                    {
                                    
    inputStream: InputStream = (closeable as InputStream);;
    
inputStream!.close();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.CLOSE, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


};

            

