
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILELISTFETCHER_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILELISTFETCHER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
class DirectoryBooleanFileVisitor;
class DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor;
class DirectoryOrIncludeFileExtensionBooleanFileVisitor;
class SubDirectory;
class VisitorFileFilter;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AbFile;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FileListFetcher
            : public virtual Object
         {

    private: static FileListFetcher* instance_owner();
    private: static FileListFetcher* instance;

    public: static FileListFetcher* getInstance();


            
    public: FileListFetcher();
        
    private: SubDirectory* subDirectory;

    public: BasicArrayList* getFiles(std::string path);

    public: BasicArrayList* getFiles(std::string path, std::vector<std::string> includeExtensions);

    public: BasicArrayList* getFiles(std::string path, std::string includeExtension);

    public: BasicArrayList* getFiles(std::string path, std::string pathIncludes, std::string includeExtension);

    public: BasicArrayList* getTrackedFiles(std::string path, std::vector<std::string> includeExtensions);

    public: BasicArrayList* getTrackedFiles(std::string path, std::string includeExtension);

    public: BasicArrayList* getDirectories(std::string path);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILELISTFETCHER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_FILE_FILELISTFETCHER_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILELISTFETCHER_H_COMPLETE
        #if __has_include(<org/allbinary/logic/io/file/directory/DirectoryBooleanFileVisitor.h>)
#include <org/allbinary/logic/io/file/directory/DirectoryBooleanFileVisitor.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/directory/DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor.h>)
#include <org/allbinary/logic/io/file/directory/DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/directory/DirectoryOrIncludeFileExtensionBooleanFileVisitor.h>)
#include <org/allbinary/logic/io/file/directory/DirectoryOrIncludeFileExtensionBooleanFileVisitor.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/directory/SubDirectory.h>)
#include <org/allbinary/logic/io/file/directory/SubDirectory.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/filter/VisitorFileFilter.h>)
#include <org/allbinary/logic/io/file/filter/VisitorFileFilter.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/logic/io/file/AbFile.h")
#include "org/allbinary/logic/io/file/AbFile.h"
#endif

        #endif
    
