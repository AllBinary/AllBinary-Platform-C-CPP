
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILEUTIL2_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEUTIL2_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/FileUtil2.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/AbFileInputStream.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/file/SimpleFileUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"

auto FileUtil2::instance_owner() -> FileUtil2* { static std::unique_ptr<FileUtil2> value(new FileUtil2()); return value.get(); }
FileUtil2* FileUtil2::instance = FileUtil2::instance_owner();

    auto FileUtil2::getInstance() -> FileUtil2*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return FileUtil2::instance;
    
}


FileUtil2::FileUtil2() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), streamUtil(StreamUtil::getInstance()){
}


    auto FileUtil2::loadFileAsList(AbFile* file, int32_t max, std::vector<int8_t> byteArray1) -> BasicArrayList*{

    AbFileInputStream* inputStream = 
                nullptr
            ;;
    

        try {
            inputStream= new AbFileInputStream(file);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->ADD, &e);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SimpleFileUtil::getInstance()->loadFileAsList(inputStream, max, byteArray1);;
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEUTIL2_CPP
