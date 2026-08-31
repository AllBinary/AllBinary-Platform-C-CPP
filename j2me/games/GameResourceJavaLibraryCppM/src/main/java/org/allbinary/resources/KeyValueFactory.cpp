
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
        



            #include "../../../java/lang/Object.h"
        
#include <java/util/Hashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class KeyValueFactory
            : public Object
         {
        

    private: static const instance: KeyValueFactory = new KeyValueFactory();

    public static KeyValueFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return KeyValueFactory.instance;
    
}


    public const MAP: Hashtable<any, any> = new Hashtable<any, any>();

    public string get(string key){

    value: string = this.MAP.get(key) as string;;
    

                        if(value == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return key;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return value;
    
}


};

            

