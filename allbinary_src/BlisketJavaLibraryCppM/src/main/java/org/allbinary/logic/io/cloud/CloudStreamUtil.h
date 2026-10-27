
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/InputStream.h>
class LogUtil;
class AbFile;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AbFileInputStream;
class AbFileLocalInputStream;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CloudStreamUtil
            : public virtual Object
         {

    private: static CloudStreamUtil* instance_owner();
    private: static CloudStreamUtil* instance;

    public: static CloudStreamUtil* getInstance();


            
    public: CloudStreamUtil();
        
    /*protected*/ public: LogUtil* logUtil;

                //@Throws(Exception.constructor)
            
    public: InputStream* getFile(AbFile* file);

                //@Throws(Exception.constructor)
            
    public: InputStream* getFileAnyWhere(AbFile* file);

                //@Throws(Exception.constructor)
            
    public: InputStream* getFileLocal(AbFile* file);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_CLOUDSTREAMUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_CLOUDSTREAMUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_CLOUDSTREAMUTIL_H_COMPLETE
        #if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include("org/allbinary/logic/io/AbFileInputStream.h")
#include "org/allbinary/logic/io/AbFileInputStream.h"
#endif
#if __has_include("org/allbinary/logic/io/AbFileLocalInputStream.h")
#include "org/allbinary/logic/io/AbFileLocalInputStream.h"
#endif

        #endif
    
