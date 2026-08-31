
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
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InputImageType
            : public Object
         {
        

    private: static hashMap: HashMap<any, any> = new HashMap<any, any>();

    private: static const TYPE_VECTOR: Vector = new Vector();

    public static CAPTURE: InputImageType = new InputImageType("Capture", 0);

    public static COMPARISON: InputImageType = new InputImageType("Comparison", 1);

    public static MOTION: InputImageType = new InputImageType("Motion", 2);

    public static InputImageType getInstance(string imageTypeString){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputImageType.hashMap!.get(imageTypeString) as InputImageType;
    
}


    public static Vector getAllAsVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputImageType.TYPE_VECTOR;
    
}


    private: const name: string;

    private: const index: int32_t;

private constructor (string name, int32_t index){

            super();
        this.name= name;
    
this.index= index;
    
InputImageType.TYPE_VECTOR.add(this);
    
InputImageType.hashMap!.put(this.getName(), this);
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "ImageType: " +this.getName();
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public int32_t getIndex(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.index;
    
}


};

            

