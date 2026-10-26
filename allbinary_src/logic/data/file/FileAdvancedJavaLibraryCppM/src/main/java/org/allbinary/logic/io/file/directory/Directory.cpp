
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
        
#include <java/io/FileFilter.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FileFactory.h>

      
#include <org/allbinary/logic/io/file/FileWrapperUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Directory
            : public Object
         {

    private: static Directory instance() { return Directory(); }

    public: static Directory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Directory::instance();
    
}


private: Directory(){
}


    public: bool create(AbPath directoryAbPath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->create(directoryAbPath.toFileSystemString());;
    
}


                //@Throws(Exception.constructor)
            
    public: void remove(AbPath existingDirectoryAbPath){
this->remove(existingDirectoryAbPath.toFileSystemString());
    
}


    private: bool create(std::string directory){

        try {
            
    AbFile directoryFile = FileFactory::getInstance().getInstance(directory);;
    

                        if(!directoryFile.isDirectory())
                        
                                    {
                                    PreLogUtil::put("Creating Directories: " +directory, this, "create");
    

                        if(!directoryFile.mkdirs())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {
PreLogUtil::putOE("Error Creating Directories: " +directory, this, "create", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


                //@Throws(Exception.constructor)
            
    private: void remove(std::string existingDirectory){

    AbFile existingDirectoryFile = FileFactory::getInstance().getInstance(existingDirectory);;
    

                        if(existingDirectoryFile.isDirectory())
                        
                                    {
                                    
                        if(existingDirectoryFile.list().length > 0)
                        
                                    {
                                    


                            throw Exception("Did not remove category: " +existingDirectory +" because files exist");
                    

                                    }
                                
                             else 
                        if(existingDirectoryFile.delete_())
                        
                                    {
                                    PreLogUtil::put("Successfully Removed: " +existingDirectory, "Directory", "remove");
    

                                    }
                                

                                    }
                                
                        else {
                            


                            throw Exception("Category Directory Is Missing:" +existingDirectory);
                    

                        }
                            
}


    public: BasicArrayList search(FileFilter fileFilter, AbFile file){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->search(fileFilter, file, false);;
    
}


    public: BasicArrayList search(FileFilter fileFilter, AbFile file, bool isRecursiveSearch){

    BasicArrayList fileList = BasicArrayListD();;
    

    BasicArrayList recursiveFileList;;
    

                        if(file.isDirectory())
                        
                                    {
                                    
    std::vector<Object*> fileArray = file.listFilesFileFilter(fileFilter);;
    

                        if(fileArray == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    

                                    }
                                

    std::vector<AbFile> files = FileWrapperUtil::wrapFiles(fileArray);;
    

                        if(files == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    

                                    }
                                

    int32_t size = files.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
fileList.add(files[index]);
    

                        if(isRecursiveSearch)
                        
                                    {
                                    recursiveFileList= this->search(fileFilter, files[index], isRecursiveSearch);
    
fileList.addAllList(recursiveFileList);
    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    
}


    public: BasicArrayList search(AbFile file){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->search(file, false);;
    
}


    public: BasicArrayList search(AbFile file, bool isRecursiveSearch){

    BasicArrayList fileList = BasicArrayListD();;
    

    BasicArrayList recursiveFileList;;
    

                        if(file.isDirectory())
                        
                                    {
                                    
    std::vector<Object*> fileArray = file.listFiles();;
    

                        if(fileArray == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    

                                    }
                                

    std::vector<AbFile> files = FileWrapperUtil::wrapFiles(fileArray);;
    

                        if(files == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    

                                    }
                                




                        for (
    int32_t index = 0;index < files.size(); index++)
        {
fileList.add(files[index]);
    

                        if(isRecursiveSearch)
                        
                                    {
                                    recursiveFileList= this->search(files[index], isRecursiveSearch);
    
fileList.addAllList(recursiveFileList);
    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    
}


    public: BasicArrayList search(std::string searchValue, AbFile file){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->search(searchValue, file, false);;
    
}


    public: BasicArrayList search(std::string searchValue, AbFile file, bool isRecursiveSearch){

    BasicArrayList fileList = BasicArrayListD();;
    

    BasicArrayList recursiveFileList;;
    

                        if(file.isDirectory())
                        
                                    {
                                    
    std::vector<Object*> fileArray = file.listFiles();;
    

                        if(fileArray == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    

                                    }
                                

    std::vector<AbFile> files = FileWrapperUtil::wrapFiles(fileArray);;
    

                        if(files == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    

                                    }
                                




                        for (
    int32_t index = 0;index < files.size(); index++)
        {

                        if(files[index].getPath().indexOf(searchValue) >= 0)
                        
                                    {
                                    fileList.add(files[index]);
    

                                    }
                                

                        if(isRecursiveSearch)
                        
                                    {
                                    recursiveFileList= this->search(searchValue, files[index], isRecursiveSearch);
    
fileList.addAllList(recursiveFileList);
    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    
}


    public: BasicArrayList search(int32_t level, AbFile file){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->search(level, file, false);;
    
}


    public: BasicArrayList search(int32_t level, AbFile file, bool isRecursiveSearch){

    BasicArrayList fileList = BasicArrayListD();;
    

    BasicArrayList recursiveFileList;;
    

                        if(file.isDirectory())
                        
                                    {
                                    
    std::vector<Object*> fileArray = file.listFiles();;
    

                        if(fileArray == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    

                                    }
                                

    std::vector<AbFile> files = FileWrapperUtil::wrapFiles(fileArray);;
    

                        if(files == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    

                                    }
                                




                        for (
    int32_t index = 0;index < files.size(); index++)
        {
fileList.add(files[index]);
    

                        if(level <= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    

                                    }
                                
recursiveFileList= this->search(level -1, files[index], isRecursiveSearch);
    
fileList.addAllList(recursiveFileList);
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    
}


};

            

