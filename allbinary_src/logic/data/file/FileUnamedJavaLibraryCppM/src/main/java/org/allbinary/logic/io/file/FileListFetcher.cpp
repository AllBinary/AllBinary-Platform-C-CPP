
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

    public static FileListFetcher getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileListFetcher.instance;
    
}


    private: const subDirectory: SubDirectory = SubDirectory.getInstance()!;

    public BasicArrayList getFiles(string path){

        try {
            
    files: BasicArrayList = this.subDirectory!.search(AbFile.createAbFile(path))!;;
    



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


    public BasicArrayList getFiles(string path, std::vector<string> includeExtensions){

        try {
            
    includeExtensionBasicArrayList: BasicArrayList = new BasicArrayListD();;
    

    size: int32_t = includeExtensions!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
includeExtensionBasicArrayList!.add(includeExtensions[index]!);
    
}


    visitorFileFilter: VisitorFileFilter = new VisitorFileFilter(new DirectoryOrIncludeFileExtensionBooleanFileVisitor(includeExtensionBasicArrayList));;
    

    files: BasicArrayList = this.subDirectory!.search(visitorFileFilter, AbFile.createAbFile(path))!;;
    



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


    public BasicArrayList getFiles(string path, string includeExtension){

        try {
            
    includeExtensionBasicArrayList: BasicArrayList = new BasicArrayListD();;
    
includeExtensionBasicArrayList!.add(includeExtension);
    

    visitorFileFilter: VisitorFileFilter = new VisitorFileFilter(new DirectoryOrIncludeFileExtensionBooleanFileVisitor(includeExtensionBasicArrayList));;
    

    files: BasicArrayList = this.subDirectory!.search(visitorFileFilter, AbFile.createAbFile(path))!;;
    



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


    public BasicArrayList getFiles(string path, string pathIncludes, string includeExtension){

        try {
            
    includeExtensionBasicArrayList: BasicArrayList = new BasicArrayListD();;
    
includeExtensionBasicArrayList!.add(includeExtension);
    

    visitorFileFilter: VisitorFileFilter = new VisitorFileFilter(new DirectoryOrIncludeFileExtensionBooleanFileVisitor(includeExtensionBasicArrayList, pathIncludes));;
    

    files: BasicArrayList = this.subDirectory!.search(visitorFileFilter, AbFile.createAbFile(path))!;;
    



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


    public BasicArrayList getTrackedFiles(string path, std::vector<string> includeExtensions){

        try {
            
    includeExtensionBasicArrayList: BasicArrayList = new BasicArrayListD();;
    

    size: int32_t = includeExtensions!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
includeExtensionBasicArrayList!.add(includeExtensions[index]!);
    
}


    visitorFileFilter: VisitorFileFilter = new VisitorFileFilter(new DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor(includeExtensionBasicArrayList));;
    

    files: BasicArrayList = this.subDirectory!.search(visitorFileFilter, AbFile.createAbFile(path))!;;
    



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


    public BasicArrayList getTrackedFiles(string path, string includeExtension){

        try {
            
    includeExtensionBasicArrayList: BasicArrayList = new BasicArrayListD();;
    
includeExtensionBasicArrayList!.add(includeExtension);
    

    visitorFileFilter: VisitorFileFilter = new VisitorFileFilter(new DirectoryOrIncludeFileExtensionAndTrackedBooleanFileVisitor(includeExtensionBasicArrayList));;
    

    files: BasicArrayList = this.subDirectory!.search(visitorFileFilter, AbFile.createAbFile(path))!;;
    



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


    public BasicArrayList getDirectories(string path){

        try {
            
    visitorFileFilter: VisitorFileFilter = new VisitorFileFilter(new DirectoryBooleanFileVisitor());;
    

    files: BasicArrayList = this.subDirectory!.search(visitorFileFilter, AbFile.createAbFile(path))!;;
    



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

            

