
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHDATA_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHDATA_H

            #include "../../../../../java/lang/Object.h"
        
#include <java/io/File.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FilePathData
            : public Object
         {
        

    private: static const instance: FilePathData = new FilePathData();

    public static FilePathData getInstance();

    public const SEPARATORCHAR: char = File.separatorChar;

    public PATH_START: string = File.separator;

private constructor ();

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHDATA_H
