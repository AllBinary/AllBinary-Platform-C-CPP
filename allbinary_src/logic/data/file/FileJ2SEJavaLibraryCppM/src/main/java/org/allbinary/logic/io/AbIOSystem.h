
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_ABIOSYSTEM_H
        #define ORG_ALLBINARY_LOGIC_IO_ABIOSYSTEM_H

            #include "../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbIOSystem
            : public Object
         {
        

    private: static const instance: AbIOSystem = new AbIOSystem();

    public static AbIOSystem getInstance();

    private: const type: string = "java.io";

    public string getType();

    public bool isType(string type);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_ABIOSYSTEM_H
