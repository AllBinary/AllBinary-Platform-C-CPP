
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILEDATA_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/FileData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto FileData::instance_owner() -> FileData* { static std::unique_ptr<FileData> value(new FileData()); return value.get(); }
FileData* FileData::instance = FileData::instance_owner();

    auto FileData::getInstance() -> FileData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileData::instance;
    
}


FileData::FileData() : MAXDOWNLOADABLEFILESIZE(1048576 *20){
}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEDATA_CPP
