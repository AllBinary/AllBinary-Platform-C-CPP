
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/nio/channels/FileChannel.h>

      
#include <java/nio/channels/FileLock.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/AbFileOutputStream.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbFile.h"

class FileLockUtil
            : public Object
         {
        

    private: static const instance: FileLockUtil = new FileLockUtil();

    public static FileLockUtil getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor ();

                //@Throws(Exception.constructor)
            
    public Vector getAll(Vector vector, bool isReturnOnFailure);

                //@Throws(Exception.constructor)
            
    public Vector getAllPossible(Vector vector);

                //@Throws(Exception.constructor)
            
    public Vector getAllOrNone(Vector vector);

                //@Throws(Exception.constructor)
            
    public FileLock getLock(AbFile file);

                //@Throws(Exception.constructor)
            
    public FileLock getLock(AbFileOutputStream fileOutputStream);

                //@Throws(Exception.constructor)
            
    public FileLock getLock(FileChannel fileChannel);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILELOCKUTIL_H
