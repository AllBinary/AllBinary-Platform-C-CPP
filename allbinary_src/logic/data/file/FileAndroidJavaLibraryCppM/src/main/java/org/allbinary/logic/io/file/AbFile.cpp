
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
        
#include <java/io/File.h>

      
#include <java/io/FileFilter.h>

      
#include <java/io/FilenameFilter.h>

      
#include <java/io/IOException.h>

      
#include <java/net/URI.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbFileInterface.h"

class AbFile
            : public Object
        : public AbFileInterface {
        

    public static const NULL_FILE: AbFile = AbFile.createAbFileFromRawPath(StringUtil.getInstance()!.EMPTY_STRING)!;

                //@Throws(Exception.constructor)
            
    public static AbFile createAbFileWithChild(AbFile file, string childPathName){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFile(new File(file.getFile(), childPathName));
    
}


                //@Throws(Exception.constructor)
            
    public static AbFile createAbFile(string filePath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFile(new File(new AbPath(filePath, StringUtil.getInstance()!.EMPTY_STRING).toFileSystemString()));
    
}


                //@Throws(Exception.constructor)
            
    public static AbFile createAbFilePathAndName(string filePath, string fileName){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFile(new File(new AbPath(filePath, StringUtil.getInstance()!.EMPTY_STRING).toFileSystemString(), fileName));
    
}


    public static AbFile createAbFileFromAbPath(AbPath abPath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFile(new File(abPath!.toFileSystemString()));
    
}


    public static AbFile createAbFileFromRawPath(string filePath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFile(new File(filePath));
    
}


    private: const file: File;

protected constructor (File file){

            super();
        this.file= file;
    
}


    File getFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.getName();;
    
}


    public string getParent(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.getParent();;
    
}


    public File getParentFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.getParentFile();;
    
}


    public string getPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.getPath();;
    
}


    public bool isAbsolute(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.isAbsolute();;
    
}


    public string getAbsolutePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.getAbsolutePath();;
    
}


    public File getAbsoluteFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.getAbsoluteFile();;
    
}


                //@Throws(IOException.constructor)
            
    public string getCanonicalPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.getCanonicalPath();;
    
}


                //@Throws(IOException.constructor)
            
    public File getCanonicalFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.getCanonicalFile();;
    
}


    public URI toURI(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.toURI();;
    
}


    public bool canRead(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.canRead();;
    
}


    public bool canWrite(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.canWrite();;
    
}


    public bool exists(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.exists();;
    
}


    public bool isDirectory(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.isDirectory();;
    
}


    public bool isFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.isFile();;
    
}


    public bool isHidden(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.isHidden();;
    
}


    public int64_t lastModified(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.lastModified();;
    
}


    public int64_t length(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.length();;
    
}


                //@Throws(IOException.constructor)
            
    public bool createNewFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.createNewFile();;
    
}


                //@Throws(IOException.constructor)
            
    public bool delete(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.delete();;
    
}


    public deleteOnExit(){
this.file.deleteOnExit();
    
}


    public std::vector<string> list(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.list();;
    
}


    public std::vector<string> listWithFilter(FilenameFilter filter){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.list(filter);;
    
}


    public std::vector<any> listFiles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.listFiles() as any[];
    
}


    public std::vector<any> listFilesFileNameFilter(FilenameFilter filter){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.listFiles(filter) as any[];
    
}


    public std::vector<any> listFilesFileFilter(FileFilter filter){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.listFiles(filter) as any[];
    
}


    public bool mkdir(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.mkdir();;
    
}


    public bool mkdirs(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.mkdirs();;
    
}


    public bool renameTo(AbFile dest){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.renameTo(dest.getFile());;
    
}


    public bool setLastModified(int64_t time){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.setLastModified(time);;
    
}


    public bool setReadOnly(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.setReadOnly();;
    
}


    public int32_t compareTo(File pathname){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.compareTo(pathname);;
    
}


    public bool equals(any = {} obj){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TsUtil.getInstance()!.equalsNotstring(this.file, obj);;
    
}


    public int32_t hashCode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.hashCode();;
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.toString();;
    
}


};

            

