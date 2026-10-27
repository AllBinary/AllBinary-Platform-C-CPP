
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILELOCKUTIL_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILELOCKUTIL_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/nio/channels/FileChannel.h>

      
#include <java/nio/channels/FileLock.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/AbFileOutputStream.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/file/AbFile.h"

class FileLockUtil
            : public Object
         {

    private: static FileLockUtil* instance() { static std::unique_ptr<FileLockUtil> value(new FileLockUtil()); return value.get(); }

    public: static FileLockUtil* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

private: FileLockUtil();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getAll(BasicArrayList* vector, bool isReturnOnFailure);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getAllPossible(BasicArrayList* vector);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getAllOrNone(BasicArrayList* vector);

                //@Throws(Exception.constructor)
            
    public: FileLock* getLock(AbFile* file);

                //@Throws(Exception.constructor)
            
    public: FileLock* getLock(AbFileOutputStream* fileOutputStream);

                //@Throws(Exception.constructor)
            
    public: FileLock* getLock(FileChannel* fileChannel);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILELOCKUTIL_H
