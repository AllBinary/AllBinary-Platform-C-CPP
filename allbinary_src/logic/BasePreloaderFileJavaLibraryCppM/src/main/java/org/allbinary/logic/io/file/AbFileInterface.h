
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/io/FilenameFilter.h>

      
#include <java/io/IOException.h>

      
#include <java/net/URI.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbFileInterface {

    public: virtual bool canRead() = 0;

    public: virtual bool canWrite() = 0;

                //@Throws(IOException.constructor)
            
    public: virtual bool createNewFile() = 0;

                //@Throws(IOException.constructor)
            
    public: virtual bool delete_() = 0;

    public: virtual void deleteOnExit() = 0;

    public: virtual bool exists() = 0;

    public: virtual std::string getAbsolutePath() = 0;

                //@Throws(IOException.constructor)
            
    public: virtual std::string getCanonicalPath() = 0;

    public: virtual std::string getParent() = 0;

    public: virtual std::string getPath() = 0;

    public: virtual bool isAbsolute() = 0;

    public: virtual bool isDirectory() = 0;

    public: virtual bool isFile() = 0;

    public: virtual bool isHidden() = 0;

    public: virtual int64_t lastModified() = 0;

    public: virtual int64_t length() = 0;

    public: virtual std::vector<std::string> list() = 0;

    public: virtual std::vector<std::string> listWithFilter(FilenameFilter* filter) = 0;

    public: virtual bool mkdir() = 0;

    public: virtual bool mkdirs() = 0;

    public: virtual bool setLastModified(int64_t time) = 0;

    public: virtual bool setReadOnly() = 0;

    public: virtual std::string toString() = 0;

    public: virtual URI* toURI() = 0;

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_ABFILEINTERFACE_H
