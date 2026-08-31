
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

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButtonInput.h"

class CurrentlyPressedTouchButtonSingleton
            : public Object
         {
        

    private: static const instance: CurrentlyPressedTouchButtonSingleton = new CurrentlyPressedTouchButtonSingleton();

    public static CurrentlyPressedTouchButtonSingleton getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CurrentlyPressedTouchButtonSingleton.instance;
    
}


    const list: BasicArrayList = new BasicArrayListD();

protected constructor (){

            super();
        }


    public int32_t size(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.list.size();;
    
}


    public TouchButtonInput removeAt(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.list.removeAt(index) as TouchButtonInput;
    
}


    public bool remove(TouchButtonInput touchButtonInput){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.list.remove(touchButtonInput);;
    
}


    public TouchButtonInput get(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.list.objectArray[index]! as TouchButtonInput;
    
}


    public bool contains(TouchButtonInput touchButtonInput){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.list.contains(touchButtonInput);;
    
}


    public add(TouchButtonInput touchButtonInput){
this.list.add(touchButtonInput);
    
}


};

            

