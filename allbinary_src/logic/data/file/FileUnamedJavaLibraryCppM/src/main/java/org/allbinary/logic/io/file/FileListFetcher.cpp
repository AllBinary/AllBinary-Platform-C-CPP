
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILELISTFETCHER_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILELISTFETCHER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/FileListFetcher.h"
        

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


FileListFetcher::FileListFetcher() : subDirectory(SubDirectory::getInstance()) {
        }
        auto FileListFetcher::instance_owner() -> FileListFetcher* { static std::unique_ptr<FileListFetcher> value(new FileListFetcher()); return value.get(); }
FileListFetcher* FileListFetcher::instance = FileListFetcher::instance_owner();

    auto FileListFetcher::getInstance() -> FileListFetcher*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return FileListFetcher::instance;
    
}


    auto FileListFetcher::getFiles(std::string path) -> BasicArrayList*{

        try {
            
    BasicArrayList* files = this->subDirectory->search(AbFile::createAbFile(path));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return files;
    

                //: 
} catch(Exception& e) 
            {
e.printStackTrace();
    
System.out.println(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Error: ") +JavaString::valueOf(e)) +JavaString::valueOf("\nMsg: ")) +JavaString::valueOf(e.message));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto FileListFetcher::getFiles(std::string path, std::vector<std::string> includeExtensions) -> BasicArrayList*{

        try {
            
    BasicArrayList* includeExtensionBasicArrayList = new BasicArrayListD();;
    

    int32_t size = includeExtensions.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
includeExtensionBasicArrayList->add(includeExtensions[index]);
    
}


    VisitorFileFilter* visitorFileFilter = new VisitorFileFilter(new DirectoryOrIncludeFileExtensionBooleanFileVisitor(includeExtensionBasicArrayList));;
    

    BasicArrayList* files = this->subDirectory->search(visitorFileFilter, AbFile::createAbFile(path));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return files;
    

                //: 
} catch(Exception& e) 
            {
e.printStackTrace();
    
System.out.println(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Error: ") +JavaString::valueOf(e)) +JavaString::valueOf("\nMsg: ")) +JavaString::valueOf(e.message));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto FileListFetcher::getFiles(std::string path, std::string includeExtension) -> BasicArrayList*{

        try {
            
    BasicArrayList* includeExtensionBasicArrayList = new BasicArrayListD();;
    
includeExtensionBasicArrayList->add(includeExtension);
    

    VisitorFileFilter* visitorFileFilter = new VisitorFileFilter(new DirectoryOrIncludeFileExtensionBooleanFileVisitor(includeExtensionBasicArrayList));;
    

    BasicArrayList* files = this->subDirectory->search(visitorFileFilter, AbFile::createAbFile(path));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return files;
    

                //: 
} catch(Exception& e) 
            {
e.printStackTrace();
    
System.out.println(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Error: ") +JavaString::valueOf(e)) +JavaString::valueOf("\nMsg: ")) +JavaString::valueOf(e.message));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto FileListFetcher::getFiles(std::string path, std::string pathIncludes, std::string includeExtension) -> BasicArrayList*{

        try {
            
    BasicArrayList* includeExtensionBasicArrayList = new BasicArrayListD();;
    
includeExtensionBasicArrayList->add(includeExtension);
    

    VisitorFileFilter* visitorFileFilter = new VisitorFileFilter(new DirectoryOrIncludeFileExtensionBooleanFileVisitor(includeExtensionBasicArrayList, pathIncludes));;
    

    BasicArrayList* files = this->subDirectory->search(visitorFileFilter, AbFile::createAbFile(path));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return files;
    

                //: 
} catch(Exception& e) 
            {
e.printStackTrace();
    
System.out.println(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Error: ") +JavaString::valueOf(e)) +JavaString::valueOf("\nMsg: ")) +JavaString::valueOf(e.message));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto FileListFetcher::getTrackedFiles(std::string path, std::vector<std::string> includeExtensions) -> BasicArrayList*{

        try {
            
    BasicArrayList* includeExtensionBasicArrayList = new BasicArrayListD();;
    

    int32_t size = includeExtensions.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
includeExtensionBasicArrayList->add(includeExtensions[index]);
    
}


    VisitorFileFilter* visitorFileFilter = new VisitorFileFilter(new DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor(includeExtensionBasicArrayList));;
    

    BasicArrayList* files = this->subDirectory->search(visitorFileFilter, AbFile::createAbFile(path));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return files;
    

                //: 
} catch(Exception& e) 
            {
e.printStackTrace();
    
System.out.println(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Error: ") +JavaString::valueOf(e)) +JavaString::valueOf("\nMsg: ")) +JavaString::valueOf(e.message));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto FileListFetcher::getTrackedFiles(std::string path, std::string includeExtension) -> BasicArrayList*{

        try {
            
    BasicArrayList* includeExtensionBasicArrayList = new BasicArrayListD();;
    
includeExtensionBasicArrayList->add(includeExtension);
    

    VisitorFileFilter* visitorFileFilter = new VisitorFileFilter(new DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor(includeExtensionBasicArrayList));;
    

    BasicArrayList* files = this->subDirectory->search(visitorFileFilter, AbFile::createAbFile(path));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return files;
    

                //: 
} catch(Exception& e) 
            {
e.printStackTrace();
    
System.out.println(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Error: ") +JavaString::valueOf(e)) +JavaString::valueOf("\nMsg: ")) +JavaString::valueOf(e.message));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto FileListFetcher::getDirectories(std::string path) -> BasicArrayList*{

        try {
            
    VisitorFileFilter* visitorFileFilter = new VisitorFileFilter(new DirectoryBooleanFileVisitor());;
    

    BasicArrayList* files = this->subDirectory->search(visitorFileFilter, AbFile::createAbFile(path));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return files;
    

                //: 
} catch(Exception& e) 
            {
e.printStackTrace();
    
System.out.println(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Error: ") +JavaString::valueOf(e)) +JavaString::valueOf("\nMsg: ")) +JavaString::valueOf(e.message));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILELISTFETCHER_CPP
