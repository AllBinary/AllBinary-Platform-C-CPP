
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_ABFILE_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_ABFILE_H

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
            
    public static AbFile createAbFileWithChild(AbFile file, string childPathName);

                //@Throws(Exception.constructor)
            
    public static AbFile createAbFile(string filePath);

                //@Throws(Exception.constructor)
            
    public static AbFile createAbFilePathAndName(string filePath, string fileName);

    public static AbFile createAbFileFromAbPath(AbPath abPath);

    public static AbFile createAbFileFromRawPath(string filePath);

    private: const file: File;

 constructor (File file);

    File getFile();

    public string getName();

    public string getParent();

    public any getParentFile();

    public string getPath();

    public bool isAbsolute();

    public string getAbsolutePath();

    public any getAbsoluteFile();

                //@Throws(IOException.constructor)
            
    public string getCanonicalPath();

                //@Throws(IOException.constructor)
            
    public any getCanonicalFile();

    public URI toURI();

    public bool canRead();

    public bool canWrite();

    public bool exists();

    public bool isDirectory();

    public bool isFile();

    public bool isHidden();

    public int64_t lastModified();

    public int64_t length();

                //@Throws(IOException.constructor)
            
    public bool createNewFile();

                //@Throws(IOException.constructor)
            
    public bool delete();

    public deleteOnExit();

    public std::vector<string> list();

    public std::vector<string> listWithFilter(FilenameFilter filter);

    public std::vector<any> listFiles();

    public std::vector<any> listFilesFileNameFilter(FilenameFilter filter);

    public std::vector<any> listFilesFileFilter(FileFilter filter);

    public bool mkdir();

    public bool mkdirs();

    public bool renameTo(AbFile dest);

    public bool setLastModified(int64_t time);

    public bool setReadOnly();

    public bool setWritable(bool writable, bool ownerOnly);

    public bool setWritable(bool writable);

    public bool setReadable(bool readable, bool ownerOnly);

    public bool setReadable(bool readable);

    public bool setExecutable(bool executable, bool ownerOnly);

    public bool setExecutable(bool executable);

    public bool canExecute();

    public int64_t getTotalSpace();

    public int64_t getFreeSpace();

    public int64_t getUsableSpace();

    public int32_t compareTo(File pathname);

    public bool equals(any = {} obj);

    public int32_t hashCode();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_ABFILE_H
