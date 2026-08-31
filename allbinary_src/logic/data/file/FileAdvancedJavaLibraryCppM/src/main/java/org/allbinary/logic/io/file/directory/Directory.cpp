
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
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
        

    private: static const instance: Directory = new Directory();

    public static Directory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Directory.instance;
    
}


private constructor (){

            super();
        }


    public bool create(AbPath directoryAbPath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.create(directoryAbPath!.toFileSystemString());;
    
}


                //@Throws(Exception.constructor)
            
    public remove(AbPath existingDirectoryAbPath){
this.remove(existingDirectoryAbPath!.toFileSystemString());
    
}


    bool create(string directory){

        try {
            
    directoryFile: AbFile = FileFactory.getInstance()!.getInstance(directory)!;;
    

                        if(!directoryFile!.isDirectory())
                        
                                    {
                                    PreLogUtil.put("Creating Directories: " +directory, this, "create");
    

                        if(!directoryFile!.mkdirs())
                        
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
PreLogUtil.putOE("Error Creating Directories: " +directory, this, "create", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


                //@Throws(Exception.constructor)
            
    remove(string existingDirectory){

    existingDirectoryFile: AbFile = FileFactory.getInstance()!.getInstance(existingDirectory)!;;
    

                        if(existingDirectoryFile!.isDirectory())
                        
                                    {
                                    
                        if(existingDirectoryFile!.list()!.length > 0)
                        
                                    {
                                    


                            throw new Exception("Did not remove category: " +existingDirectory +" because files exist");
                    

                                    }
                                
                             else 
                        if(existingDirectoryFile!.delete())
                        
                                    {
                                    PreLogUtil.put("Successfully Removed: " +existingDirectory, "Directory", "remove");
    

                                    }
                                

                                    }
                                
                        else {
                            


                            throw new Exception("Category Directory Is Missing:" +existingDirectory);
                    

                        }
                            
}


    public BasicArrayList search(FileFilter fileFilter, AbFile file){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.search(fileFilter, file, false);;
    
}


    public BasicArrayList search(FileFilter fileFilter, AbFile file, bool isRecursiveSearch){

    fileList: BasicArrayList = new BasicArrayListD();;
    

    recursiveFileList: BasicArrayList;;
    

                        if(file.isDirectory())
                        
                                    {
                                    
    fileArray: std::vector<any> = file.listFilesFileFilter(fileFilter)!;;
    

                        if(fileArray == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    

                                    }
                                

    files: std::vector<AbFile> = FileWrapperUtil.wrapFiles(fileArray)!;;
    

                        if(files == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    

                                    }
                                

    size: int32_t = files.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
fileList!.add(files[index]!);
    

                        if(isRecursiveSearch)
                        
                                    {
                                    recursiveFileList= this.search(fileFilter, files[index]!, isRecursiveSearch);
    
fileList!.addAllList(recursiveFileList);
    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    
}


    public BasicArrayList search(AbFile file){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.search(file, false);;
    
}


    public BasicArrayList search(AbFile file, bool isRecursiveSearch){

    fileList: BasicArrayList = new BasicArrayListD();;
    

    recursiveFileList: BasicArrayList;;
    

                        if(file.isDirectory())
                        
                                    {
                                    
    fileArray: std::vector<any> = file.listFiles()!;;
    

                        if(fileArray == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    

                                    }
                                

    files: std::vector<AbFile> = FileWrapperUtil.wrapFiles(fileArray)!;;
    

                        if(files == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    

                                    }
                                




                        for (
    index: int32_t = 0;index < files.length; index++)
        {
fileList!.add(files[index]!);
    

                        if(isRecursiveSearch)
                        
                                    {
                                    recursiveFileList= this.search(files[index]!, isRecursiveSearch);
    
fileList!.addAllList(recursiveFileList);
    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    
}


    public BasicArrayList search(string searchValue, AbFile file){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.search(searchValue, file, false);;
    
}


    public BasicArrayList search(string searchValue, AbFile file, bool isRecursiveSearch){

    fileList: BasicArrayList = new BasicArrayListD();;
    

    recursiveFileList: BasicArrayList;;
    

                        if(file.isDirectory())
                        
                                    {
                                    
    fileArray: std::vector<any> = file.listFiles()!;;
    

                        if(fileArray == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    

                                    }
                                

    files: std::vector<AbFile> = FileWrapperUtil.wrapFiles(fileArray)!;;
    

                        if(files == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    

                                    }
                                




                        for (
    index: int32_t = 0;index < files.length; index++)
        {

                        if(files[index]!.getPath()!.indexOf(searchValue) >= 0)
                        
                                    {
                                    fileList!.add(files[index]!);
    

                                    }
                                

                        if(isRecursiveSearch)
                        
                                    {
                                    recursiveFileList= this.search(searchValue, files[index]!, isRecursiveSearch);
    
fileList!.addAllList(recursiveFileList);
    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    
}


    public BasicArrayList search(int32_t level, AbFile file){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.search(level, file, false);;
    
}


    public BasicArrayList search(int32_t level, AbFile file, bool isRecursiveSearch){

    fileList: BasicArrayList = new BasicArrayListD();;
    

    recursiveFileList: BasicArrayList;;
    

                        if(file.isDirectory())
                        
                                    {
                                    
    fileArray: std::vector<any> = file.listFiles()!;;
    

                        if(fileArray == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    

                                    }
                                

    files: std::vector<AbFile> = FileWrapperUtil.wrapFiles(fileArray)!;;
    

                        if(files == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    

                                    }
                                




                        for (
    index: int32_t = 0;index < files.length; index++)
        {
fileList!.add(files[index]!);
    

                        if(level <= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    

                                    }
                                
recursiveFileList= this.search(level -1, files[index]!, isRecursiveSearch);
    
fileList!.addAllList(recursiveFileList);
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileList;
    
}


};

            

