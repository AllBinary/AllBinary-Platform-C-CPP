
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORY_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/directory/Directory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/FileFilter.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FileFactory.h>

      
#include <org/allbinary/logic/io/file/FileWrapperUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto Directory::instance_owner() -> Directory* { static std::unique_ptr<Directory> value(new Directory()); return value.get(); }
Directory* Directory::instance = Directory::instance_owner();

    auto Directory::getInstance() -> Directory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Directory::instance;
    
}


Directory::Directory(){
}


    auto Directory::create(AbPath* directoryAbPath) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->create(directoryAbPath->toFileSystemString());;
    
}


                //@Throws(Exception.constructor)
            
    auto Directory::remove(AbPath* existingDirectoryAbPath) -> void{
this->remove(existingDirectoryAbPath->toFileSystemString());
    
}


    auto Directory::create(std::string directory) -> bool{

        try {
            
    AbFile* directoryFile = FileFactory::getInstance()->getInstance(directory);;
    

                        if(!directoryFile->isDirectory())
                        
                                    {
                                    PreLogUtil::put(JavaString::valueOf("Creating Directories: ") +JavaString::valueOf(directory), this, "create");
    

                        if(!directoryFile->mkdirs())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                //: 
} catch(Exception& e) 
            {
PreLogUtil::putOE(JavaString::valueOf("Error Creating Directories: ") +JavaString::valueOf(directory), this, "create", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


                //@Throws(Exception.constructor)
            
    auto Directory::remove(std::string existingDirectory) -> void{

    AbFile* existingDirectoryFile = FileFactory::getInstance()->getInstance(existingDirectory);;
    

                        if(existingDirectoryFile->isDirectory())
                        
                                    {
                                    
                        if(existingDirectoryFile->list().size() > 0)
                        
                                    {
                                    


                            throw Exception(JavaString::valueOf(JavaString::valueOf("Did not remove category: ") +JavaString::valueOf(existingDirectory)) +JavaString::valueOf(" because files exist"));
                    

                                    }
                                
                             else 
                        if(existingDirectoryFile->delete_())
                        
                                    {
                                    PreLogUtil::put(JavaString::valueOf("Successfully Removed: ") +JavaString::valueOf(existingDirectory), "Directory", "remove");
    

                                    }
                                

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf("Category Directory Is Missing:") +JavaString::valueOf(existingDirectory));
                    

                        }
                            
}


    auto Directory::search(FileFilter* fileFilter, AbFile* file) -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->search(fileFilter, file, false);;
    
}


    auto Directory::search(FileFilter* fileFilter, AbFile* file, bool isRecursiveSearch) -> BasicArrayList*{

    BasicArrayList* fileList = new BasicArrayListD();;
    

    BasicArrayList* recursiveFileList;;
    

                        if(file->isDirectory())
                        
                                    {
                                    
    std::vector<Object*> fileArray = file->listFilesFileFilter(fileFilter);;
    

                        if(fileArray.empty())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return fileList;
    

                                    }
                                

    std::vector<AbFile*> files = FileWrapperUtil::wrapFiles(fileArray);;
    

                        if(files.empty())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return fileList;
    

                                    }
                                

    int32_t size = files.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
fileList->add(files[index]);
    

                        if(isRecursiveSearch)
                        
                                    {
                                    recursiveFileList= this->search(fileFilter, files[index], isRecursiveSearch);
    
fileList->addAllList(recursiveFileList);
    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return fileList;
    
}


    auto Directory::search(AbFile* file) -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->search(file, false);;
    
}


    auto Directory::search(AbFile* file, bool isRecursiveSearch) -> BasicArrayList*{

    BasicArrayList* fileList = new BasicArrayListD();;
    

    BasicArrayList* recursiveFileList;;
    

                        if(file->isDirectory())
                        
                                    {
                                    
    std::vector<Object*> fileArray = file->listFiles();;
    

                        if(fileArray.empty())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return fileList;
    

                                    }
                                

    std::vector<AbFile*> files = FileWrapperUtil::wrapFiles(fileArray);;
    

                        if(files.empty())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return fileList;
    

                                    }
                                




                        for (
    int32_t index = 0;index < files.size(); index++)
        {
fileList->add(files[index]);
    

                        if(isRecursiveSearch)
                        
                                    {
                                    recursiveFileList= this->search(files[index], isRecursiveSearch);
    
fileList->addAllList(recursiveFileList);
    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return fileList;
    
}


    auto Directory::search(std::string searchValue, AbFile* file) -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->search(searchValue, file, false);;
    
}


    auto Directory::search(std::string searchValue, AbFile* file, bool isRecursiveSearch) -> BasicArrayList*{

    BasicArrayList* fileList = new BasicArrayListD();;
    

    BasicArrayList* recursiveFileList;;
    

                        if(file->isDirectory())
                        
                                    {
                                    
    std::vector<Object*> fileArray = file->listFiles();;
    

                        if(fileArray.empty())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return fileList;
    

                                    }
                                

    std::vector<AbFile*> files = FileWrapperUtil::wrapFiles(fileArray);;
    

                        if(files.empty())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return fileList;
    

                                    }
                                




                        for (
    int32_t index = 0;index < files.size(); index++)
        {

                        if(JavaString::indexOf(files[index]->getPath(), searchValue) >= 0)
                        
                                    {
                                    fileList->add(files[index]);
    

                                    }
                                

                        if(isRecursiveSearch)
                        
                                    {
                                    recursiveFileList= this->search(searchValue, files[index], isRecursiveSearch);
    
fileList->addAllList(recursiveFileList);
    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return fileList;
    
}


    auto Directory::search(int32_t level, AbFile* file) -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->search(level, file, false);;
    
}


    auto Directory::search(int32_t level, AbFile* file, bool isRecursiveSearch) -> BasicArrayList*{

    BasicArrayList* fileList = new BasicArrayListD();;
    

    BasicArrayList* recursiveFileList;;
    

                        if(file->isDirectory())
                        
                                    {
                                    
    std::vector<Object*> fileArray = file->listFiles();;
    

                        if(fileArray.empty())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return fileList;
    

                                    }
                                

    std::vector<AbFile*> files = FileWrapperUtil::wrapFiles(fileArray);;
    

                        if(files.empty())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return fileList;
    

                                    }
                                




                        for (
    int32_t index = 0;index < files.size(); index++)
        {
fileList->add(files[index]);
    

                        if(level <= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return fileList;
    

                                    }
                                
recursiveFileList= this->search(level -1, files[index], isRecursiveSearch);
    
fileList->addAllList(recursiveFileList);
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return fileList;
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORY_CPP
