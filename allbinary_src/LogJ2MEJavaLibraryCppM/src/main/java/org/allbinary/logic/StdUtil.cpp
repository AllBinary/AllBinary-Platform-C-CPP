
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
        



            #include "../../../java/lang/Object.h"
        
#include <java/util/Hashtable.h>

      
#include <java/util/Stack.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
/*actual*/ class StdUtil
            : public Object
         {

    private: static StdUtil instance() { return StdUtil(); }

    /*actual*/ public: static StdUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StdUtil::instance();
    
}


    /*actual*/ public: const Hashtable<any, any> NULL_TABLE = this->createHashtable();

    public: Stack<any> createStack(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Stack<any>();
    
}


    public: Hashtable<any, any> createHashtable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Hashtable<any, any>();
    
}


};

            

