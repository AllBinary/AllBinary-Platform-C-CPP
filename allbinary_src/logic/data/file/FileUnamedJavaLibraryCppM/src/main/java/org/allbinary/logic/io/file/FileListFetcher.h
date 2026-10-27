
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
#include <org/allbinary/logic/io/file/directory/DirectoryBooleanFileVisitor.h>

      
#include <org/allbinary/logic/io/file/directory/DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor.h>

      
#include <org/allbinary/logic/io/file/directory/DirectoryOrIncludeFileExtensionBooleanFileVisitor.h>

      
#include <org/allbinary/logic/io/file/directory/SubDirectory.h>

      
#include <org/allbinary/logic/io/file/filter/VisitorFileFilter.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/file/AbFile.h"

class FileListFetcher
            : public Object
         {

    private: static FileListFetcher* instance() { static std::unique_ptr<FileListFetcher> value(new FileListFetcher()); return value.get(); }

    public: static FileListFetcher* getInstance();

    private: SubDirectory* subDirectory = SubDirectory::getInstance();

    public: BasicArrayList* getFiles(std::string path);

    public: BasicArrayList* getFiles(std::string path, std::vector<std::string> includeExtensions);

    public: BasicArrayList* getFiles(std::string path, std::string includeExtension);

    public: BasicArrayList* getFiles(std::string path, std::string pathIncludes, std::string includeExtension);

    public: BasicArrayList* getTrackedFiles(std::string path, std::vector<std::string> includeExtensions);

    public: BasicArrayList* getTrackedFiles(std::string path, std::string includeExtension);

    public: BasicArrayList* getDirectories(std::string path);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILELISTFETCHER_H
