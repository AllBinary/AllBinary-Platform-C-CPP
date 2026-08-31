
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/System.h"
        
#include <org/allbinary/logic/io/file/directory/DirectoryBooleanFileVisitor.h>

      
#include <org/allbinary/logic/io/file/directory/DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor.h>

      
#include <org/allbinary/logic/io/file/directory/DirectoryOrIncludeFileExtensionBooleanFileVisitor.h>

      
#include <org/allbinary/logic/io/file/directory/SubDirectory.h>

      
#include <org/allbinary/logic/io/file/filter/VisitorFileFilter.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbFile.h"

class FileListFetcher
            : public Object
         {
        

    private: static const instance: FileListFetcher = new FileListFetcher();

    public static FileListFetcher getInstance();

    private: const subDirectory: SubDirectory = SubDirectory.getInstance()!;

    public BasicArrayList getFiles(string path);

    public BasicArrayList getFiles(string path, std::vector<string> includeExtensions);

    public BasicArrayList getFiles(string path, string includeExtension);

    public BasicArrayList getFiles(string path, string pathIncludes, string includeExtension);

    public BasicArrayList getTrackedFiles(string path, std::vector<string> includeExtensions);

    public BasicArrayList getTrackedFiles(string path, string includeExtension);

    public BasicArrayList getDirectories(string path);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILELISTFETCHER_H
