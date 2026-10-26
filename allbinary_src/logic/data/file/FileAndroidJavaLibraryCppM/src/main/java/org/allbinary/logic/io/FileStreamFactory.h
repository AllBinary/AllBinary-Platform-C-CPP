
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILESTREAMFACTORY_H
        #define ORG_ALLBINARY_LOGIC_IO_FILESTREAMFACTORY_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <android/content/Context.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbFileInputStream.h"
#include "AbFileOutputStream.h"

class FileStreamFactory
            : public Object
         {

    private: static Object* SINGLETON = NullUtil::getInstance().NULL_OBJECT;

    public: static FileStreamFactory getInstance();

    private: Object* context;

private: FileStreamFactory(Context context);

                //@Throws(Exception.constructor)
            
    public: AbFileInputStream getFileInputStreamInstance(std::string path, std::string fileName);

                //@Throws(Exception.constructor)
            
    public: AbFileOutputStream getFileOutputStreamInstance(std::string path, std::string fileName);

                //@Throws(Exception.constructor)
            
    public: void delete_(std::string path, std::string fileName);

    private: Context getContext();

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILESTREAMFACTORY_H
