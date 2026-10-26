
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILEWRAPPERUTIL_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEWRAPPERUTIL_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/File.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbFile.h"

class FileWrapperUtil
            : public Object
         {

    public: static std::vector<AbFile> wrapFiles(std::vector<Object*> files);

    public: static AbFile wrapFile(File file);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEWRAPPERUTIL_H
