
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILEDATA_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEDATA_H

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FileData
            : public Object
         {
        

    private: static const instance: FileData = new FileData();

    public static FileData getInstance();

private constructor ();

    public const NAME: string = "FILE_NAME";

    public const ISFILE: string = "FILE_ISFILE";

    public const ISDIRECTORY: string = "FILE_ISDIRECTORY";

    public const ISHIDDEN: string = "FILE_ISHIDDEN";

    public const ISABSOLUTE: string = "FILE_ISABSOLUTE";

    public const ROOT_NAME: string = "FILE_ROOT_NAME";

    public const PATH: string = "FILE_PATH";

    public const ABSOLUTE_PATH: string = "FILE_ABSOLUTE_PATH";

    public const CANONICAL_PATH: string = "FILE_CANONICAL_PATH";

    public const PARENT: string = "FILE_PARENT";

    public const MINLEN: int32_t = 1;

    public const MAXLEN: int32_t = 120;

    public const MAXIMAGEFILESIZE: int32_t = 1048576;

    public const MINIMAGEFILESIZE: int32_t = 32;

    public const MAXDOWNLOADABLEFILESIZE: int32_t = 1048576 *20;

    public const MINDOWNLOADABLEFILESIZE: int32_t = 1;

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEDATA_H
