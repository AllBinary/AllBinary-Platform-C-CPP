
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
        
#include <java/io/InputStream.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //HTMLForJ2ME
class AbFileSystem
            : public Object
         {
        

    private: static const instance: AbFileSystem = new AbFileSystem();

    public static AbFileSystem getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFileSystem.instance;
    
}


    private: const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    public bool isDirectoryOrFile(string path){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isDirectory(string path){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public std::vector<string> getFilesAsStringArrayForPath(string currentDirPath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil.getInstance()!.getArrayInstance();;
    
}


    public string readAsString(string fileName){

    bytes: std::vector<int8_t> = new Array(1000000);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.readAsString(fileName, bytes);;
    
}


    public string readAsString(string fileName, std::vector<int8_t> bytes){



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

            

