
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
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PlayerType
            : public Object
         {
        

    private: id: int32_t;

    private: name: string = StringUtil.getInstance()!.EMPTY_STRING;

 constructor (string name, int32_t value){

            super();
        this.name= name;
    
this.id= value;
    
}


    public int32_t getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.id;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getName();;
    
}


};

            

