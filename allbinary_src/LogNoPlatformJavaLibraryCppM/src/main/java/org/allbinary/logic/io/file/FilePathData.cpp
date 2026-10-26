
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
        



            #include "java/lang/Object.h"
        
#include <java/io/File.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FilePathData
            : public Object
         {

    private: static FilePathData instance() { return FilePathData(); }

    public: static FilePathData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FilePathData::instance();
    
}


    public: const char SEPARATORCHAR = File::separatorChar;

    public: std::string PATH_START = File::separator;

private: FilePathData(){

                        if(File::separatorChar == '\\')
                        
                                    {
                                    this->PATH_START= File::separator +File::separator;
    

                                    }
                                
}


};

            

