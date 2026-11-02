
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILEWRAPPERUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEWRAPPERUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/FileWrapperUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/File.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/file/AbFile.h"


FileWrapperUtil::FileWrapperUtil() {
        }
        
    auto FileWrapperUtil::wrapFiles(std::vector<Object*> files) -> std::vector<AbFile*>{

        try {
            
    std::vector<AbFile*> abFileArray = std::vector<AbFile*>(files.size());;
    




                        for (
    int32_t index = files.size() -1;index >= 0; index--)
        {
abFileArray[index]= new AbFile(dynamic_cast<File*>(files[index]));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return abFileArray;
    

                //: 
} catch(Exception& e) 
            {
PreLogUtil::putSE("Exception Wrapping Files", "FileWrapperUtil", "wrapFiles", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return {};
    
}

}


    auto FileWrapperUtil::wrapFile(File* file) -> AbFile*{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFile(file);
    

                //: 
} catch(Exception& e) 
            {
PreLogUtil::putSE("Exception Wrapping File", "FileWrapperUtil", "wrapFile", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFile::NULL_FILE;
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEWRAPPERUTIL_CPP
