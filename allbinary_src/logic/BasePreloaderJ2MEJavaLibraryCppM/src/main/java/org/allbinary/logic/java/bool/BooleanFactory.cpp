
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BooleanFactory
            : public Object
         {
        

    private: static const instance: BooleanFactory = new BooleanFactory();

    public static BooleanFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanFactory.instance;
    
}


    public const TRUE: Boolean = true;

    public const FALSE: Boolean = false;

    public const TRUE_STRING: string = this.TRUE.toString()!;

    public const FALSE_STRING: string = this.FALSE.toString()!;

    public const YES: string = "yes";

    public const NO: string = "no";

    public string toStringb(bool bool){

                        if(bool)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.TRUE_STRING;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.FALSE_STRING;
    

                        }
                            
}


};

            

