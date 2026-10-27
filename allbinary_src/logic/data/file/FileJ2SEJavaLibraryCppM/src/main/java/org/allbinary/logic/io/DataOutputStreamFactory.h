
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_DATAOUTPUTSTREAMFACTORY_H
        #define ORG_ALLBINARY_LOGIC_IO_DATAOUTPUTSTREAMFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class AbFile;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AbFileOutputStream;
class AbDataOutputStream;
class FileStreamFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DataOutputStreamFactory
            : public virtual Object
         {

    private: static DataOutputStreamFactory* instance_owner();
    private: static DataOutputStreamFactory* instance;

    public: static DataOutputStreamFactory* getInstance();


            
    public: DataOutputStreamFactory();
        
                //@Throws(Exception.constructor)
            
    public: AbDataOutputStream* getInstanceForAbFile(AbFile* file);

                //@Throws(Exception.constructor)
            
    public: AbDataOutputStream* getInstance(std::string filePath, std::string fileName);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_DATAOUTPUTSTREAMFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_DATAOUTPUTSTREAMFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_DATAOUTPUTSTREAMFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include("org/allbinary/logic/io/AbFileOutputStream.h")
#include "org/allbinary/logic/io/AbFileOutputStream.h"
#endif
#if __has_include("org/allbinary/logic/io/AbDataOutputStream.h")
#include "org/allbinary/logic/io/AbDataOutputStream.h"
#endif
#if __has_include("org/allbinary/logic/io/FileStreamFactory.h")
#include "org/allbinary/logic/io/FileStreamFactory.h"
#endif

        #endif
    
