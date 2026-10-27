
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_ABFILEOUTPUTSTREAM_H
        #define ORG_ALLBINARY_LOGIC_IO_ABFILEOUTPUTSTREAM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/io/FileNotFoundException.h>
#include <java/io/FileOutputStream.h>
class AbFile;

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbFileOutputStream: public FileOutputStream {

                //@Throws(FileNotFoundException.constructor)
            
    public: static AbFileOutputStream* createFromAbFile(AbFile* file);

                //@Throws(FileNotFoundException.constructor)
            
    public: static AbFileOutputStream* createFromAbFileAppend(AbFile* file, bool append);

                //@Throws(FileNotFoundException.constructor)
            
    public: static AbFileOutputStream* createFromFilePath(std::string name);

                //@Throws(FileNotFoundException.constructor)
            
    public: static AbFileOutputStream* createFromFilePathAppend(std::string name, bool append);

public: AbFileOutputStream(std::string name, bool append);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_ABFILEOUTPUTSTREAM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_ABFILEOUTPUTSTREAM_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_ABFILEOUTPUTSTREAM_H_COMPLETE
        #if __has_include(<java/io/FileNotFoundException.h>)
#include <java/io/FileNotFoundException.h>
#endif
#if __has_include(<java/io/FileOutputStream.h>)
#include <java/io/FileOutputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif


        #endif
    
