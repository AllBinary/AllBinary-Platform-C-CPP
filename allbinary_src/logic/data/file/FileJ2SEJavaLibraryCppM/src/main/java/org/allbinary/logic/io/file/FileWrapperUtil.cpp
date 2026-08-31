
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/io/File.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbFile.h"

class FileWrapperUtil
            : public Object
         {
        

    public static std::vector<AbFile> wrapFiles(std::vector<any> files){

        try {
            
    abFileArray: std::vector<AbFile> = new Array(files.length);;
    




                        for (
    index: int32_t = files.length -1;index >= 0; index--)
        {
abFileArray[index]= new AbFile(files[index]! as File);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return abFileArray;
    

                //: 
} catch(e) 
            {
PreLogUtil.putSE("Exception Wrapping Files", "FileWrapperUtil", "wrapFiles", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return [];
    
}

}


    public static AbFile wrapFile(File file){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFile(file);
    

                //: 
} catch(e) 
            {
PreLogUtil.putSE("Exception Wrapping File", "FileWrapperUtil", "wrapFile", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFile.NULL_FILE;
    
}

}


};

            

