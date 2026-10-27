
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/TouchButtonInput.h"

class CurrentlyPressedTouchButtonSingleton
            : public Object
         {

    private: static CurrentlyPressedTouchButtonSingleton* instance() { static std::unique_ptr<CurrentlyPressedTouchButtonSingleton> value(new CurrentlyPressedTouchButtonSingleton()); return value.get(); }

    public: static CurrentlyPressedTouchButtonSingleton* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CurrentlyPressedTouchButtonSingleton::instance();
    
}


    protected: BasicArrayList* list = new BasicArrayListD();

protected: CurrentlyPressedTouchButtonSingleton(){
}


    public: int32_t size(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list->size();;
    
}


    public: TouchButtonInput* removeAt(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<TouchButtonInput*>(this->list->removeAt(index));
    
}


    public: bool remove(TouchButtonInput* touchButtonInput){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list->remove(touchButtonInput);;
    
}


    public: TouchButtonInput* get(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<TouchButtonInput*>(this->list->objectArray[index]);
    
}


    public: bool contains(TouchButtonInput* touchButtonInput){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list->contains(touchButtonInput);;
    
}


    public: void add(TouchButtonInput* touchButtonInput){
this->list->add(touchButtonInput);
    
}


};

            

