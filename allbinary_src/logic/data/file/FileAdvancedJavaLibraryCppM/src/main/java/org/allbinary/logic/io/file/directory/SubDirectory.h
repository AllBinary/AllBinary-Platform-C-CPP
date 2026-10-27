
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_SUBDIRECTORY_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_SUBDIRECTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/io/FileFilter.h>
class AbFile;
class StringMaker;
class CommonSeps;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Directory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SubDirectory
            : public virtual Object
         {

    private: static SubDirectory* instance_owner();
    private: static SubDirectory* instance;

    public: static SubDirectory* getInstance();

    public: static std::string toString(BasicArrayList* files);

    private: Directory* directory;

private: SubDirectory();

    public: BasicArrayList* search(FileFilter* fileFilter, AbFile* file);

    public: BasicArrayList* search(AbFile* file);

    public: BasicArrayList* search(std::string searchValue, AbFile* file);

    public: BasicArrayList* search(int32_t level, AbFile* file);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_SUBDIRECTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_SUBDIRECTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_SUBDIRECTORY_H_COMPLETE
        #if __has_include(<java/io/FileFilter.h>)
#include <java/io/FileFilter.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/logic/io/file/directory/Directory.h")
#include "org/allbinary/logic/io/file/directory/Directory.h"
#endif

        #endif
    
