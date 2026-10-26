
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
        



            #include <vector>
        
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
        #include "AbFile.h"

class FileListFetcher
            : public Object
         {

    private: static FileListFetcher instance() { return FileListFetcher(); }

    public: static FileListFetcher getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileListFetcher::instance();
    
}


    private: const SubDirectory subDirectory = SubDirectory::getInstance();

    public: BasicArrayList getFiles(std::string path){

        try {
            
    BasicArrayList files = this->subDirectory.search(AbFile::createAbFile(path));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return files;
    

                //: 
} catch(e) 
            {
e.printStackTrace();
    
console.log("Error: " +e +"\nMsg: " +e.message);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: BasicArrayList getFiles(std::string path, std::vector<std::string> includeExtensions){

        try {
            
    BasicArrayList includeExtensionBasicArrayList = BasicArrayListD();;
    

    int32_t size = includeExtensions.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
includeExtensionBasicArrayList.add(includeExtensions[index]);
    
}


    VisitorFileFilter visitorFileFilter = VisitorFileFilter(DirectoryOrIncludeFileExtensionBooleanFileVisitor(includeExtensionBasicArrayList));;
    

    BasicArrayList files = this->subDirectory.search(visitorFileFilter, AbFile::createAbFile(path));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return files;
    

                //: 
} catch(e) 
            {
e.printStackTrace();
    
console.log("Error: " +e +"\nMsg: " +e.message);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: BasicArrayList getFiles(std::string path, std::string includeExtension){

        try {
            
    BasicArrayList includeExtensionBasicArrayList = BasicArrayListD();;
    
includeExtensionBasicArrayList.add(includeExtension);
    

    VisitorFileFilter visitorFileFilter = VisitorFileFilter(DirectoryOrIncludeFileExtensionBooleanFileVisitor(includeExtensionBasicArrayList));;
    

    BasicArrayList files = this->subDirectory.search(visitorFileFilter, AbFile::createAbFile(path));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return files;
    

                //: 
} catch(e) 
            {
e.printStackTrace();
    
console.log("Error: " +e +"\nMsg: " +e.message);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: BasicArrayList getFiles(std::string path, std::string pathIncludes, std::string includeExtension){

        try {
            
    BasicArrayList includeExtensionBasicArrayList = BasicArrayListD();;
    
includeExtensionBasicArrayList.add(includeExtension);
    

    VisitorFileFilter visitorFileFilter = VisitorFileFilter(DirectoryOrIncludeFileExtensionBooleanFileVisitor(includeExtensionBasicArrayList, pathIncludes));;
    

    BasicArrayList files = this->subDirectory.search(visitorFileFilter, AbFile::createAbFile(path));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return files;
    

                //: 
} catch(e) 
            {
e.printStackTrace();
    
console.log("Error: " +e +"\nMsg: " +e.message);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: BasicArrayList getTrackedFiles(std::string path, std::vector<std::string> includeExtensions){

        try {
            
    BasicArrayList includeExtensionBasicArrayList = BasicArrayListD();;
    

    int32_t size = includeExtensions.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
includeExtensionBasicArrayList.add(includeExtensions[index]);
    
}


    VisitorFileFilter visitorFileFilter = VisitorFileFilter(DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor(includeExtensionBasicArrayList));;
    

    BasicArrayList files = this->subDirectory.search(visitorFileFilter, AbFile::createAbFile(path));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return files;
    

                //: 
} catch(e) 
            {
e.printStackTrace();
    
console.log("Error: " +e +"\nMsg: " +e.message);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: BasicArrayList getTrackedFiles(std::string path, std::string includeExtension){

        try {
            
    BasicArrayList includeExtensionBasicArrayList = BasicArrayListD();;
    
includeExtensionBasicArrayList.add(includeExtension);
    

    VisitorFileFilter visitorFileFilter = VisitorFileFilter(DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor(includeExtensionBasicArrayList));;
    

    BasicArrayList files = this->subDirectory.search(visitorFileFilter, AbFile::createAbFile(path));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return files;
    

                //: 
} catch(e) 
            {
e.printStackTrace();
    
console.log("Error: " +e +"\nMsg: " +e.message);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: BasicArrayList getDirectories(std::string path){

        try {
            
    VisitorFileFilter visitorFileFilter = VisitorFileFilter(DirectoryBooleanFileVisitor());;
    

    BasicArrayList files = this->subDirectory.search(visitorFileFilter, AbFile::createAbFile(path));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return files;
    

                //: 
} catch(e) 
            {
e.printStackTrace();
    
console.log("Error: " +e +"\nMsg: " +e.message);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

