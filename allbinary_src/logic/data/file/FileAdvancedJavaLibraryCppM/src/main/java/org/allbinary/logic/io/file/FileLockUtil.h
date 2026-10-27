
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/FileLock.h>
class BasicArrayList;
class BasicArrayListD;

class LogUtil;
class AbFileOutputStream;
class StreamUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AbFile;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FileLockUtil
            : public virtual Object
         {

    private: static FileLockUtil* instance_owner();
    private: static FileLockUtil* instance;

    public: static FileLockUtil* getInstance();

    /*protected*/ public: LogUtil* logUtil;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_FILE_FILELOCKUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILELOCKUTIL_H_COMPLETE
        #if __has_include(<java/nio/channels/FileChannel.h>)
#include <java/nio/channels/FileChannel.h>
#endif
#if __has_include(<java/nio/channels/FileLock.h>)
#include <java/nio/channels/FileLock.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbFileOutputStream.h>)
#include <org/allbinary/logic/io/AbFileOutputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/StreamUtil.h>)
#include <org/allbinary/logic/io/StreamUtil.h>
#endif
#if __has_include("org/allbinary/logic/io/file/AbFile.h")
#include "org/allbinary/logic/io/file/AbFile.h"
#endif

        #endif
    
