
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
        



            #include "../../../../../java/lang/ClassLoader.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class NativeLibraryClassLoader: public ClassLoader {

    private: std::string message = "This Class Loader Does Not Load Classes - Only For Loading and Unloading of Native Libraries";

public: NativeLibraryClassLoader(ClassLoader parent){
            super(parent);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


};

            

