
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/FilePathUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/file/FilePathData.h"
//Used to correct user input for paths

FilePathUtil::FilePathUtil(){
}


    auto FilePathUtil::adjust(std::string path) -> std::string{

    AbPathData* abPathData = AbPathData::getInstance();;
    

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

    FilePathData* filePathData = FilePathData::getInstance();;
    

                        if(stringValidationUtil->isEmpty(path))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return filePathData->PATH_START;
    

                                    }
                                
path= JavaString::replace(path, abPathData->SEPARATORCHAR, filePathData->SEPARATORCHAR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return path;
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHUTIL_CPP
