
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FileUnamedUtil
            : public Object
         {
        

    private: static const instance: FileUnamedUtil = new FileUnamedUtil();

    public static FileUnamedUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileUnamedUtil.instance;
    
}


    private: const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    public string process(string string){

    simplifiedString: string = string.toLowerCase()!;;
    
simplifiedString= simplifiedString!.replace(this.commonSeps!.SPACE, this.commonSeps!.UNDERSCORE);
    
simplifiedString= simplifiedString!.replace(this.commonSeps!.DASH, this.commonSeps!.UNDERSCORE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return simplifiedString;
    
}


};

            

