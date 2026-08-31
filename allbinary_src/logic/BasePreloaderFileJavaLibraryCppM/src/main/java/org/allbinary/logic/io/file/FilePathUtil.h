
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHUTIL_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHUTIL_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "FilePathData.h"
//Used to correct user input for paths
class FilePathUtil
            : public Object
         {
        

    public static string adjust(string path);

private constructor ();

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHUTIL_H
