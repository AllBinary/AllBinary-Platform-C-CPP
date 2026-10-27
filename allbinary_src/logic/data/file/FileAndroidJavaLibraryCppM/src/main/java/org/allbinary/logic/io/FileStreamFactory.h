
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILESTREAMFACTORY_H
        #define ORG_ALLBINARY_LOGIC_IO_FILESTREAMFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Context;
class ResourceUtil;
class NullUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AbFileInputStream;
class AbFileOutputStream;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FileStreamFactory
            : public virtual Object
         {

    private: static Object* SINGLETON;

    public: static FileStreamFactory* getInstance();

    private: Object* context;

private: FileStreamFactory(Context* context);

                //@Throws(Exception.constructor)
            
    public: AbFileInputStream* getFileInputStreamInstance(std::string path, std::string fileName);

                //@Throws(Exception.constructor)
            
    public: AbFileOutputStream* getFileOutputStreamInstance(std::string path, std::string fileName);

                //@Throws(Exception.constructor)
            
    public: void delete_(std::string path, std::string fileName);

    private: Context* getContext();

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILESTREAMFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_FILESTREAMFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_FILESTREAMFACTORY_H_COMPLETE
        #if __has_include(<android/content/Context.h>)
#include <android/content/Context.h>
#endif
#if __has_include(<org/allbinary/data/resource/ResourceUtil.h>)
#include <org/allbinary/data/resource/ResourceUtil.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include("org/allbinary/logic/io/AbFileInputStream.h")
#include "org/allbinary/logic/io/AbFileInputStream.h"
#endif
#if __has_include("org/allbinary/logic/io/AbFileOutputStream.h")
#include "org/allbinary/logic/io/AbFileOutputStream.h"
#endif

        #endif
    
