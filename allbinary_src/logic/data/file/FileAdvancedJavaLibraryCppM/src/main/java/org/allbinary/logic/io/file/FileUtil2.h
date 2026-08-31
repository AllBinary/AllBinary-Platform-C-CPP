
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILEUTIL2_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEUTIL2_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/AbFileInputStream.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SimpleFileUtil.h"
#include "AbFile.h"

class FileUtil2
            : public Object
         {
        

    private: static const instance: FileUtil2 = new FileUtil2();

    public static FileUtil2 getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const streamUtil: StreamUtil = StreamUtil.getInstance()!;

private constructor ();

    public BasicArrayList loadFileAsList(AbFile file, int32_t max, std::vector<int8_t> byteArray1);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEUTIL2_H
