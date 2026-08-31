
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHUTIL_H
        #define ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHUTIL_H

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbPath.h"

class AbPathUtil
            : public Object
         {
        

    private: static const instance: AbPathUtil = new AbPathUtil();

    public static AbPathUtil getInstance();

    public const NO_ABPATH: AbPath = AbPath.createAbPath()!;

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHUTIL_H
