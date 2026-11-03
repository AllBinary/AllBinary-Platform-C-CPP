
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_FILEEXTENSIONDATA_CPP
        #define ORG_ALLBINARY_LOGIC_JAVA_FILEEXTENSIONDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/java/FileExtensionData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto FileExtensionData::instance_owner() -> FileExtensionData* { static std::unique_ptr<FileExtensionData> value(new FileExtensionData()); return value.get(); }
FileExtensionData* FileExtensionData::instance = FileExtensionData::instance_owner();

    auto FileExtensionData::getInstance() -> FileExtensionData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return FileExtensionData::instance;
    
}


FileExtensionData::FileExtensionData(){
}




        #endif //ORG_ALLBINARY_LOGIC_JAVA_FILEEXTENSIONDATA_CPP
