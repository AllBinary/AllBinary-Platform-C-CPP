
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILEFACTORY_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/FileNotFoundException.h>
class Context;
class ResourceUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AbFile;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FileFactory
            : public virtual Object
         {

    private: static FileFactory* SINGLETON_owner();
    private: static FileFactory* SINGLETON;

    public: static FileFactory* getInstance();

    private: Context* context;

private: FileFactory(Context* context);

                //@Throws(Exception.constructor)
            
    public: bool isFile(std::string path);

    public: Context* getContext();

                //@Throws(Exception.constructor)
            
    public: AbFile* getFile(std::string filePath);

                //@Throws(Exception.constructor)
            
    public: AbFile* getInstance(AbFile* file, std::string childFilePath);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_FILE_FILEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEFACTORY_H_COMPLETE
        #if __has_include(<java/io/FileNotFoundException.h>)
#include <java/io/FileNotFoundException.h>
#endif
#if __has_include(<android/content/Context.h>)
#include <android/content/Context.h>
#endif
#if __has_include(<org/allbinary/data/resource/ResourceUtil.h>)
#include <org/allbinary/data/resource/ResourceUtil.h>
#endif
#if __has_include("org/allbinary/logic/io/file/AbFile.h")
#include "org/allbinary/logic/io/file/AbFile.h"
#endif

        #endif
    
