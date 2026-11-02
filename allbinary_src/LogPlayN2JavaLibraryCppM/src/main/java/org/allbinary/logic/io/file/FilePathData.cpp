
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHDATA_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/FilePathData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto FilePathData::instance_owner() -> FilePathData* { static std::unique_ptr<FilePathData> value(new FilePathData()); return value.get(); }
FilePathData* FilePathData::instance = FilePathData::instance_owner();

    auto FilePathData::getInstance() -> FilePathData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FilePathData::instance;
    
}


FilePathData::FilePathData(){
}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHDATA_CPP
