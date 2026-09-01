
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_ABFILEINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_ABFILEINTERFACE_H

            #include <vector>
        
#include <java/io/FilenameFilter.h>

      
#include <java/io/IOException.h>

      
#include <java/net/URI.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbFileInterface {

    bool canRead();

    bool canWrite();

                //@Throws(IOException.constructor)
            
    bool createNewFile();

                //@Throws(IOException.constructor)
            
    bool delete_();

    void deleteOnExit();

    bool exists();

    std::string getAbsolutePath();

                //@Throws(IOException.constructor)
            
    std::string getCanonicalPath();

    std::string getParent();

    std::string getPath();

    bool isAbsolute();

    bool isDirectory();

    bool isFile();

    bool isHidden();

    int64_t lastModified();

    int64_t length();

    std::vector<std::string> list();

    std::vector<std::string> listWithFilter(FilenameFilter filter);

    bool mkdir();

    bool mkdirs();

    bool setLastModified(int64_t time);

    bool setReadOnly();

    std::string toString();

    URI toURI();

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_ABFILEINTERFACE_H
