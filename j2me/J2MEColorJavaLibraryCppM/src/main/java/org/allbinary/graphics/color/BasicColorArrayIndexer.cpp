
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
        



            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicColor.h"

class BasicColorArrayIndexer
            : public Object
         {
        

    private: basicColorArray: std::vector<BasicColor>;

    private: circularIndexUtil: CircularIndexUtil;

public constructor (std::vector<BasicColor> basicColorArray){

            super();
        this.basicColorArray= basicColorArray;
    
this.circularIndexUtil= CircularIndexUtil.createInstance(this.basicColorArray!.length);
    
}


    public next(){
this.circularIndexUtil!.next();
    
}


    public BasicColor get(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicColorArray[this.circularIndexUtil!.getIndex()]!;
    
}


    public std::vector<BasicColor> getBasicColorArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicColorArray;
    
}


};

            

