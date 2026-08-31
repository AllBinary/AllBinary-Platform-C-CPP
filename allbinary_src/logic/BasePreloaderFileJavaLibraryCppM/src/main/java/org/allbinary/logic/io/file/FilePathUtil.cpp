
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
        
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "FilePathData.h"
//Used to correct user input for paths
class FilePathUtil
            : public Object
         {
        

    public static string adjust(string path){

    abPathData: AbPathData = AbPathData.getInstance()!;;
    

    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    

    filePathData: FilePathData = FilePathData.getInstance()!;;
    

                        if(stringValidationUtil!.isEmpty(path))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return filePathData!.PATH_START;
    

                                    }
                                
path= path.replace(abPathData!.SEPARATORCHAR, filePathData!.SEPARATORCHAR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return path;
    
}


private constructor (){

            super();
        }


};

            

