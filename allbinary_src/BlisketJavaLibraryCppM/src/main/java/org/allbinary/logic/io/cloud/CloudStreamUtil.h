
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_CLOUDSTREAMUTIL_H
        #define ORG_ALLBINARY_LOGIC_IO_CLOUDSTREAMUTIL_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/io/InputStream.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbFileInputStream.h"
#include "AbFileLocalInputStream.h"

class CloudStreamUtil
            : public Object
         {
        

    private: static const instance: CloudStreamUtil = new CloudStreamUtil();

    public static CloudStreamUtil getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

                //@Throws(Exception.constructor)
            
    public InputStream getFile(AbFile file);

                //@Throws(Exception.constructor)
            
    public InputStream getFileAnyWhere(AbFile file);

                //@Throws(Exception.constructor)
            
    public InputStream getFileLocal(AbFile file);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_CLOUDSTREAMUTIL_H
