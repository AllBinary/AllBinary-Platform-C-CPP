
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_SECUREDNATIVELIBRARYINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_SECUREDNATIVELIBRARYINTERFACE_H

            #include "../../../../../java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SecuredNativeLibraryInterface {
        

                //@Throws(Exception.constructor)
            
    load();

                //@Throws(Exception.constructor)
            
    unload();

    bool unlock(string key);

    string getLibraryName();

    string getName();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_SECUREDNATIVELIBRARYINTERFACE_H
