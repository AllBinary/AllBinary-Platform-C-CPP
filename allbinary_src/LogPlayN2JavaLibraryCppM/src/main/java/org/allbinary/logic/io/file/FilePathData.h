
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHDATA_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHDATA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FilePathData
            : public virtual Object
         {

    private: static FilePathData* instance_owner();
    private: static FilePathData* instance;

    public: static FilePathData* getInstance();

    public: const char SEPARATORCHAR = '\\';

    public: std::string PATH_START = "\\\\";

private: FilePathData();

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHDATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHDATA_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEPATHDATA_H_COMPLETE
        
        #endif
    
